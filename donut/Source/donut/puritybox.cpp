// Fill out your copyright notice in the Description page of Project Settings.


#include "puritybox.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "donutGameInstance.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Apuritybox::Apuritybox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));

	CollisionBox->SetupAttachment(RootComponent);

	//BoxComponent에서 모든 축의 BoxExtent속성을 60 유닛으로 설정합니다.
	CollisionBox->SetBoxExtent(FVector(100.0f, 100.0f, 10.0f));

	//SetRelativeLocation 함수를 사용해 Z축에 대해 120유닛만큼 상대 위치를 조정합니다
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &Apuritybox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void Apuritybox::BeginPlay()
{
	Super::BeginPlay();
	
	// 콜라이더에 닿았을 때 타이머 시작
	GetWorldTimerManager().SetTimer(PurityDecrementTimerHandle, this, &Apuritybox::DecreasePurity, 1.0f, true);
}

// Called every frame
void Apuritybox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Apuritybox::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// OtherActor가 PP_addForce 클래스의 인스턴스인지 확인
	if (OtherActor && OtherActor->IsA<APawn>())
	{
		APawn* OverlappingPawn = Cast<APawn>(OtherActor);
		if (OverlappingPawn && OverlappingPawn->GetClass()->GetName() == "PP_addForce")
		{
			DecreasePurity();
		}
	}
}

void Apuritybox::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// 콜라이더에서 벗어났을 때 타이머 중지
	//GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
}

class AdonutGameInstance;

void Apuritybox::DecreasePurity()
{
	UdonutGameInstance* donutGameInstance = GetGameInstance<UdonutGameInstance>();

	if (donutGameInstance)
	{
		// Purity 값을 감소시킴
		donutGameInstance->purity--;
	}

	// purity 값이 0보다 작거나 같으면 타이머를 멈춤
	if (donutGameInstance && donutGameInstance->purity <= 0)
	{
		GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
	}
}