/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lava.generated.h"

UCLASS()
class BALL_API ALava : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	ALava();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* LavaVisual;

	/// The Lava's location
	FVector LavaLoc;

	/// The player's location
	FVector PlayerLoc;

	///The Lava's Location
	FVector MovementLoc;

	///Height Counter
	float counter;
	
};
