/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Platforms.generated.h"

UCLASS()
class BALL_API APlatforms : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	APlatforms();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

	///How long, in seconds, the countdown will run
	int CountdownTime;

	///Number counter
	int Counter;

	///Make the timer count
	void AdvanceTimer();
	
	///Handle the timer
	FTimerHandle CountdownTimerHandle;

	///Spawn temp value
	bool spawnTemp;

private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* PlatformVisual;

	/// A class to store the human player
	class APawn* Player;

};
