#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PS_GameMode.generated.h"

UENUM(BlueprintType)
enum class EMatchState : uint8
{
    WaitingForPlayers,
    Skydive,
    Active,
    FinalCircle,
    Ended
};

UCLASS()
class PHANTOMSTRIKE_API APS_GameMode : public AGameModeBase
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPlayers = 40;

    UPROPERTY(BlueprintReadOnly)
    EMatchState MatchState = EMatchState::WaitingForPlayers;

    UPROPERTY(BlueprintReadOnly)
    int32 PlayersAlive = 0;

    UFUNCTION(BlueprintCallable)
    void StartMatch();

    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AController* Player);

    UFUNCTION(BlueprintCallable)
    void CheckWinCondition();

    UFUNCTION(BlueprintCallable)
    void SpawnWraithWave(int32 Count);
};

