// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IInteractable.h"
#include "BaseNPC.generated.h"
UCLASS()
class UNIQUENPCPROJECT_API ABaseNpc : public ACharacter, public IIInteractable
{
	GENERATED_BODY()

public:
	ABaseNpc();

protected:
	virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
    float Property1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
    int32 Property2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
    bool Property3;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Movement")
    FVector TargetLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Movement")
    FVector SpawnLocation;

public:	

    virtual void Interact_Implementation(AActor* Interactor) override;
    virtual void GetNPCProperties_Implementation(float& OutProperty1, int32& OutProperty2, bool& OutProperty3) override;
    virtual void ExecuteOption1_Implementation(AActor* Interactor) override;
    virtual void ExecuteOption2_Implementation(AActor* Interactor) override;
    virtual void ExecuteOption3_Implementation(AActor* Interactor) override;
    virtual bool CanInteract_Implementation(AActor* Interactor) const override;


    UFUNCTION(BlueprintCallable, Category = "NPC Movement")
    void MoveToTarget();

    UFUNCTION(BlueprintCallable, Category = "NPC Movement")
    void ReturnToSpawn();

    UFUNCTION(BlueprintCallable, Category = "NPC Properties")
    void RandomizeProperties();


};
