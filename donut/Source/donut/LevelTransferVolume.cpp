// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransferVolume.h"
#include "Engine/Classes/Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALevelTransferVolume::ALevelTransferVolume()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TransferVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferVolume"));RootComponent = TransferVolume;TransferVolume->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
}

// Called when the game starts or when spawned
void ALevelTransferVolume::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALevelTransferVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelTransferVolume::NotifyActorBeginOverlap(AActor * OtherActor)
{
	if (OtherActor)
	{
		// 블루프린트의 이름을 확인하여 비교
		if (OtherActor->GetName().Contains(TEXT("PP_addForce")))
		{
			UGameplayStatics::OpenLevel(this, TransferLevelName);
		}
	}

}

