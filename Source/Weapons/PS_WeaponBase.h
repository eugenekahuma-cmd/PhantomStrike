#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PS_WeaponBase.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8
{
    Single,
    Burst,
    Auto
};

UCLASS()
class PHANTOMSTRIKE_API APS_WeaponBase : public AActor
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Damage = 35.f;
    UPROPERTY(EditDefaultsOnly)
    float FireRate = 0.1f;
    UPROPERTY(EditDefaultsOnly)
    int32 MagSize = 30;
    UPROPERTY(Replicated)
    int32 CurrentAmmo;
    UPROPERTY(EditDefaultsOnly)
    EFireMode FireMode = EFireMode::Auto;
    UFUNCTION(BlueprintCallable)
    void StartFire();
    UFUNCTION(BlueprintCallable)
    void StopFire();
    UFUNCTION(BlueprintCallable)
    void Reload();
};

