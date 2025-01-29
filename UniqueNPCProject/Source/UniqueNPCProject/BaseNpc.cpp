#include "BaseNpc.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "NavigationSystem.h"


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

}


void ABaseNpc::Interact_Implementation(AActor* Interactor)
{
    //will override in blueprint
    //will be open widgets here
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
    // Blueprint'te override edilecek
}

void ABaseNpc::ExecuteOption2_Implementation(AActor* Interactor) 
{
    // Blueprint'te override edilecek
}

void ABaseNpc::ExecuteOption3_Implementation(AActor* Interactor) 
{
    // Blueprint'te override edilecek
}

bool ABaseNpc::CanInteract_Implementation(AActor* Interactor) const
{
	return true; // if need can be change
}

void ABaseNpc::MoveToTarget()
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
            TargetLocation,
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


