// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONUT_donutGameInstance_generated_h
#error "donutGameInstance.generated.h already included, missing '#pragma once' in donutGameInstance.h"
#endif
#define DONUT_donutGameInstance_generated_h

#define donut_Source_donut_donutGameInstance_h_15_SPARSE_DATA
#define donut_Source_donut_donutGameInstance_h_15_RPC_WRAPPERS
#define donut_Source_donut_donutGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define donut_Source_donut_donutGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUdonutGameInstance(); \
	friend struct Z_Construct_UClass_UdonutGameInstance_Statics; \
public: \
	DECLARE_CLASS(UdonutGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(UdonutGameInstance)


#define donut_Source_donut_donutGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUdonutGameInstance(); \
	friend struct Z_Construct_UClass_UdonutGameInstance_Statics; \
public: \
	DECLARE_CLASS(UdonutGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(UdonutGameInstance)


#define donut_Source_donut_donutGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UdonutGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UdonutGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdonutGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdonutGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdonutGameInstance(UdonutGameInstance&&); \
	NO_API UdonutGameInstance(const UdonutGameInstance&); \
public:


#define donut_Source_donut_donutGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdonutGameInstance(UdonutGameInstance&&); \
	NO_API UdonutGameInstance(const UdonutGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdonutGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdonutGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UdonutGameInstance)


#define donut_Source_donut_donutGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define donut_Source_donut_donutGameInstance_h_12_PROLOG
#define donut_Source_donut_donutGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_donutGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_donutGameInstance_h_15_SPARSE_DATA \
	donut_Source_donut_donutGameInstance_h_15_RPC_WRAPPERS \
	donut_Source_donut_donutGameInstance_h_15_INCLASS \
	donut_Source_donut_donutGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define donut_Source_donut_donutGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_donutGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_donutGameInstance_h_15_SPARSE_DATA \
	donut_Source_donut_donutGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	donut_Source_donut_donutGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	donut_Source_donut_donutGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONUT_API UClass* StaticClass<class UdonutGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID donut_Source_donut_donutGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
