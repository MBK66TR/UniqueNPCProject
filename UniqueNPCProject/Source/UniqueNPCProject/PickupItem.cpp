// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UniqueNPCProjectCharacter.h"

// Sets default values
APickupItem::APickupItem()
{
	PrimaryActorTick.bCanEverTick = false;

	// Mesh component'i oluştur
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
	
	// Mesh collision ayarları
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	MeshComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	MeshComponent->SetGenerateOverlapEvents(true);

	// Collision sphere'i oluştur
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(RootComponent);
	CollisionSphere->SetSphereRadius(100.0f);
	
	// Sphere collision ayarları
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Overlap);
	
	// Varsayılan item verilerini ayarla
	ItemData.Name = TEXT("Default Item");
	ItemData.Description = TEXT("This is a default item");
}

// Called when the game starts or when spawned
void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupItem::Interact_Implementation(AActor* Interactor)
{
	// Karaktere cast et
	if (AUniqueNPCProjectCharacter* Character = Cast<AUniqueNPCProjectCharacter>(Interactor))
	{
		// Item'ı hotbar'a ekle
		if (Character->AddItemToHotbar(ItemData))
		{
			// Başarıyla eklendiyse aktörü yok et
			Destroy();
		}
		else
		{
			// Hotbar dolu mesajı göster
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Hotbar is full!"));
		}
	}
}

bool APickupItem::CanInteract_Implementation(AActor* Interactor) const
{
	return true;
}

void APickupItem::SetItemData(const FInventoryItem& NewItemData)
{
	ItemData = NewItemData;
}

