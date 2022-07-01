// Copyright Epic Games, Inc. All Rights Reserved.

#include "ApexHeistGameMode.h"
#include "ApexHeistCharacter.h"
#include "UObject/ConstructorHelpers.h"

AApexHeistGameMode::AApexHeistGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
