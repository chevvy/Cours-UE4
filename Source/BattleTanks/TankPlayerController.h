// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankPawn.h"
#include "BattleTanks.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATankPawn* GetControlledTank() const;
	
};


