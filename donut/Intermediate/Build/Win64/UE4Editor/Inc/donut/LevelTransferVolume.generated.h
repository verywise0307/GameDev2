// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONUT_LevelTransferVolume_generated_h
#error "LevelTransferVolume.generated.h already included, missing '#pragma once' in LevelTransferVolume.h"
#endif
#define DONUT_LevelTransferVolume_generated_h

#define donut_Source_donut_LevelTransferVolume_h_12_SPARSE_DATA
#define donut_Source_donut_LevelTransferVolume_h_12_RPC_WRAPPERS
#define donut_Source_donut_LevelTransferVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define donut_Source_donut_LevelTransferVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelTransferVolume(); \
	friend struct Z_Construct_UClass_ALevelTransferVolume_Statics; \
public: \
	DECLARE_CLASS(ALevelTransferVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(ALevelTransferVolume)


#define donut_Source_donut_LevelTransferVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALevelTransferVolume(); \
	friend struct Z_Construct_UClass_ALevelTransferVolume_Statics; \
public: \
	DECLARE_CLASS(ALevelTransferVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(ALevelTransferVolume)


#define donut_Source_donut_LevelTransferVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelTransferVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelTransferVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelTransferVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelTransferVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelTransferVolume(ALevelTransferVolume&&); \
	NO_API ALevelTransferVolume(const ALevelTransferVolume&); \
public:


#define donut_Source_donut_LevelTransferVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelTransferVolume(ALevelTransferVolume&&); \
	NO_API ALevelTransferVolume(const ALevelTransferVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelTransferVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelTransferVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelTransferVolume)


#define donut_Source_donut_LevelTransferVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransferLevelName() { return STRUCT_OFFSET(ALevelTransferVolume, TransferLevelName); } \
	FORCEINLINE static uint32 __PPO__TransferVolume() { return STRUCT_OFFSET(ALevelTransferVolume, TransferVolume); }


#define donut_Source_donut_LevelTransferVolume_h_9_PROLOG
#define donut_Source_donut_LevelTransferVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_LevelTransferVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_LevelTransferVolume_h_12_SPARSE_DATA \
	donut_Source_donut_LevelTransferVolume_h_12_RPC_WRAPPERS \
	donut_Source_donut_LevelTransferVolume_h_12_INCLASS \
	donut_Source_donut_LevelTransferVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define donut_Source_donut_LevelTransferVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_LevelTransferVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_LevelTransferVolume_h_12_SPARSE_DATA \
	donut_Source_donut_LevelTransferVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	donut_Source_donut_LevelTransferVolume_h_12_INCLASS_NO_PURE_DECLS \
	donut_Source_donut_LevelTransferVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONUT_API UClass* StaticClass<class ALevelTransferVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID donut_Source_donut_LevelTransferVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
