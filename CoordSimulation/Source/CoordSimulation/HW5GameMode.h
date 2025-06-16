// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "HW5Actor.h"
#include "HW5GameMode.generated.h"

/**
 * 
 */
UCLASS()
class COORDSIMULATION_API AHW5GameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AHW5Actor> HW5ActorClass;

protected:
	TObjectPtr<AHW5Actor> HW5Actor;
};
