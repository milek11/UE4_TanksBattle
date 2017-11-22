// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack.h"



void UTankTrack::SetThrottle(float Throttle)
{
	auto ForceApllied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApllied, ForceLocation);
}
