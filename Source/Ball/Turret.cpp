/// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include <cmath>
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
ATurret::ATurret()
{
 	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/// Create and attach a static mesh component.
	TurretVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	/// Set the mesh to the root component.
	RootComponent = TurretVisual;
	/// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> TurretAsset(TEXT("StaticMesh'/Game/Meshes/Turret.Turret'"));
	/// If the mesh was found set it and set properties.
	if (TurretAsset.Succeeded())
	{
		TurretVisual->SetStaticMesh(TurretAsset.Object);
	}

	this->SetActorEnableCollision(false);
}

/// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

/// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	///Get the turret's rotation
	TurretRot = this->GetActorRotation();

	///Get the turret's location
	TurretLoc = this->GetActorLocation();

	///Get the player's location
	PlayerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	///Default trigonometry values
	static const double value = 6.2831853071795865;
	static const double radiansToDegrees = 57.2957795130823209;

	///Calculate angle from the turret to the player
	double theta = atan2(PlayerLoc.X - TurretLoc.X, TurretLoc.Y - PlayerLoc.Y);
	if (theta < 0.0)
		theta += value;
	double dResult = radiansToDegrees * theta;
	float fResult = (float)dResult;

	///Set the turret's rotation
	this->SetActorRotation(FRotator(0.0, (fResult + 90), 0.0));
}

