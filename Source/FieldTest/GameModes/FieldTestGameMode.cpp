// Copyright Epic Games, Inc. All Rights Reserved.

#include "FieldTestGameMode.h"
#include "../FieldTestHUD.h"
#include "../Characters/FieldTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFieldTestGameMode::AFieldTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFieldTestHUD::StaticClass();
}
