// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set maximum driving force, and to apply forces to the tank.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// Set throttle between -1 and +1 
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
	
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 400000; // Assume 40 tonne tank and 1g acceleration

	virtual void BeginPlay() override;

private:
	UTankTrack();

	// virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	void ApplySidewaysForce();

	UFUNCTION()
	void OnHit(UPrimitiveComponent*HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	void DriveTrack();

	float CurrentThrottle = 0;
};

