/// Fill out your copyright notice in the Description page of Project Settings.

#include "Spring.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

/// Sets default values
ASpring::ASpring()
{
 	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/// Create and attach a static mesh component.
	SpringVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpringMesh"));
	/// Set the mesh to the root component.
	RootComponent = SpringVisual;
	/// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> SpringAsset(TEXT("StaticMesh'/Game/Meshes/Spring.Spring'"));
	/// If the mesh was found set it and set properties.
	if (SpringAsset.Succeeded())
	{
		SpringVisual->SetStaticMesh(SpringAsset.Object);
	}
	/// set up a notification for when this component hits something
	SpringVisual->OnComponentHit.AddDynamic(this, &ASpring::OnHit);

	///Disable collision with the spring
	this->SetActorEnableCollision(false);
}

/// Called when the game starts or when spawned
void ASpring::BeginPlay()
{
	Super::BeginPlay();
	
}

/// Called every frame
void ASpring::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpring::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	///Destroy the spring when hit
	this->Destroy();
}