// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "donut/donutGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedonutGameMode() {}
// Cross Module References
	DONUT_API UClass* Z_Construct_UClass_AdonutGameMode_NoRegister();
	DONUT_API UClass* Z_Construct_UClass_AdonutGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_donut();
// End Cross Module References
	void AdonutGameMode::StaticRegisterNativesAdonutGameMode()
	{
	}
	UClass* Z_Construct_UClass_AdonutGameMode_NoRegister()
	{
		return AdonutGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AdonutGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AdonutGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_donut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AdonutGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "donutGameMode.h" },
		{ "ModuleRelativePath", "donutGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AdonutGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AdonutGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AdonutGameMode_Statics::ClassParams = {
		&AdonutGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AdonutGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AdonutGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AdonutGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AdonutGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AdonutGameMode, 1523069470);
	template<> DONUT_API UClass* StaticClass<AdonutGameMode>()
	{
		return AdonutGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AdonutGameMode(Z_Construct_UClass_AdonutGameMode, &AdonutGameMode::StaticClass, TEXT("/Script/donut"), TEXT("AdonutGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdonutGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
