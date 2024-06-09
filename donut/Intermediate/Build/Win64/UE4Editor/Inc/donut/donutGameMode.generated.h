// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONUT_donutGameMode_generated_h
#error "donutGameMode.generated.h already included, missing '#pragma once' in donutGameMode.h"
#endif
#define DONUT_donutGameMode_generated_h

#define donut_Source_donut_donutGameMode_h_12_SPARSE_DATA
#define donut_Source_donut_donutGameMode_h_12_RPC_WRAPPERS
#define donut_Source_donut_donutGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define donut_Source_donut_donutGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdonutGameMode(); \
	friend struct Z_Construct_UClass_AdonutGameMode_Statics; \
public: \
	DECLARE_CLASS(AdonutGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), DONUT_API) \
	DECLARE_SERIALIZER(AdonutGameMode)


#define donut_Source_donut_donutGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAdonutGameMode(); \
	friend struct Z_Construct_UClass_AdonutGameMode_Statics; \
public: \
	DECLARE_CLASS(AdonutGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), DONUT_API) \
	DECLARE_SERIALIZER(AdonutGameMode)


#define donut_Source_donut_donutGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONUT_API AdonutGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AdonutGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONUT_API, AdonutGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdonutGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONUT_API AdonutGameMode(AdonutGameMode&&); \
	DONUT_API AdonutGameMode(const AdonutGameMode&); \
public:


#define donut_Source_donut_donutGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONUT_API AdonutGameMode(AdonutGameMode&&); \
	DONUT_API AdonutGameMode(const AdonutGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONUT_API, AdonutGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdonutGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AdonutGameMode)


#define donut_Source_donut_donutGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define donut_Source_donut_donutGameMode_h_9_PROLOG
#define donut_Source_donut_donutGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_donutGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_donutGameMode_h_12_SPARSE_DATA \
	donut_Source_donut_donutGameMode_h_12_RPC_WRAPPERS \
	donut_Source_donut_donutGameMode_h_12_INCLASS \
	donut_Source_donut_donutGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define donut_Source_donut_donutGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_donutGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_donutGameMode_h_12_SPARSE_DATA \
	donut_Source_donut_donutGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	donut_Source_donut_donutGameMode_h_12_INCLASS_NO_PURE_DECLS \
	donut_Source_donut_donutGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONUT_API UClass* StaticClass<class AdonutGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID donut_Source_donut_donutGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
