// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueNPCProject_init() {}
	UNIQUENPCPROJECT_API UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature();
	UNIQUENPCPROJECT_API UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature();
	UNIQUENPCPROJECT_API UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UniqueNPCProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UniqueNPCProject()
	{
		if (!Z_Registration_Info_UPackage__Script_UniqueNPCProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UniqueNPCProject_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UniqueNPCProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5AD528D0,
				0xD442F9E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UniqueNPCProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UniqueNPCProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UniqueNPCProject(Z_Construct_UPackage__Script_UniqueNPCProject, TEXT("/Script/UniqueNPCProject"), Z_Registration_Info_UPackage__Script_UniqueNPCProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5AD528D0, 0xD442F9E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
