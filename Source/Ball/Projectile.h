/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class BALL_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	AProjectile();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

	///How long, in seconds, the countdown will run
	int CountdownTime;

	/// Direction vector
	UPROPERTY(EditAnywhere)
		FVector movementDirection;

	///Make the timer count
	void AdvanceTimer();

	///Handle the timer
	FTimerHandle CountdownTimerHandle;

private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* ProjectileVisual;

	/// The projectile's rotation
	FRotator ProjectileRot;

	/// The projectile's location
	FVector ProjectileLoc;

	/// The player's location
	FVector PlayerLoc;

	/// The movement location
	FVector MovementLoc;

	///DestroyTemp value
	bool DestroyTemp;

	///Movement values
	float moveX;
	float moveY;

	///Boolean switch
	bool temp;

	///Movement values
	float moveDirectionX;
	float moveDirectionY;

	///Sound effect
	class USoundBase* FireSound;
};
