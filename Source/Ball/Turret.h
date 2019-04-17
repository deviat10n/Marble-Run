/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class BALL_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	ATurret();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

	///How long, in seconds, the countdown will run
	int CountdownTime;

private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* TurretVisual;
	
	/// The turret's rotation
	FRotator TurretRot;

	/// The turret's location
	FVector TurretLoc;

	/// The player's location
	FVector PlayerLoc;
};
