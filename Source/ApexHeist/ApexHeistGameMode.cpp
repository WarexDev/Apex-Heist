// Copyright Epic Games, Inc. All Rights Reserved.

#include "ApexHeistGameMode.h"
#include "ApexHeistCharacter.h"
#include "UObject/ConstructorHelpers.h"

AApexHeistGameMode::AApexHeistGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
