// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "VERSION_0GameMode.h"
#include "VERSION_0HUD.h"
#include "VERSION_0Character.h"
#include "UObject/ConstructorHelpers.h"

AVERSION_0GameMode::AVERSION_0GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVERSION_0HUD::StaticClass();
}
