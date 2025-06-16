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

	double Step();
	void Move();

protected:
	static double GetDistance(FVector& A, FVector& B);

	void TryEvent();

	FVector SimCoord; // 시뮬레이션 좌표
	int MovementCount; // 움직이는 횟수
	int EventCount; // 이벤트 발생 횟수
};
