// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransferVolume.h"
#include "Engine/Classes/Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "donutGameInstance.h"
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
		// �������Ʈ�� �̸��� Ȯ���Ͽ� ��
		if (OtherActor->GetName().Contains(TEXT("PP_addForce")))
		{
			// ���� ������ stage1�̰� flavor ������ 3 �̻��� ��� ���� ��ȯ
			FString CurrentLevelName = GetWorld()->GetMapName();
			CurrentLevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix); // ���� �̸� ���� ���λ縦 ����

			if (CurrentLevelName == TEXT("stage1_house"))
			{
				// ���� �ν��Ͻ��� ������
				UdonutGameInstance* GameInstance = Cast<UdonutGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

				if (GameInstance->flavor >= 3)
				{
					UGameplayStatics::OpenLevel(this, TransferLevelName);
				}
			}
			else
			{
				UGameplayStatics::OpenLevel(this, TransferLevelName);
			}
			
			
		}
	}

}

