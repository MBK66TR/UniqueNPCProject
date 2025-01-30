// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/PickupItem.h"
#include "UniqueNPCProject/InventoryItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_APickupItem();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
	UNIQUENPCPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	DEFINE_FUNCTION(APickupItem::execGetItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInventoryItem*)Z_Param__Result=P_THIS->GetItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupItem::execSetItemData)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_NewItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemData(Z_Param_Out_NewItemData);
		P_NATIVE_END;
	}
	void APickupItem::StaticRegisterNativesAPickupItem()
	{
		UClass* Class = APickupItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemData", &APickupItem::execGetItemData },
			{ "SetItemData", &APickupItem::execSetItemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupItem_GetItemData_Statics
	{
		struct PickupItem_eventGetItemData_Parms
		{
			FInventoryItem ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_GetItemData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupItem_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupItem_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_GetItemData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_GetItemData_Statics::NewProp_ReturnValue_MetaData)) }; // 2624655456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupItem_GetItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Blueprint'ten item verilerini almak i\xc3\xa7in\n" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ToolTip", "Blueprint'ten item verilerini almak i\xc3\xa7in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "GetItemData", nullptr, nullptr, sizeof(Z_Construct_UFunction_APickupItem_GetItemData_Statics::PickupItem_eventGetItemData_Parms), Z_Construct_UFunction_APickupItem_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_GetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_GetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_GetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupItem_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_SetItemData_Statics
	{
		struct PickupItem_eventSetItemData_Parms
		{
			FInventoryItem NewItemData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItemData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_SetItemData_Statics::NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupItem_SetItemData_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupItem_eventSetItemData_Parms, NewItemData), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_SetItemData_Statics::NewProp_NewItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_SetItemData_Statics::NewProp_NewItemData_MetaData)) }; // 2624655456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupItem_SetItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_SetItemData_Statics::NewProp_NewItemData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_SetItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Item verilerini ayarlamak i\xc3\xa7in\n" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ToolTip", "Item verilerini ayarlamak i\xc3\xa7in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_SetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "SetItemData", nullptr, nullptr, sizeof(Z_Construct_UFunction_APickupItem_SetItemData_Statics::PickupItem_eventSetItemData_Parms), Z_Construct_UFunction_APickupItem_SetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_SetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_SetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_SetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_SetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupItem_SetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupItem);
	UClass* Z_Construct_UClass_APickupItem_NoRegister()
	{
		return APickupItem::StaticClass();
	}
	struct Z_Construct_UClass_APickupItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItem_GetItemData, "GetItemData" }, // 2631513024
		{ &Z_Construct_UFunction_APickupItem_SetItemData, "SetItemData" }, // 2211324552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupItem.h" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Mesh bile\xc5\x9f""eni\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ToolTip", "Mesh bile\xc5\x9f""eni" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupItem, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Collision sphere\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ToolTip", "Collision sphere" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupItem, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Item verileri\n" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ToolTip", "Item verileri" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupItem, ItemData), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemData_MetaData)) }; // 2624655456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_CollisionSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickupItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIInteractable_NoRegister, (int32)VTABLE_OFFSET(APickupItem, IIInteractable), false },  // 3920413165
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
		&APickupItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupItem()
	{
		if (!Z_Registration_Info_UClass_APickupItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupItem.OuterSingleton, Z_Construct_UClass_APickupItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupItem.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<APickupItem>()
	{
		return APickupItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
	APickupItem::~APickupItem() {}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupItem, APickupItem::StaticClass, TEXT("APickupItem"), &Z_Registration_Info_UClass_APickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupItem), 1464653677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_3476169829(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
