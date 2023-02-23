// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("Interact",IE_Pressed,this,&AMyPlayerController::Interact);
	InputComponent->BindAxis("MoveForward",this,&AMyPlayerController::MoveForward);
	InputComponent->BindAxis("MoveForward",this,&AMyPlayerController::MoveRight);
}

void AMyPlayerController::MoveForward(float Value)
{
	
}

void AMyPlayerController::MoveRight(float Value)
{
	
}

void AMyPlayerController::Interact()
{
	
}
