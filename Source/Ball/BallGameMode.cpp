/// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BallGameMode.h"
#include "BallBall.h"

ABallGameMode::ABallGameMode()
{
	/// set default pawn class to our ball
	DefaultPawnClass = ABallBall::StaticClass();
}
