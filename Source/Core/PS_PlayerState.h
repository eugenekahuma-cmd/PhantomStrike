#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PS_PlayerState.generated.h"

UCLASS()
class PHANTOMSTRIKE_API APS_PlayerState : public APlayerState
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Kills = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 Assists = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 SquadNumber = 0;

    UPROPERTY(BlueprintReadOnly)
    FString OperatorName = "None";

    UPROPERTY(BlueprintReadOnly)
    bool bIsSquadLeader = false;

    UFUNCTION(BlueprintCallable)
    void AddKill();

    UFUNCTION(BlueprintCallable)
    void AddAssist();
};
