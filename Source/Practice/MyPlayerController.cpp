#include "MyPlayerController.h"

void AMyPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PLOG_S(Warning);
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	PLOG_S(Warning);
	Super::OnPossess(aPawn);
}