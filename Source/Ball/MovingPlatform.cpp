/// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"
#include <cmath>
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// Create and attach a static mesh component.
	PlatformVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	/// Set the mesh to the root component.
	RootComponent = PlatformVisual;
	/// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> PlatformAsset(TEXT("StaticMesh'/Game/Meshes/MovingPlatform.MovingPlatform'"));
	/// If the mesh was found set it and set properties.
	if (PlatformAsset.Succeeded())
	{
		PlatformVisual->SetStaticMesh(PlatformAsset.Object);
	}

	///Set default values
	forwards = true;
	temp = false;
	MovementDirection.X = 100.0;
	MovementDirection.Y = 0.0;
	MovementDirection.Z = 0.0;
}

/// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	///Set default platform location value
	PlatformLoc = this->GetActorLocation();
	
}

/// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	///Set starting values
	if (temp == false) {
		StartLoc = PlatformLoc;
		EndLoc = PlatformLoc;
		EndLoc.X = EndLoc.X + 500.0;
		YawValue = 0.0f;
		temp = true;
	}

	///Move platform forward
	PlatformLoc = this->GetActorLocation();
	if (forwards == true) {
		if (PlatformLoc.X < EndLoc.X) {
			///Move the platform
			this->SetActorLocation((this->GetActorLocation() + MovementDirection * DeltaTime), false);
			///Rotate the platform
			this->SetActorRotation(FRotator(0.0, -((((EndLoc.X - PlatformLoc.X) / 500) * 180) + 180), 0.0));
		}

		///If the end is reached start coming back
		if (PlatformLoc.X >= EndLoc.X) {
			forwards = false;
		}
	}

	///Move platform backward
	if (forwards == false) {
		if (PlatformLoc.X > StartLoc.X) {
			///Move the platform
			this->SetActorLocation((this->GetActorLocation() - MovementDirection * DeltaTime), false);
			///Rotate the platform
			this->SetActorRotation(FRotator(0.0, ((((EndLoc.X - PlatformLoc.X) / 500) * 180) + 180), 0.0));
		}
		///If the start is reached start heading back
		if (PlatformLoc.X <= StartLoc.X) {
			forwards = true;
		}
	}
}

