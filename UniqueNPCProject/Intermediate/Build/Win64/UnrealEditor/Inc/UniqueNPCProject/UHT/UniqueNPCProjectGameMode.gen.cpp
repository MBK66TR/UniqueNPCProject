// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/UniqueNPCProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueNPCProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_AUniqueNPCProjectGameMode();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_AUniqueNPCProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	void AUniqueNPCProjectGameMode::StaticRegisterNativesAUniqueNPCProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUniqueNPCProjectGameMode);
	UClass* Z_Construct_UClass_AUniqueNPCProjectGameMode_NoRegister()
	{
		return AUniqueNPCProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UniqueNPCProjectGameMode.h" },
		{ "ModuleRelativePath", "UniqueNPCProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniqueNPCProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::ClassParams = {
		&AUniqueNPCProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUniqueNPCProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AUniqueNPCProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniqueNPCProjectGameMode.OuterSingleton, Z_Construct_UClass_AUniqueNPCProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUniqueNPCProjectGameMode.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<AUniqueNPCProjectGameMode>()
	{
		return AUniqueNPCProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUniqueNPCProjectGameMode);
	AUniqueNPCProjectGameMode::~AUniqueNPCProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUniqueNPCProjectGameMode, AUniqueNPCProjectGameMode::StaticClass, TEXT("AUniqueNPCProjectGameMode"), &Z_Registration_Info_UClass_AUniqueNPCProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniqueNPCProjectGameMode), 705897137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectGameMode_h_3337798944(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
