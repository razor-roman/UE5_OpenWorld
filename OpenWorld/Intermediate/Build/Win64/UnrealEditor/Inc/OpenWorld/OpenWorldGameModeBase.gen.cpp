// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenWorld/OpenWorldGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenWorldGameModeBase() {}
// Cross Module References
	OPENWORLD_API UClass* Z_Construct_UClass_AOpenWorldGameModeBase_NoRegister();
	OPENWORLD_API UClass* Z_Construct_UClass_AOpenWorldGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OpenWorld();
// End Cross Module References
	void AOpenWorldGameModeBase::StaticRegisterNativesAOpenWorldGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOpenWorldGameModeBase);
	UClass* Z_Construct_UClass_AOpenWorldGameModeBase_NoRegister()
	{
		return AOpenWorldGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOpenWorldGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenWorldGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenWorldGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OpenWorldGameModeBase.h" },
		{ "ModuleRelativePath", "OpenWorldGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenWorldGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenWorldGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOpenWorldGameModeBase_Statics::ClassParams = {
		&AOpenWorldGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOpenWorldGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenWorldGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenWorldGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AOpenWorldGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOpenWorldGameModeBase.OuterSingleton, Z_Construct_UClass_AOpenWorldGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOpenWorldGameModeBase.OuterSingleton;
	}
	template<> OPENWORLD_API UClass* StaticClass<AOpenWorldGameModeBase>()
	{
		return AOpenWorldGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenWorldGameModeBase);
	struct Z_CompiledInDeferFile_FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOpenWorldGameModeBase, AOpenWorldGameModeBase::StaticClass, TEXT("AOpenWorldGameModeBase"), &Z_Registration_Info_UClass_AOpenWorldGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOpenWorldGameModeBase), 2719429139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_1090725639(TEXT("/Script/OpenWorld"),
		Z_CompiledInDeferFile_FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenWorld_Source_OpenWorld_OpenWorldGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
