#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "PS_WraithAIController.generated.h"

UENUM(BlueprintType)
enum class EWraithTier : uint8
{
    Grunt,
    Elite,
    Commander,
    Boss
};

UCLASS()
class PHANTOMSTRIKE_API APS_WraithAIController : public AAIController
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EWraithTier WraithTier = EWraithTier::Grunt;

    UPROPERTY(EditDefaultsOnly)
    float SightRange = 2500.f;

    UPROPERTY(EditDefaultsOnly)
    float HearingRange = 1500.f;

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);

    UFUNCTION(BlueprintCallable)
    void AlertNearbyWraiths(float Radius);

    virtual void OnPossess(APawn* InPawn) override;
};
