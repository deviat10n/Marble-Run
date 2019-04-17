/// Fill out your copyright notice in the Description page of Project Settings.

#include "Lava.h"
#include <cmath>
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
ALava::ALava()
{
 	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// Create and attach a static mesh component.
	LavaVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LavaMesh"));
	/// Set the mesh to the root component.
	RootComponent = LavaVisual;
	/// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> LavaAsset(TEXT("StaticMesh'/Game/Meshes/Lava.Lava'"));
	/// If the mesh was found set it and set properties.
	if (LavaAsset.Succeeded())
	{
		LavaVisual->SetStaticMesh(LavaAsset.Object);
	}

	///Set start height for lava
	counter = -1000;
}

/// Called when the game starts or when spawned
void ALava::BeginPlay()
{
	Super::BeginPlay();
}

/// Called every frame
void ALava::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	///Get player's location
	PlayerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	///Set the movement for the lava
	MovementLoc.X = PlayerLoc.X;
	MovementLoc.Y = PlayerLoc.Y;
	MovementLoc.Z = counter;

	///Move the lava
	this->SetActorLocation(MovementLoc);

	///Increase the height value
	counter = counter + 0.28;
}

