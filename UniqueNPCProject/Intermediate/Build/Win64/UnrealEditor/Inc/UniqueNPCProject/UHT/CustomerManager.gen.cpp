// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/CustomerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomerManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_ABaseNpc_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_ACustomerManager();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_ACustomerManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	DEFINE_FUNCTION(ACustomerManager::execReorganizeQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReorganizeQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomerManager::execRemoveCustomerFromQueue)
	{
		P_GET_OBJECT(ABaseNpc,Z_Param_Customer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCustomerFromQueue(Z_Param_Customer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomerManager::execFindEmptyQueuePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindEmptyQueuePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomerManager::execSpawnNewCustomer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnNewCustomer();
		P_NATIVE_END;
	}
	void ACustomerManager::StaticRegisterNativesACustomerManager()
	{
		UClass* Class = ACustomerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindEmptyQueuePosition", &ACustomerManager::execFindEmptyQueuePosition },
			{ "RemoveCustomerFromQueue", &ACustomerManager::execRemoveCustomerFromQueue },
			{ "ReorganizeQueue", &ACustomerManager::execReorganizeQueue },
			{ "SpawnNewCustomer", &ACustomerManager::execSpawnNewCustomer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics
	{
		struct CustomerManager_eventFindEmptyQueuePosition_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomerManager_eventFindEmptyQueuePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// S\xef\xbf\xbdradaki bo\xef\xbf\xbd pozisyonu bulma\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "S\xef\xbf\xbdradaki bo\xef\xbf\xbd pozisyonu bulma" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerManager, nullptr, "FindEmptyQueuePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::CustomerManager_eventFindEmptyQueuePosition_Parms), Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics
	{
		struct CustomerManager_eventRemoveCustomerFromQueue_Parms
		{
			ABaseNpc* Customer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Customer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomerManager_eventRemoveCustomerFromQueue_Parms, Customer), Z_Construct_UClass_ABaseNpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// M\xef\xbf\xbd\xef\xbf\xbdteriyi s\xef\xbf\xbdradan \xef\xbf\xbd\xef\xbf\xbdkarma\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "M\xef\xbf\xbd\xef\xbf\xbdteriyi s\xef\xbf\xbdradan \xef\xbf\xbd\xef\xbf\xbdkarma" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerManager, nullptr, "RemoveCustomerFromQueue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::CustomerManager_eventRemoveCustomerFromQueue_Parms), Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// S\xef\xbf\xbdray\xef\xbf\xbd yeniden d\xef\xbf\xbdzenleme\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "S\xef\xbf\xbdray\xef\xbf\xbd yeniden d\xef\xbf\xbdzenleme" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerManager, nullptr, "ReorganizeQueue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerManager_ReorganizeQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomerManager_ReorganizeQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Yeni m\xef\xbf\xbd\xef\xbf\xbdteri spawn etme\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "Yeni m\xef\xbf\xbd\xef\xbf\xbdteri spawn etme" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerManager, nullptr, "SpawnNewCustomer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomerManager);
	UClass* Z_Construct_UClass_ACustomerManager_NoRegister()
	{
		return ACustomerManager::StaticClass();
	}
	struct Z_Construct_UClass_ACustomerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueuePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueuePositions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCustomers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCustomers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCustomers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCustomers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCustomers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NPCToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomerManager_FindEmptyQueuePosition, "FindEmptyQueuePosition" }, // 1001422359
		{ &Z_Construct_UFunction_ACustomerManager_RemoveCustomerFromQueue, "RemoveCustomerFromQueue" }, // 930021700
		{ &Z_Construct_UFunction_ACustomerManager_ReorganizeQueue, "ReorganizeQueue" }, // 2366210391
		{ &Z_Construct_UFunction_ACustomerManager_SpawnNewCustomer, "SpawnNewCustomer" }, // 2600174921
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomerManager.h" },
		{ "ModuleRelativePath", "CustomerManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// M\xef\xbf\xbd\xef\xbf\xbdteri spawn noktas\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "M\xef\xbf\xbd\xef\xbf\xbdteri spawn noktas\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_TargetPoint_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// M\xef\xbf\xbd\xef\xbf\xbdterilerin gidece\xef\xbf\xbdi hedef nokta\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "M\xef\xbf\xbd\xef\xbf\xbdterilerin gidece\xef\xbf\xbdi hedef nokta" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, TargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_TargetPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_TargetPoint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions_Inner = { "QueuePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions_MetaData[] = {
		{ "Category", "Queue" },
		{ "Comment", "// S\xef\xbf\xbdra pozisyonlar\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "S\xef\xbf\xbdra pozisyonlar\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions = { "QueuePositions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, QueuePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers_Inner = { "ActiveCustomers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ABaseNpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers_MetaData[] = {
		{ "Comment", "// Aktif m\xef\xbf\xbd\xef\xbf\xbdteriler\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "Aktif m\xef\xbf\xbd\xef\xbf\xbdteriler" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers = { "ActiveCustomers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, ActiveCustomers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_MaxCustomers_MetaData[] = {
		{ "Category", "Queue" },
		{ "Comment", "// Maksimum m\xef\xbf\xbd\xef\xbf\xbdteri say\xef\xbf\xbds\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "Maksimum m\xef\xbf\xbd\xef\xbf\xbdteri say\xef\xbf\xbds\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_MaxCustomers = { "MaxCustomers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, MaxCustomers), METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_MaxCustomers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_MaxCustomers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// Spawn aral\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "Spawn aral\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, SpawnInterval), METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerManager_Statics::NewProp_NPCToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// Spawn edilecek NPC Blueprint'i\n" },
		{ "ModuleRelativePath", "CustomerManager.h" },
		{ "ToolTip", "Spawn edilecek NPC Blueprint'i" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomerManager_Statics::NewProp_NPCToSpawn = { "NPCToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomerManager, NPCToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseNpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::NewProp_NPCToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::NewProp_NPCToSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomerManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_TargetPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_QueuePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_ActiveCustomers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_MaxCustomers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_SpawnInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerManager_Statics::NewProp_NPCToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomerManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomerManager_Statics::ClassParams = {
		&ACustomerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomerManager()
	{
		if (!Z_Registration_Info_UClass_ACustomerManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomerManager.OuterSingleton, Z_Construct_UClass_ACustomerManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomerManager.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<ACustomerManager>()
	{
		return ACustomerManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomerManager);
	ACustomerManager::~ACustomerManager() {}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomerManager, ACustomerManager::StaticClass, TEXT("ACustomerManager"), &Z_Registration_Info_UClass_ACustomerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomerManager), 1680302489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_3002135104(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
