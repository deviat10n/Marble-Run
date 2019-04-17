/// Fill out your copyright notice in the Description page of Project Settings.

#include "Platforms.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
APlatforms::APlatforms()
{

	///Set the default countdown time
	CountdownTime = 20;

	///Set the spawn temp value
	spawnTemp = false;


}

/// Called when the game starts or when spawned
void APlatforms::BeginPlay()
{
	Super::BeginPlay();
	
}

/// Called every frame
void APlatforms::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

