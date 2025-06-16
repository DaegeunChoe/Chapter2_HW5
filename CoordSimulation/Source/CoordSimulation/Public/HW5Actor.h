// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HW5Actor.generated.h"

UCLASS()
class COORDSIMULATION_API AHW5Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	AHW5Actor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
