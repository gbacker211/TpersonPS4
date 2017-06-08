// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TpersonPS4.h"
#include "TpersonPS4GameMode.h"
#include "TpersonPS4Character.h"

ATpersonPS4GameMode::ATpersonPS4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
