#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	PLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	PLOG(Warning, TEXT("PostLogin End"));
}