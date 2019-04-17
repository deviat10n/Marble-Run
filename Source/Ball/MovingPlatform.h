/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class BALL_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* PlatformVisual;

	/// The platform's rotation
	FRotator PlatformRot;

	/// The platform's location
	FVector PlatformLoc;

	///The platform's start location
	FVector StartLoc;

	///The platform's end location
	FVector EndLoc;

	///The platform's movement direction
	FVector MovementDirection;

	///The Y value of the platform
	float YawValue;

	///Boolean switches
	bool temp;
	bool forwards;
};
