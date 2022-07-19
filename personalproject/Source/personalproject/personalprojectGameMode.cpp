// Copyright Epic Games, Inc. All Rights Reserved.

#include "personalprojectGameMode.h"
#include "personalprojectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ApersonalprojectGameMode::ApersonalprojectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
