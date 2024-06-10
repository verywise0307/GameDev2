// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "donut/LevelTransferVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelTransferVolume() {}
// Cross Module References
	DONUT_API UClass* Z_Construct_UClass_ALevelTransferVolume_NoRegister();
	DONUT_API UClass* Z_Construct_UClass_ALevelTransferVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_donut();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALevelTransferVolume::StaticRegisterNativesALevelTransferVolume()
	{
	}
	UClass* Z_Construct_UClass_ALevelTransferVolume_NoRegister()
	{
		return ALevelTransferVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALevelTransferVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransferLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransferVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelTransferVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_donut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelTransferVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelTransferVolume.h" },
		{ "ModuleRelativePath", "LevelTransferVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferLevelName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LevelTransferVolume" },
		{ "ModuleRelativePath", "LevelTransferVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferLevelName = { "TransferLevelName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelTransferVolume, TransferLevelName), METADATA_PARAMS(Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferVolume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LevelTransferVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferVolume = { "TransferVolume", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelTransferVolume, TransferVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelTransferVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelTransferVolume_Statics::NewProp_TransferVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelTransferVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelTransferVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelTransferVolume_Statics::ClassParams = {
		&ALevelTransferVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelTransferVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransferVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelTransferVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransferVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelTransferVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelTransferVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelTransferVolume, 2730667097);
	template<> DONUT_API UClass* StaticClass<ALevelTransferVolume>()
	{
		return ALevelTransferVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelTransferVolume(Z_Construct_UClass_ALevelTransferVolume, &ALevelTransferVolume::StaticClass, TEXT("/Script/donut"), TEXT("ALevelTransferVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelTransferVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
