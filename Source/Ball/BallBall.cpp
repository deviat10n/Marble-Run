/// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BallBall.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Engine.h"

ABallBall::ABallBall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	PrimaryActorTick.bCanEverTick = true;

	/// Create mesh component for the ball
	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
	Ball->SetStaticMesh(BallMesh.Object);
	Ball->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Ball->SetSimulatePhysics(true);
	Ball->SetAngularDamping(100.0f);
	Ball->SetLinearDamping(100.0f);
	Ball->BodyInstance.MassScale = 10.0f;
	Ball->BodyInstance.MaxAngularVelocity = 100.0f;
	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	/// Create a camera attached to the ball
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bAbsoluteRotation = true; 
	SpringArm->RelativeRotation = FRotator(-45.f, 0.f, 0.f);
	SpringArm->TargetArmLength = 1200.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 3.f;

	/// Create a camera 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false; 

	/// Set up forces
	RollTorque = 20000000.0f;
	JumpImpulse = 800000.0f;
	bCanJump = true;

	/// Set the edge of the world flag.
	edgeOfWorld = false;
}

/// Called every frame
void ABallBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/// Get the actors current location.
	actorLoc = this->GetActorLocation();

	///If ball is too low, game over
	if (actorLoc.Z < -60.0f)
	{
		UWorld* TheWorld = GetWorld();
		UGameplayStatics::OpenLevel(GetWorld(), "GameOverMap");
	}

	///If ball has reached the jumping zone, bounce the ball
	if ((actorLoc.X > 5636.0f) && (actorLoc.X < 8535.0f)){
		if (bCanJump)
		{
			const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
			Ball->AddImpulse(Impulse);
			bCanJump = false;
		}
	}

	///If the goal is reached, you win
	if ((actorLoc.X > 8535.0f) && ((actorLoc.Z > 653.0f) && (actorLoc.Z < 660.0f))) {
		UWorld* TheWorld = GetWorld();
		UGameplayStatics::OpenLevel(GetWorld(), "WinMap");
	}
}

void ABallBall::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	/// set up gameplay key bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &ABallBall::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABallBall::MoveForward);

	/// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABallBall::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABallBall::TouchStopped);
}

void ABallBall::MoveRight(float Val)
{
	const FVector Torque = FVector(-1.f * Val * RollTorque, 0.f, 0.f);
	Ball->AddTorque(Torque);
}

void ABallBall::MoveForward(float Val)
{
	const FVector Torque = FVector(0.f, Val * RollTorque, 0.f);
	Ball->AddTorque(Torque);	
}

void ABallBall::Jump()
{
	if(bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void ABallBall::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bCanJump = true;
}

void ABallBall::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}

}

void ABallBall::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}
