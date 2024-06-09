// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "puritybox.generated.h"

UCLASS()
class DONUT_API Apuritybox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apuritybox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = puritybox, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* RootScene;	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = puritybox, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* CollisionBox;	// Timer handle for the purity decrement timer
	FTimerHandle PurityDecrementTimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 청결도 떨어트릴 함수
	void DecreasePurity();
};
