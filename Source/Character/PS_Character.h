#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PS_Character.generated.h"

UENUM(BlueprintType)
enum class EStanceType : uint8
{
    Standing,
    Crouching,
    Prone
};

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
    Alive,
    Downed,
    Dead
};

UCLASS()
class PHANTOMSTRIKE_API APS_Character : public ACharacter
{
    GENERATED_BODY()
public:
    APS_Character();
    UPROPERTY(BlueprintReadOnly)
    float Health = 100.f;
    UPROPERTY(BlueprintReadOnly)
    float Armor = 0.f;
    UFUNCTION(BlueprintCallable)
    void StartFire();
    UFUNCTION(BlueprintCallable)
    void Reload();
};
