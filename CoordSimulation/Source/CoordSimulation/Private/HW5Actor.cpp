// Fill out your copyright notice in the Description page of Project Settings.


#include "HW5Actor.h"

AHW5Actor::AHW5Actor()
{
	PrimaryActorTick.bCanEverTick = false;

	SimCoord.X = 0.0;
	SimCoord.Y = 0.0;
	SimCoord.Z = 0.0;

	MovementCount = 10;
	EventCount = 0;
}

void AHW5Actor::BeginPlay()
{
	Super::BeginPlay();

	// Simulation..
	TArray<FVector> History;
	History.Add(SimCoord);
	for (int i = 0; i < MovementCount; i++)
	{
		Move();
		TryEvent();
		History.Add(SimCoord);
	}

	double SumDistance = 0.0;
	for (int i = 0; i < MovementCount; i++)
	{
		SumDistance += GetDistance(History[i+1], History[i]);
	}

	UE_LOG(LogTemp, Display, TEXT("SumDistance: %f, EventCount: %d"), SumDistance, EventCount);
}

double AHW5Actor::Step()
{
	int32 RandomValue = FMath::RandRange(0, 1);
	return RandomValue; // int32 -> double
}

void AHW5Actor::Move()
{
	FVector Before = SimCoord;
	SimCoord.X += Step();
	SimCoord.Y += Step();
	double Distance = GetDistance(Before, SimCoord);
	UE_LOG(LogTemp, Display, TEXT("HW5Actor::Move() (%f,%f) -> (%f,%f), Distance: %f"), Before.X, Before.Y, SimCoord.X, SimCoord.Y, Distance);
}

double AHW5Actor::GetDistance(FVector& A, FVector& B)
{
	double dx = A.X - B.X;
	double dy = A.Y - B.Y;
	return FMath::Sqrt(dx * dx + dy * dy);
}

void AHW5Actor::TryEvent()
{
	// 50% 확률로 이벤트 발생
	int32 Dice = FMath::RandRange(0, 1);
	if (Dice == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Event!!!!"));
		EventCount++;
	}
}

