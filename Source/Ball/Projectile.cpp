/// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include <cmath>
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
AProjectile::AProjectile()
{
 	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// Create and attach a static mesh component.
	ProjectileVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	/// Set the mesh to the root component.
	RootComponent = ProjectileVisual;
	/// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	/// If the mesh was found set it and set properties.
	if (ProjectileAsset.Succeeded())
	{
		ProjectileVisual->SetStaticMesh(ProjectileAsset.Object);
	}

	///Set the default countdown time
	CountdownTime = 5;

	///Set default values
	DestroyTemp = true;
	temp = false;
}

/// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	///Start the timer
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AProjectile::AdvanceTimer, 1.0f, true);

	///Set start location for the projectile
	ProjectileLoc = this->GetActorLocation();

	///Get the player's location
	PlayerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	///Calculate the angle to fire the projectile at
	float moveDirectionX = -(ProjectileLoc.X - PlayerLoc.X);
	float moveDirectionY = -(ProjectileLoc.Y - PlayerLoc.Y);
	if (abs(moveDirectionX) > abs(moveDirectionY)) {
		float ratio = moveDirectionX / moveDirectionY;
		moveX = 400.0f;
		moveY = (400 * ratio);
	}
	else {
		float ratio = moveDirectionX / moveDirectionY;
		moveY = 400.0f;
		moveX = (400 * ratio);
	}
	this->movementDirection.X = moveX;
	this->movementDirection.Y = moveY;
}

/// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	///Move the projectile
	this->SetActorLocation((this->GetActorLocation() + movementDirection * DeltaTime), false);
	if (temp == false) {
		///Set a default start value
		MovementLoc = this->GetActorLocation();
		temp = true;
	}
	
}

void AProjectile::AdvanceTimer()
{
	///Count down
	--CountdownTime;
	///If timer expires
	if (CountdownTime < 1)
	{
		///Destroy the old projectile
		this->Destroy();
		///Reset the timer
		CountdownTime = 5;
		///Find the player's location
		PlayerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		///Spawn a new projectile
		FActorSpawnParameters SpawnInfo;
		AProjectile* NewActor = GetWorld()->SpawnActor<AProjectile>(MovementLoc, ProjectileRot, SpawnInfo);
		///Play the sound effect
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

		///Set movement values
		moveDirectionX = -(ProjectileLoc.X - PlayerLoc.X);
		moveDirectionY = -(ProjectileLoc.Y - PlayerLoc.Y);

		///Calculate the movement speed
		if (moveDirectionX > moveDirectionY) {
			float ratio = moveDirectionX / moveDirectionY;
			moveX = 400.0f;
			moveY = (400 * ratio);
		}
		else if (moveDirectionX <= moveDirectionY) {
			float ratio = moveDirectionY / moveDirectionX;
			moveY = 400.0f;
			moveX = (400 * ratio);
		}

		///Fix negative values
		if (PlayerLoc.Y < MovementLoc.Y) {
			moveX = -moveX;
			moveY = -moveY;
		}
		if ((PlayerLoc.Y > MovementLoc.Y) && (PlayerLoc.X < MovementLoc.X)) {
			moveX = -moveX;
			moveY = -moveY;
		}
		if (moveX > 400) moveX = 400;
		if (moveX < -400) moveX = -400;
		if (moveY > 400) moveY = 400;
		if (moveY < -400) moveY = -400;

		///Fire the projectile at the player
		NewActor->movementDirection.X = moveY;
		NewActor->movementDirection.Y = moveX;
	}
}