#include "BaseNpc.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Blueprint/UserWidget.h"
#include "CustomerManager.h"


// Sets default values
ABaseNpc::ABaseNpc()
{
    PrimaryActorTick.bCanEverTick = true;

    Property1 = 0.0f;
    Property2 = 0;
    Property3 = false;
}


void ABaseNpc::BeginPlay()
{
	Super::BeginPlay();

    SpawnLocation = GetActorLocation();
    RandomizeProperties();
    
    // Widget'ı sıfırla
    InteractionWidget = nullptr;
}


void ABaseNpc::Interact_Implementation(AActor* Interactor)
{
    // Eğer widget zaten açıksa, kapat
    if (InteractionWidget)
    {
        CloseInteractionWidget();
        return;
    }

    // Widget'ı aç
    if (InteractionWidgetClass)
    {
        // Widget'ı oluştur ve NPC referansını aktar
        InteractionWidget = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), InteractionWidgetClass);
        if (UUserWidget* Widget = InteractionWidget)
        {
            // NPC referansını widget'a aktar
            if (UFunction* SetNPCFunc = Widget->FindFunction(FName("SetNPCReference")))
            {
                struct
                {
                    ABaseNpc* NPC;
                } Params;
                Params.NPC = this;
                Widget->ProcessEvent(SetNPCFunc, &Params);
            }

            Widget->AddToViewport();

            // Mouse'u göster ve input modunu UI'a çevir
            if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
            {
                PC->SetShowMouseCursor(true);
                FInputModeUIOnly InputMode;
                PC->SetInputMode(InputMode);
            }
        }
    }
}

void ABaseNpc::GetNPCProperties_Implementation(float& OutProperty1, int32& OutProperty2, bool& OutProperty3)
{
    OutProperty1 = Property1;
    OutProperty2 = Property2;
    OutProperty3 = Property3;
}


// we will override in blueprint
void ABaseNpc::ExecuteOption1_Implementation(AActor* Interactor)
{
    // Option 1 işlemleri burada
    
    // Widget'ı kapat
    CloseInteractionWidget();
}

void ABaseNpc::ExecuteOption2_Implementation(AActor* Interactor)
{
    // Option 2 işlemleri burada
    
    // Widget'ı kapat
    CloseInteractionWidget();
}

void ABaseNpc::ExecuteOption3_Implementation(AActor* Interactor)
{
    // Option 3 işlemleri burada
    
    // Widget'ı kapat
    CloseInteractionWidget();
}

bool ABaseNpc::CanInteract_Implementation(AActor* Interactor) const
{
	return true; // if need can be change
}

void ABaseNpc::MoveToTarget()
{
    if (AAIController* AIController = Cast<AAIController>(GetController()))
    {
        // Hareket parametrelerini ayarla
        const float AcceptanceRadius = 50.0f; // Hedefe ne kadar yaklaşacağını belirler
        const bool bStopOnOverlap = true;
        const bool bUsePathfinding = true;
        const bool bProjectDestinationToNavigation = true;
        const bool bCanStrafe = false;
        const bool bAllowPartialPath = true;

        // Hareketi başlat
        FAIMoveRequest MoveRequest;
        MoveRequest.SetGoalLocation(GetNPCTargetLocation());
        MoveRequest.SetAcceptanceRadius(AcceptanceRadius);
        MoveRequest.SetReachTestIncludesAgentRadius(true);
        MoveRequest.SetUsePathfinding(true);
        MoveRequest.SetAllowPartialPath(true);

        AIController->MoveTo(MoveRequest);
    }
}

void ABaseNpc::ReturnToSpawn()
{
    if (AAIController* AIController = Cast<AAIController>(GetController()))
    {
        const float AcceptanceRadius = -1.0f;
        const bool bStopOnOverlap = true;
        const bool bUsePathfinding = true;
        const bool bProjectDestinationToNavigation = true;
        const bool bCanStrafe = false;
        const bool bAllowPartialPath = true;

        AIController->MoveToLocation(
            SpawnLocation,
            AcceptanceRadius,
            bStopOnOverlap,
            bUsePathfinding,
            bProjectDestinationToNavigation,
            bCanStrafe,
            nullptr,
            bAllowPartialPath
        );
    }
}


void ABaseNpc::RandomizeProperties()
{
    Property1 = FMath::RandRange(0.0f, 100.0f);
    Property2 = FMath::RandRange(0, 100);
    Property3 = FMath::RandBool();
}

void ABaseNpc::CloseInteractionWidget()
{
    if (InteractionWidget)
    {
        InteractionWidget->RemoveFromParent();
        InteractionWidget = nullptr;

        // Input modunu sıfırla
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            PC->SetShowMouseCursor(false);
            FInputModeGameOnly InputMode;
            PC->SetInputMode(InputMode);
        }
    }
}

void ABaseNpc::OnInteractionComplete()
{
    // Spawn noktasına dön
    ReturnToSpawn();

    // Belirli bir süre sonra yok ol
    FTimerHandle DestroyTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, [this]()
    {
        if (CustomerManager)
        {
            CustomerManager->RemoveCustomerFromQueue(this);
        }
        Destroy();
    }, 2.0f, false);
}


