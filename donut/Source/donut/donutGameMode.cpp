// Copyright Epic Games, Inc. All Rights Reserved.

#include "donutGameMode.h"
#include "donutCharacter.h"
#include "UObject/ConstructorHelpers.h"

AdonutGameMode::AdonutGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
