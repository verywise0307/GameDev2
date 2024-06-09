// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DONUT_puritybox_generated_h
#error "puritybox.generated.h already included, missing '#pragma once' in puritybox.h"
#endif
#define DONUT_puritybox_generated_h

#define donut_Source_donut_puritybox_h_12_SPARSE_DATA
#define donut_Source_donut_puritybox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define donut_Source_donut_puritybox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define donut_Source_donut_puritybox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesApuritybox(); \
	friend struct Z_Construct_UClass_Apuritybox_Statics; \
public: \
	DECLARE_CLASS(Apuritybox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(Apuritybox)


#define donut_Source_donut_puritybox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesApuritybox(); \
	friend struct Z_Construct_UClass_Apuritybox_Statics; \
public: \
	DECLARE_CLASS(Apuritybox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/donut"), NO_API) \
	DECLARE_SERIALIZER(Apuritybox)


#define donut_Source_donut_puritybox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Apuritybox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Apuritybox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Apuritybox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Apuritybox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Apuritybox(Apuritybox&&); \
	NO_API Apuritybox(const Apuritybox&); \
public:


#define donut_Source_donut_puritybox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Apuritybox(Apuritybox&&); \
	NO_API Apuritybox(const Apuritybox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Apuritybox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Apuritybox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Apuritybox)


#define donut_Source_donut_puritybox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(Apuritybox, RootScene); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(Apuritybox, CollisionBox); }


#define donut_Source_donut_puritybox_h_9_PROLOG
#define donut_Source_donut_puritybox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_puritybox_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_puritybox_h_12_SPARSE_DATA \
	donut_Source_donut_puritybox_h_12_RPC_WRAPPERS \
	donut_Source_donut_puritybox_h_12_INCLASS \
	donut_Source_donut_puritybox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define donut_Source_donut_puritybox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	donut_Source_donut_puritybox_h_12_PRIVATE_PROPERTY_OFFSET \
	donut_Source_donut_puritybox_h_12_SPARSE_DATA \
	donut_Source_donut_puritybox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	donut_Source_donut_puritybox_h_12_INCLASS_NO_PURE_DECLS \
	donut_Source_donut_puritybox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONUT_API UClass* StaticClass<class Apuritybox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID donut_Source_donut_puritybox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
