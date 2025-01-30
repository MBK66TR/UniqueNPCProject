// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/UniqueNPCProjectCharacter.h"
#include "UniqueNPCProject/InventoryItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueNPCProjectCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_AUniqueNPCProjectCharacter();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_AUniqueNPCProjectCharacter_NoRegister();
	UNIQUENPCPROJECT_API UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature();
	UNIQUENPCPROJECT_API UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature();
	UNIQUENPCPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UniqueNPCProject, nullptr, "OnInteractionUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics
	{
		struct _Script_UniqueNPCProject_eventOnHotbarUpdated_Parms
		{
			int32 SlotIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UniqueNPCProject_eventOnHotbarUpdated_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UniqueNPCProject, nullptr, "OnHotbarUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::_Script_UniqueNPCProject_eventOnHotbarUpdated_Parms), Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execSetActiveHotbarSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveHotbarSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execUseHotbarItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseHotbarItem(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execAddItemToHotbar)
	{
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemToHotbar(Z_Param_Out_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execCheckForInteractables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckForInteractables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniqueNPCProjectCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AUniqueNPCProjectCharacter::StaticRegisterNativesAUniqueNPCProjectCharacter()
	{
		UClass* Class = AUniqueNPCProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToHotbar", &AUniqueNPCProjectCharacter::execAddItemToHotbar },
			{ "CheckForInteractables", &AUniqueNPCProjectCharacter::execCheckForInteractables },
			{ "GetHasRifle", &AUniqueNPCProjectCharacter::execGetHasRifle },
			{ "Interact", &AUniqueNPCProjectCharacter::execInteract },
			{ "SetActiveHotbarSlot", &AUniqueNPCProjectCharacter::execSetActiveHotbarSlot },
			{ "SetHasRifle", &AUniqueNPCProjectCharacter::execSetHasRifle },
			{ "UseHotbarItem", &AUniqueNPCProjectCharacter::execUseHotbarItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics
	{
		struct UniqueNPCProjectCharacter_eventAddItemToHotbar_Parms
		{
			FInventoryItem Item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniqueNPCProjectCharacter_eventAddItemToHotbar_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_Item_MetaData)) }; // 2624655456
	void Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniqueNPCProjectCharacter_eventAddItemToHotbar_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniqueNPCProjectCharacter_eventAddItemToHotbar_Parms), &Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Item ekleme fonksiyonu\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Item ekleme fonksiyonu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "AddItemToHotbar", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::UniqueNPCProjectCharacter_eventAddItemToHotbar_Parms), Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Function to check for interactables\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Function to check for interactables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "CheckForInteractables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics
	{
		struct UniqueNPCProjectCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniqueNPCProjectCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniqueNPCProjectCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Getter for the bool */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Getter for the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "GetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::UniqueNPCProjectCharacter_eventGetHasRifle_Parms), Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Function to interact with the interactable actor\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Function to interact with the interactable actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics
	{
		struct UniqueNPCProjectCharacter_eventSetActiveHotbarSlot_Parms
		{
			int32 SlotIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniqueNPCProjectCharacter_eventSetActiveHotbarSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Aktif slotu de\xc4\x9fi\xc5\x9ftirme fonksiyonu\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Aktif slotu de\xc4\x9fi\xc5\x9ftirme fonksiyonu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "SetActiveHotbarSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::UniqueNPCProjectCharacter_eventSetActiveHotbarSlot_Parms), Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics
	{
		struct UniqueNPCProjectCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((UniqueNPCProjectCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniqueNPCProjectCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Setter to set the bool */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Setter to set the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "SetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::UniqueNPCProjectCharacter_eventSetHasRifle_Parms), Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics
	{
		struct UniqueNPCProjectCharacter_eventUseHotbarItem_Parms
		{
			int32 SlotIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniqueNPCProjectCharacter_eventUseHotbarItem_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Item kullanma fonksiyonu\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Item kullanma fonksiyonu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniqueNPCProjectCharacter, nullptr, "UseHotbarItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::UniqueNPCProjectCharacter_eventUseHotbarItem_Parms), Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUniqueNPCProjectCharacter);
	UClass* Z_Construct_UClass_AUniqueNPCProjectCharacter_NoRegister()
	{
		return AUniqueNPCProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HotbarSlotActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotbarSlotActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HotbarSlotActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionUpdated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HotbarItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotbarItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HotbarItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHotbarSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHotbarSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHotbarSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveHotbarSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHotbarUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHotbarUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_AddItemToHotbar, "AddItemToHotbar" }, // 312980824
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_CheckForInteractables, "CheckForInteractables" }, // 124179878
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_GetHasRifle, "GetHasRifle" }, // 235987577
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_Interact, "Interact" }, // 1981789894
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetActiveHotbarSlot, "SetActiveHotbarSlot" }, // 2004250232
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_SetHasRifle, "SetHasRifle" }, // 1889216648
		{ &Z_Construct_UFunction_AUniqueNPCProjectCharacter_UseHotbarItem, "UseHotbarItem" }, // 1558895670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UniqueNPCProjectCharacter.h" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Interact Input Action */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Interact Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractAction_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions_Inner = { "HotbarSlotActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Hotbar Slot Actions */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Hotbar Slot Actions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions = { "HotbarSlotActions", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, HotbarSlotActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
	};
#endif
	void Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AUniqueNPCProjectCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniqueNPCProjectCharacter), &Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Interaction Distance\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Interaction Distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractableActor_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Interactable Actor\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Interactable Actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractableActor = { "InteractableActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, InteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractableActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnInteractionUpdated_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Blueprint Event to update the interaction widget\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Blueprint Event to update the interaction widget" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnInteractionUpdated = { "OnInteractionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, OnInteractionUpdated), Z_Construct_UDelegateFunction_UniqueNPCProject_OnInteractionUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnInteractionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnInteractionUpdated_MetaData)) }; // 3593923192
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems_Inner = { "HotbarItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 2624655456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems_MetaData[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Hotbar array'i\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Hotbar array'i" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems = { "HotbarItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, HotbarItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems_MetaData)) }; // 2624655456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MaxHotbarSlots_MetaData[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Maksimum hotbar slot say\xc4\xb1s\xc4\xb1\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Maksimum hotbar slot say\xc4\xb1s\xc4\xb1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MaxHotbarSlots = { "MaxHotbarSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, MaxHotbarSlots), METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MaxHotbarSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MaxHotbarSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_ActiveHotbarSlot_MetaData[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Aktif slot indeksi\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Aktif slot indeksi" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_ActiveHotbarSlot = { "ActiveHotbarSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, ActiveHotbarSlot), METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_ActiveHotbarSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_ActiveHotbarSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnHotbarUpdated_MetaData[] = {
		{ "Category", "Hotbar" },
		{ "Comment", "// Hotbar g\xc3\xbcncellendi\xc4\x9finde \xc3\xa7""a\xc4\x9fr\xc4\xb1lacak delegate\n" },
		{ "ModuleRelativePath", "UniqueNPCProjectCharacter.h" },
		{ "ToolTip", "Hotbar g\xc3\xbcncellendi\xc4\x9finde \xc3\xa7""a\xc4\x9fr\xc4\xb1lacak delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnHotbarUpdated = { "OnHotbarUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniqueNPCProjectCharacter, OnHotbarUpdated), Z_Construct_UDelegateFunction_UniqueNPCProject_OnHotbarUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnHotbarUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnHotbarUpdated_MetaData)) }; // 2378598111
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarSlotActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_InteractableActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnInteractionUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_HotbarItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_MaxHotbarSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_ActiveHotbarSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::NewProp_OnHotbarUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniqueNPCProjectCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::ClassParams = {
		&AUniqueNPCProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUniqueNPCProjectCharacter()
	{
		if (!Z_Registration_Info_UClass_AUniqueNPCProjectCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniqueNPCProjectCharacter.OuterSingleton, Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUniqueNPCProjectCharacter.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<AUniqueNPCProjectCharacter>()
	{
		return AUniqueNPCProjectCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUniqueNPCProjectCharacter);
	AUniqueNPCProjectCharacter::~AUniqueNPCProjectCharacter() {}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUniqueNPCProjectCharacter, AUniqueNPCProjectCharacter::StaticClass, TEXT("AUniqueNPCProjectCharacter"), &Z_Registration_Info_UClass_AUniqueNPCProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniqueNPCProjectCharacter), 1995340144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_582398575(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
