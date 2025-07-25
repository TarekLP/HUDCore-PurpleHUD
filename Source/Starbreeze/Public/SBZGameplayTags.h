#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagsManager.h"
#include "SBZGameplayTags.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class STARBREEZE_API USBZGameplayTags : public UObject {
    GENERATED_BODY()
public:
    USBZGameplayTags();
    FGameplayTag SetupTag(FName TagName);

};

