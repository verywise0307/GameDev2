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

	//BoxComponent���� ��� ���� BoxExtent�Ӽ��� 60 �������� �����մϴ�.
	CollisionBox->SetBoxExtent(FVector(1000.0f, 1000.0f, 10.0f));

	//SetRelativeLocation �Լ��� ����� Z�࿡ ���� 120���ָ�ŭ ��� ��ġ�� �����մϴ�
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &Apuritybox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void Apuritybox::BeginPlay()
{
	Super::BeginPlay();
	
	// Ÿ�̸Ӹ� �����Ͽ� 1�ʸ��� DecreasePurity �Լ� ȣ��
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
	// donutcharacter Ŭ������ ��ü ����
	Apuritybox* DonutCharacter = Cast<AdonutCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (DonutCharacter)
	{
		// purity ���� 1 ����
		donutGameInstance->purity -= 1;

	}

	// purity ���� 0���� �۰ų� ������ Ÿ�̸Ӹ� ����
	if (donutGameInstance && donutGameInstance->purity <= 0)
	{
		GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
	}
}