// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomerManager.h"
#include "NavigationSystem.h"

ACustomerManager::ACustomerManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ACustomerManager::BeginPlay()
{
    Super::BeginPlay();

    // Create queue positions
    float QueueSpacing = 100.0f; // Distance between customers
    for (int32 i = 0; i < MaxCustomers; i++)
    {
        FVector QueuePos = TargetPoint + (FVector::BackwardVector * QueueSpacing * i);
        QueuePositions.Add(QueuePos);
    }

    // Start spawn timer
    GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ACustomerManager::SpawnNewCustomer, SpawnInterval, true);
}

void ACustomerManager::SpawnNewCustomer()
{
    // Check maximum customer count
    if (ActiveCustomers.Num() >= MaxCustomers)
        return;

    // Check NPC Blueprint
    if (!NPCToSpawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("NPCToSpawn is not set in CustomerManager"));
        return;
    }

    // Set spawn parameters
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    // Spawn new customer
    if (ABaseNpc* NewCustomer = GetWorld()->SpawnActor<ABaseNpc>(NPCToSpawn, SpawnPoint, FRotator::ZeroRotator, SpawnParams))
    {
        // Set CustomerManager reference
        NewCustomer->SetCustomerManager(this);

        // Find empty position in queue
        int32 QueueIndex = FindEmptyQueuePosition();
        if (QueueIndex != INDEX_NONE)
        {
            // Add customer to queue
            ActiveCustomers.Add(NewCustomer);
            NewCustomer->SetNPCTargetLocation(QueuePositions[QueueIndex]);
            NewCustomer->MoveToTarget();
        }
        else
        {
            // Destroy customer if no empty position
            NewCustomer->Destroy();
        }
    }
}

int32 ACustomerManager::FindEmptyQueuePosition() const
{
    TArray<bool> OccupiedPositions;
    OccupiedPositions.Init(false, QueuePositions.Num());

    // Mark positions of current customers
    for (ABaseNpc* Customer : ActiveCustomers)
    {
        for (int32 i = 0; i < QueuePositions.Num(); i++)
        {
            if (FVector::DistSquared(Customer->GetActorLocation(), QueuePositions[i]) < 100.0f)
            {
                OccupiedPositions[i] = true;
                break;
            }
        }
    }

    // Find first empty position
    for (int32 i = 0; i < OccupiedPositions.Num(); i++)
    {
        if (!OccupiedPositions[i])
            return i;
    }

    return INDEX_NONE;
}

void ACustomerManager::RemoveCustomerFromQueue(ABaseNpc* Customer)
{
    if (Customer)
    {
        ActiveCustomers.Remove(Customer);
        ReorganizeQueue();
    }
}

void ACustomerManager::ReorganizeQueue()
{
    // Remove gaps (clear null customers)
    ActiveCustomers.RemoveAll([](ABaseNpc* Customer) { return Customer == nullptr; });

    // Move customers forward in queue
    for (int32 i = 0; i < ActiveCustomers.Num(); i++)
    {
        if (ActiveCustomers[i])
        {
            // Set new target position
            FVector NewPosition = QueuePositions[i];
            
            // Interpolate between current and target position
            FVector CurrentPos = ActiveCustomers[i]->GetActorLocation();
            float InterpSpeed = 2.0f; // Movement speed (adjustable)
            
            ActiveCustomers[i]->SetNPCTargetLocation(NewPosition);
            ActiveCustomers[i]->MoveToTarget();

            // Debug visualization
            DrawDebugLine(
                GetWorld(),
                CurrentPos,
                NewPosition,
                FColor::Green,
                false,
                2.0f,
                0,
                2.0f
            );
        }
    }
}