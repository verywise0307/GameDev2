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

	//BoxComponent���� ��� ���� BoxExtent�Ӽ��� 60 �������� �����մϴ�.
	CollisionBox->SetBoxExtent(FVector(100.0f, 100.0f, 10.0f));

	//SetRelativeLocation �Լ��� ����� Z�࿡ ���� 120���ָ�ŭ ��� ��ġ�� �����մϴ�
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &Apuritybox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void Apuritybox::BeginPlay()
{
	Super::BeginPlay();
	
	// �ݶ��̴��� ����� �� Ÿ�̸� ����
	GetWorldTimerManager().SetTimer(PurityDecrementTimerHandle, this, &Apuritybox::DecreasePurity, 1.0f, true);
}

// Called every frame
void Apuritybox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Apuritybox::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// OtherActor�� PP_addForce Ŭ������ �ν��Ͻ����� Ȯ��
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
	// �ݶ��̴����� ����� �� Ÿ�̸� ����
	//GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
}

class AdonutGameInstance;

void Apuritybox::DecreasePurity()
{
	UdonutGameInstance* donutGameInstance = GetGameInstance<UdonutGameInstance>();

	if (donutGameInstance)
	{
		// Purity ���� ���ҽ�Ŵ
		donutGameInstance->purity--;
	}

	// purity ���� 0���� �۰ų� ������ Ÿ�̸Ӹ� ����
	if (donutGameInstance && donutGameInstance->purity <= 0)
	{
		GetWorldTimerManager().ClearTimer(PurityDecrementTimerHandle);
	}
}