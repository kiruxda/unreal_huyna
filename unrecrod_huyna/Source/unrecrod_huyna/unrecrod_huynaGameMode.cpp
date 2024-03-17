// Copyright Epic Games, Inc. All Rights Reserved.

#include "unrecrod_huynaGameMode.h"
#include "unrecrod_huynaCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aunrecrod_huynaGameMode::Aunrecrod_huynaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
