// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENWORLD_OpenWorldGameModeBase_generated_h
#error "OpenWorldGameModeBase.generated.h already included, missing '#pragma once' in OpenWorldGameModeBase.h"
#endif
#define OPENWORLD_OpenWorldGameModeBase_generated_h

#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_SPARSE_DATA
#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_RPC_WRAPPERS
#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenWorldGameModeBase(); \
	friend struct Z_Construct_UClass_AOpenWorldGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AOpenWorldGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenWorld"), NO_API) \
	DECLARE_SERIALIZER(AOpenWorldGameModeBase)


#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAOpenWorldGameModeBase(); \
	friend struct Z_Construct_UClass_AOpenWorldGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AOpenWorldGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenWorld"), NO_API) \
	DECLARE_SERIALIZER(AOpenWorldGameModeBase)


#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenWorldGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenWorldGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenWorldGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenWorldGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenWorldGameModeBase(AOpenWorldGameModeBase&&); \
	NO_API AOpenWorldGameModeBase(const AOpenWorldGameModeBase&); \
public:


#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenWorldGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenWorldGameModeBase(AOpenWorldGameModeBase&&); \
	NO_API AOpenWorldGameModeBase(const AOpenWorldGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenWorldGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenWorldGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenWorldGameModeBase)


#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_12_PROLOG
#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_SPARSE_DATA \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_RPC_WRAPPERS \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_INCLASS \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_SPARSE_DATA \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENWORLD_API UClass* StaticClass<class AOpenWorldGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
