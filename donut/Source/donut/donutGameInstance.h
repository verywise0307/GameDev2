// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "donutGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class DONUT_API UdonutGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UdonutGameInstance();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Variables")
	int32 purity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Variables")
	int32 freshness;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Variables")
	int32 flavor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Variables")
	int32 shield;
};
