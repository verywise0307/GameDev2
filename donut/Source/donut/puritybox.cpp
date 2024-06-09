// Fill out your copyright notice in the Description page of Project Settings.


#include "puritybox.h"
#include "Components/BoxComponent.h"
#include "donutGameInstance.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Apuritybox::Apuritybox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));

	CollisionBox->SetupAttachment(RootComponent);

	//BoxComponent에서 모든 축의 BoxExtent속성을 60 유닛으로 설정합니다.
	CollisionBox->SetBoxExtent(FVector(1000.0f, 1000.0f, 10.0f));

	//SetRelativeLocation 함수를 사용해 Z축에 대해 120유닛만큼 상대 위치를 조정합니다
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &Apuritybox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void Apuritybox::BeginPlay()
{
	Super::BeginPlay();
	
	// 타이머를 시작하여 1초마다 DecreasePurity 함수 호출
	GetWorldTimerManager().SetTimer(PurityDecrementTimerHandle, this, &Apuritybox::DecreasePurity, 1.0f, true);
}

// Called every frame
void Apuritybox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Apuritybox::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Cast<AdonutCharacter>(OtherActor))
	{
		DecreasePurity();
	}
}

class AdonutGameInstance;

void Apuritybox::DecreasePurity()
{
	// donutcharacter 클래스의 객체 생성
	Apuritybox* DonutCharacter = Cast<AdonutCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (DonutCharacter)
	{
		// purity 값을 1 감소
		donutGameInstance->purity -= 1;

	}

	// purity 값이 0보다 작거나 같으면 타이머를 멈춤
	if (donutGameInstance && donutGameInstance->purity <= 0)
	{
		GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
	}
}