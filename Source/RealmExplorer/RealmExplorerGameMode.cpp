// Copyright Epic Games, Inc. All Rights Reserved.

#include "RealmExplorerGameMode.h"
#include "RealmExplorerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARealmExplorerGameMode::ARealmExplorerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_ThirdPersonCharacterMale"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
