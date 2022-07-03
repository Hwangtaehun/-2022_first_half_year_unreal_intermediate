// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "personalproject/personalprojectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepersonalprojectGameMode() {}
// Cross Module References
	PERSONALPROJECT_API UClass* Z_Construct_UClass_ApersonalprojectGameMode_NoRegister();
	PERSONALPROJECT_API UClass* Z_Construct_UClass_ApersonalprojectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_personalproject();
// End Cross Module References
	void ApersonalprojectGameMode::StaticRegisterNativesApersonalprojectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ApersonalprojectGameMode);
	UClass* Z_Construct_UClass_ApersonalprojectGameMode_NoRegister()
	{
		return ApersonalprojectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ApersonalprojectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ApersonalprojectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_personalproject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApersonalprojectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "personalprojectGameMode.h" },
		{ "ModuleRelativePath", "personalprojectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ApersonalprojectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ApersonalprojectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ApersonalprojectGameMode_Statics::ClassParams = {
		&ApersonalprojectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ApersonalprojectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ApersonalprojectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ApersonalprojectGameMode()
	{
		if (!Z_Registration_Info_UClass_ApersonalprojectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ApersonalprojectGameMode.OuterSingleton, Z_Construct_UClass_ApersonalprojectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ApersonalprojectGameMode.OuterSingleton;
	}
	template<> PERSONALPROJECT_API UClass* StaticClass<ApersonalprojectGameMode>()
	{
		return ApersonalprojectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ApersonalprojectGameMode);
	struct Z_CompiledInDeferFile_FID_personalproject_Source_personalproject_personalprojectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_personalproject_Source_personalproject_personalprojectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ApersonalprojectGameMode, ApersonalprojectGameMode::StaticClass, TEXT("ApersonalprojectGameMode"), &Z_Registration_Info_UClass_ApersonalprojectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ApersonalprojectGameMode), 3215469634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_personalproject_Source_personalproject_personalprojectGameMode_h_3403450849(TEXT("/Script/personalproject"),
		Z_CompiledInDeferFile_FID_personalproject_Source_personalproject_personalprojectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_personalproject_Source_personalproject_personalprojectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
