// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE_SBS_HOMEWORK_01GameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"

AUE_SBS_HOMEWORK_01GameModeBase::AUE_SBS_HOMEWORK_01GameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}