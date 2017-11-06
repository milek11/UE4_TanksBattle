// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"


void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the Barrel the right amount this frame
	// Given a max elevation Speed, and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate() called at speed %f"), DegreesPerSecond)
}
