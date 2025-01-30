// Copyright Epic Games, Inc. All Rights Reserved.

#include "UniqueNPCProjectCharacter.h"
#include "UniqueNPCProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"


//////////////////////////////////////////////////////////////////////////
// AUniqueNPCProjectCharacter

AUniqueNPCProjectCharacter::AUniqueNPCProjectCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	// Hotbar'ı başlangıçta boş slotlarla doldur
	HotbarItems.SetNum(MaxHotbarSlots);
}

void AUniqueNPCProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// Tick'te sürekli kontrol etmek için
	PrimaryActorTick.bCanEverTick = true;

	// Hotbar widget'ını oluştur
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PC = Cast<APlayerController>(Controller))
		{
			if (TSubclassOf<UUserWidget> HotbarWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/UI/WBP_Hotbar")))
			{
				if (UUserWidget* HotbarWidget = CreateWidget<UUserWidget>(PC, HotbarWidgetClass))
				{
					// Widget'ı initialize et
					if (UFunction* InitFunc = HotbarWidget->FindFunction(FName("Initialize")))
					{
						HotbarWidget->ProcessEvent(InitFunc, nullptr);
					}
					HotbarWidget->AddToViewport();
				}
			}
		}
	}

	// Test item'ları ekle
	FInventoryItem TestItem1;
	TestItem1.Name = TEXT("Test Item 1");
	TestItem1.Description = TEXT("This is test item 1");
	// Icon'u Blueprint'te ayarlayın
	
	FInventoryItem TestItem2;
	TestItem2.Name = TEXT("Test Item 2");
	TestItem2.Description = TEXT("This is test item 2");
	// Icon'u Blueprint'te ayarlayın

	AddItemToHotbar(TestItem1);
	AddItemToHotbar(TestItem2);
}

void AUniqueNPCProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Her frame'de etkileşime girebilecek aktörleri kontrol et
	CheckForInteractables();
}

void AUniqueNPCProjectCharacter::CheckForInteractables()
{
	// Kameranın konumunu ve yönünü al
	FVector Location;
	FRotator Rotation;
	GetActorEyesViewPoint(Location, Rotation);

	// Line trace için bitiş noktası
	FVector End = Location + (Rotation.Vector() * InteractionDistance);

	// Line trace parametreleri
	FHitResult Hit;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	// Line trace yap
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECC_Visibility, QueryParams);

	// Önceki interactable aktörü kaydet
	AActor* PreviousInteractable = InteractableActor;

	if (bHit)
	{
		// Vurulan aktör IInteractable interface'ini implement ediyor mu kontrol et
		if (Hit.GetActor()->Implements<UIInteractable>())
		{
			InteractableActor = Hit.GetActor();
		}
		else
		{
			InteractableActor = nullptr;
		}
	}
	else
	{
		InteractableActor = nullptr;
	}

	// Eğer interactable aktör değiştiyse delegate'i çağır
	if (PreviousInteractable != InteractableActor)
	{
		OnInteractionUpdated.Broadcast();
	}
}

void AUniqueNPCProjectCharacter::Interact()
{
	if (InteractableActor)
	{
		IIInteractable::Execute_Interact(InteractableActor, this);
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AUniqueNPCProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUniqueNPCProjectCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AUniqueNPCProjectCharacter::Look);

		// Interaction
		if (InteractAction)
		{
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AUniqueNPCProjectCharacter::Interact);
		}

		// Hotbar slots
		for (int32 i = 0; i < HotbarSlotActions.Num() && i < MaxHotbarSlots; i++)
		{
			if (HotbarSlotActions[i])
			{
				EnhancedInputComponent->BindAction(HotbarSlotActions[i], ETriggerEvent::Triggered, this, 
					&AUniqueNPCProjectCharacter::SetActiveHotbarSlot, i);
			}
		}
	}
}


void AUniqueNPCProjectCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AUniqueNPCProjectCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AUniqueNPCProjectCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AUniqueNPCProjectCharacter::GetHasRifle()
{
	return bHasRifle;
}

bool AUniqueNPCProjectCharacter::AddItemToHotbar(const FInventoryItem& Item)
{
	// Boş slot ara
	for (int32 i = 0; i < HotbarItems.Num(); i++)
	{
		if (HotbarItems[i].Name.IsEmpty())
		{
			HotbarItems[i] = Item;
			OnHotbarUpdated.Broadcast(i);
			return true;
		}
	}
	return false; // Boş slot bulunamadı
}

void AUniqueNPCProjectCharacter::UseHotbarItem(int32 SlotIndex)
{
	if (SlotIndex >= 0 && SlotIndex < HotbarItems.Num())
	{
		if (!HotbarItems[SlotIndex].Name.IsEmpty())
		{
			// Item kullanma lojiği burada
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, 
				FString::Printf(TEXT("Using item: %s"), *HotbarItems[SlotIndex].Name));
		}
	}
}

void AUniqueNPCProjectCharacter::SetActiveHotbarSlot(int32 SlotIndex)
{
	if (SlotIndex >= 0 && SlotIndex < MaxHotbarSlots)
	{
		ActiveHotbarSlot = SlotIndex;
		OnHotbarUpdated.Broadcast(SlotIndex);
	}
}