#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IInteractable.generated.h"

UINTERFACE(MinimalAPI)
class UIInteractable : public UInterface
{
    GENERATED_BODY()
};

class UNIQUENPCPROJECT_API IIInteractable
{
    GENERATED_BODY()

public:
    //
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void Interact(AActor* Interactor);

    // NPC'nin özelliklerini almak için fonksiyon
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void GetNPCProperties(float& Property1, int32& Property2, bool& Property3);

    // Etkileşim seçeneklerini tetiklemek için fonksiyonlar
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void ExecuteOption1(AActor* Interactor);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void ExecuteOption2(AActor* Interactor);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void ExecuteOption3(AActor* Interactor);

    // Etkileşime girilip girilemeyeceğini kontrol eden fonksiyon
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    bool CanInteract(AActor* Interactor) const;
};
