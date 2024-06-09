// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "donut/puritybox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepuritybox() {}
// Cross Module References
	DONUT_API UClass* Z_Construct_UClass_Apuritybox_NoRegister();
	DONUT_API UClass* Z_Construct_UClass_Apuritybox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_donut();
// End Cross Module References
	void Apuritybox::StaticRegisterNativesApuritybox()
	{
	}
	UClass* Z_Construct_UClass_Apuritybox_NoRegister()
	{
		return Apuritybox::StaticClass();
	}
	struct Z_Construct_UClass_Apuritybox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apuritybox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_donut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apuritybox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "puritybox.h" },
		{ "ModuleRelativePath", "puritybox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apuritybox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apuritybox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Apuritybox_Statics::ClassParams = {
		&Apuritybox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Apuritybox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apuritybox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apuritybox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Apuritybox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Apuritybox, 4128979251);
	template<> DONUT_API UClass* StaticClass<Apuritybox>()
	{
		return Apuritybox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Apuritybox(Z_Construct_UClass_Apuritybox, &Apuritybox::StaticClass, TEXT("/Script/donut"), TEXT("Apuritybox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apuritybox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
