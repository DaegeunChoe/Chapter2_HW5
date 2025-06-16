// Fill out your copyright notice in the Description page of Project Settings.


#include "HW5GameMode.h"
#include "HW5Actor.h"

void AHW5GameMode::BeginPlay()
{
	Super::BeginPlay();

	// ������ ��, HW5Actor�� �ϳ� ������.
	UWorld* World = GetWorld();
	if (!IsValid(World)) {
		return;
	}

	if (HW5ActorClass == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("HW5ActorClass is nullptr."));
		return;
	}
	
	FVector SpawnLocation = FVector::ZeroVector;
	FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters SpawnParams;
	HW5Actor = World->SpawnActor<AHW5Actor>(HW5ActorClass, SpawnLocation, SpawnRotation, SpawnParams);
}
