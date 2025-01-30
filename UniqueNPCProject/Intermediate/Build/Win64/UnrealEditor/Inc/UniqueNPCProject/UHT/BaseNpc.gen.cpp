// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/BaseNpc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNpc() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_ABaseNpc();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_ABaseNpc_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	DEFINE_FUNCTION(ABaseNpc::execCloseInteractionWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseInteractionWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseNpc::execGetNPCReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseNpc**)Z_Param__Result=P_THIS->GetNPCReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseNpc::execRandomizeProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseNpc::execReturnToSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseNpc::execMoveToTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTarget();
		P_NATIVE_END;
	}
	void ABaseNpc::StaticRegisterNativesABaseNpc()
	{
		UClass* Class = ABaseNpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseInteractionWidget", &ABaseNpc::execCloseInteractionWidget },
			{ "GetNPCReference", &ABaseNpc::execGetNPCReference },
			{ "MoveToTarget", &ABaseNpc::execMoveToTarget },
			{ "RandomizeProperties", &ABaseNpc::execRandomizeProperties },
			{ "ReturnToSpawn", &ABaseNpc::execReturnToSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Widget'\xc4\xb1 kapatmak i\xc3\xa7in yard\xc4\xb1mc\xc4\xb1 fonksiyon\n" },
		{ "ModuleRelativePath", "BaseNpc.h" },
		{ "ToolTip", "Widget'\xc4\xb1 kapatmak i\xc3\xa7in yard\xc4\xb1mc\xc4\xb1 fonksiyon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpc, nullptr, "CloseInteractionWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics
	{
		struct BaseNpc_eventGetNPCReference_Parms
		{
			ABaseNpc* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseNpc_eventGetNPCReference_Parms, ReturnValue), Z_Construct_UClass_ABaseNpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "// Widget'a NPC referans\xc4\xb1n\xc4\xb1 vermek i\xc3\xa7in getter\n" },
		{ "ModuleRelativePath", "BaseNpc.h" },
		{ "ToolTip", "Widget'a NPC referans\xc4\xb1n\xc4\xb1 vermek i\xc3\xa7in getter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpc, nullptr, "GetNPCReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::BaseNpc_eventGetNPCReference_Parms), Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpc_GetNPCReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNpc_GetNPCReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Movement" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpc, nullptr, "MoveToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpc_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNpc_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Properties" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpc, nullptr, "RandomizeProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpc_RandomizeProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNpc_RandomizeProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Movement" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpc, nullptr, "ReturnToSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpc_ReturnToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNpc_ReturnToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseNpc);
	UClass* Z_Construct_UClass_ABaseNpc_NoRegister()
	{
		return ABaseNpc::StaticClass();
	}
	struct Z_Construct_UClass_ABaseNpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Property1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Property2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property3_MetaData[];
#endif
		static void NewProp_Property3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Property3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseNpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseNpc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseNpc_CloseInteractionWidget, "CloseInteractionWidget" }, // 420446347
		{ &Z_Construct_UFunction_ABaseNpc_GetNPCReference, "GetNPCReference" }, // 1504406924
		{ &Z_Construct_UFunction_ABaseNpc_MoveToTarget, "MoveToTarget" }, // 313856068
		{ &Z_Construct_UFunction_ABaseNpc_RandomizeProperties, "RandomizeProperties" }, // 430880416
		{ &Z_Construct_UFunction_ABaseNpc_ReturnToSpawn, "ReturnToSpawn" }, // 3703173050
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseNpc.h" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property1_MetaData[] = {
		{ "Category", "NPC Properties" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property1 = { "Property1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, Property1), METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property2_MetaData[] = {
		{ "Category", "NPC Properties" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property2 = { "Property2", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, Property2), METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3_MetaData[] = {
		{ "Category", "NPC Properties" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	void Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3_SetBit(void* Obj)
	{
		((ABaseNpc*)Obj)->Property3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3 = { "Property3", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseNpc), &Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "NPC Movement" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "NPC Movement" },
		{ "ModuleRelativePath", "BaseNpc.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Widget s\xc4\xb1n\xc4\xb1""f\xc4\xb1 referans\xc4\xb1\n" },
		{ "ModuleRelativePath", "BaseNpc.h" },
		{ "ToolTip", "Widget s\xc4\xb1n\xc4\xb1""f\xc4\xb1 referans\xc4\xb1" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, InteractionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidget_MetaData[] = {
		{ "Comment", "// Aktif widget referans\xc4\xb1\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNpc.h" },
		{ "ToolTip", "Aktif widget referans\xc4\xb1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseNpc, InteractionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseNpc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_Property3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpc_Statics::NewProp_InteractionWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseNpc_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIInteractable_NoRegister, (int32)VTABLE_OFFSET(ABaseNpc, IIInteractable), false },  // 3920413165
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseNpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNpc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseNpc_Statics::ClassParams = {
		&ABaseNpc::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseNpc_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseNpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseNpc()
	{
		if (!Z_Registration_Info_UClass_ABaseNpc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseNpc.OuterSingleton, Z_Construct_UClass_ABaseNpc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseNpc.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<ABaseNpc>()
	{
		return ABaseNpc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNpc);
	ABaseNpc::~ABaseNpc() {}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseNpc, ABaseNpc::StaticClass, TEXT("ABaseNpc"), &Z_Registration_Info_UClass_ABaseNpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseNpc), 145510788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_3008547750(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
