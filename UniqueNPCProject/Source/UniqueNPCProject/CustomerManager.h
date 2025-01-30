// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseNpc.h"
#include "CustomerManager.generated.h"

UCLASS()
class UNIQUENPCPROJECT_API ACustomerManager : public AActor
{
    GENERATED_BODY()

protected:
    // Customer spawn point
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    FVector SpawnPoint;

    // Target point for customers
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    FVector TargetPoint;

    // Queue positions
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Queue")
    TArray<FVector> QueuePositions;

    // Active customers
    UPROPERTY()
    TArray<ABaseNpc*> ActiveCustomers;

    // Maximum customer count
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Queue")
    int32 MaxCustomers = 5;

    // Spawn interval
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    float SpawnInterval = 5.0f;

    // Spawn timer handle
    FTimerHandle SpawnTimerHandle;

    // NPC Blueprint to spawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<ABaseNpc> NPCToSpawn;

public:
    ACustomerManager();

    virtual void BeginPlay() override;

    // Yeni customer spawn etme
    UFUNCTION()
    void SpawnNewCustomer();

    // Sıradaki boş pozisyonu bulma
    UFUNCTION()
    int32 FindEmptyQueuePosition() const;

    // Customerı sıradan çıkarma
    UFUNCTION()
    void RemoveCustomerFromQueue(ABaseNpc* Customer);

    // Sırayı yeniden düzenleme
    UFUNCTION()
    void ReorganizeQueue();
};