#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PS_ZoneManager.generated.h"

UENUM(BlueprintType)
enum class EZonePhase : uint8
{
    Waiting,
    Phase1,
    Phase2,
    Phase3,
    Phase4,
    FinalCircle
};

UCLASS()
class PHANTOMSTRIKE_API APS_ZoneManager : public AActor
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector ZoneCenter;

    UPROPERTY(BlueprintReadOnly)
    float ZoneRadius = 3000.f;

    UPROPERTY(BlueprintReadOnly)
    EZonePhase CurrentPhase = EZonePhase::Waiting;

    UPROPERTY(EditDefaultsOnly)
    float ZoneDamagePerSecond = 5.f;

    UFUNCTION(BlueprintCallable)
    void StartCollapse();

    UFUNCTION(BlueprintCallable)
    bool IsOutsideZone(FVector Position) const;

    UFUNCTION(BlueprintCallable)
    void AdvancePhase();
};
