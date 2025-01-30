// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "IInteractable.h"
#include "InventoryItemStruct.h"
#include "UniqueNPCProjectCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHotbarUpdated, int32, SlotIndex);

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

UCLASS(config=Game)
class AUniqueNPCProjectCharacter : public ACharacter
{

	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InteractAction;

	/** Hotbar Slot Actions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TArray<class UInputAction*> HotbarSlotActions;

public:
	AUniqueNPCProjectCharacter();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay();

public:
	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	/** Setter to set the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	void SetHasRifle(bool bNewHasRifle);

	/** Getter for the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	bool GetHasRifle();

	// Interaction Distance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	float InteractionDistance = 200.0f;

	// Interactable Actor
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	AActor* InteractableActor;

	// Function to interact with the interactable actor
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Interact();

	// Function to check for interactables
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void CheckForInteractables();

	// Blueprint Event to update the interaction widget
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionUpdated OnInteractionUpdated;

	// Hotbar array'i
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hotbar")
	TArray<FInventoryItem> HotbarItems;

	// Maksimum hotbar slot sayısı
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hotbar")
	int32 MaxHotbarSlots = 6;

	// Aktif slot indeksi
	UPROPERTY(BlueprintReadOnly, Category = "Hotbar")
	int32 ActiveHotbarSlot = 0;

	// Item ekleme fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "Hotbar")
	bool AddItemToHotbar(const FInventoryItem& Item);

	// Item kullanma fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "Hotbar")
	void UseHotbarItem(int32 SlotIndex);

	// Aktif slotu değiştirme fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "Hotbar")
	void SetActiveHotbarSlot(int32 SlotIndex);

	// Hotbar güncellendiğinde çağrılacak delegate
	UPROPERTY(BlueprintAssignable, Category = "Hotbar")
	FOnHotbarUpdated OnHotbarUpdated;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
};

