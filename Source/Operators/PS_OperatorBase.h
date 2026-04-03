#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PS_OperatorBase.generated.h"

UENUM(BlueprintType)
enum class EOperatorRole : uint8
{
    Assault,
    Recon,
    Support,
    Tank,
    Medic,
    Stealth
};

UCLASS(Abstract, Blueprintable)
class PHANTOMSTRIKE_API UPS_OperatorBase : public UObject
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName OperatorName;

    UPROPERTY(EditDefaultsOnly)
    EOperatorRole Role;

    UPROPERTY(EditDefaultsOnly)
    float CooldownDuration = 30.f;

    UPROPERTY(BlueprintReadOnly)
    float CooldownRemaining = 0.f;

    UPROPERTY(BlueprintReadOnly)
    bool bIsOnCooldown = false;

    UFUNCTION(BlueprintCallable)
    bool Activate();

    UFUNCTION(BlueprintNativeEvent)
    void OnActivate();

    UFUNCTION(BlueprintCallable)
    float GetCooldownPercent() const;
};
