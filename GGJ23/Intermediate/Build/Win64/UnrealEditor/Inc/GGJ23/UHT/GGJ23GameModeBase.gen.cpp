// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ23/GGJ23GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ23GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GGJ23_API UClass* Z_Construct_UClass_AGGJ23GameModeBase();
	GGJ23_API UClass* Z_Construct_UClass_AGGJ23GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GGJ23();
// End Cross Module References
	void AGGJ23GameModeBase::StaticRegisterNativesAGGJ23GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGJ23GameModeBase);
	UClass* Z_Construct_UClass_AGGJ23GameModeBase_NoRegister()
	{
		return AGGJ23GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGGJ23GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGJ23GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ23,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGJ23GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GGJ23GameModeBase.h" },
		{ "ModuleRelativePath", "GGJ23GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGJ23GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ23GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGJ23GameModeBase_Statics::ClassParams = {
		&AGGJ23GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGGJ23GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ23GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGGJ23GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGGJ23GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGJ23GameModeBase.OuterSingleton, Z_Construct_UClass_AGGJ23GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGGJ23GameModeBase.OuterSingleton;
	}
	template<> GGJ23_API UClass* StaticClass<AGGJ23GameModeBase>()
	{
		return AGGJ23GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGJ23GameModeBase);
	AGGJ23GameModeBase::~AGGJ23GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_GGJ23_Source_GGJ23_GGJ23GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGJ23_Source_GGJ23_GGJ23GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGGJ23GameModeBase, AGGJ23GameModeBase::StaticClass, TEXT("AGGJ23GameModeBase"), &Z_Registration_Info_UClass_AGGJ23GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGJ23GameModeBase), 2328566082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGJ23_Source_GGJ23_GGJ23GameModeBase_h_3625157513(TEXT("/Script/GGJ23"),
		Z_CompiledInDeferFile_FID_GGJ23_Source_GGJ23_GGJ23GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGJ23_Source_GGJ23_GGJ23GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
