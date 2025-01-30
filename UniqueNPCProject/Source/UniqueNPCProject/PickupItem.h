// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryItemStruct.h"
#include "IInteractable.h"
#include "PickupItem.generated.h"

UCLASS()
class UNIQUENPCPROJECT_API APickupItem : public AActor, public IIInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class UStaticMeshComponent* MeshComponent;

	// Collision sphere
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class USphereComponent* CollisionSphere;

	// Item data
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	FInventoryItem ItemData;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// IInteractable interface implementasyonları
	virtual void Interact_Implementation(AActor* Interactor) override;
	virtual bool CanInteract_Implementation(AActor* Interactor) const override;

	// Item verilerini ayarlamak için
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetItemData(const FInventoryItem& NewItemData);

	// Blueprint'ten item verilerini almak için
	UFUNCTION(BlueprintPure, Category = "Pickup")
	const FInventoryItem& GetItemData() const { return ItemData; }
};
