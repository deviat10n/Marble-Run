/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spring.generated.h"

UCLASS()
class BALL_API ASpring : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	ASpring();

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// Function to handle the spring being hit
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


private:
	/// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* SpringVisual;
	
};
