// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniqueNPCProject/IInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInteractable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_UIInteractable();
	UNIQUENPCPROJECT_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UniqueNPCProject();
// End Cross Module References
	DEFINE_FUNCTION(IIInteractable::execCanInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractable::execExecuteOption3)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteOption3_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractable::execExecuteOption2)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteOption2_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractable::execExecuteOption1)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteOption1_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractable::execGetNPCProperties)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Property1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Property2);
		P_GET_UBOOL_REF(Z_Param_Out_Property3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNPCProperties_Implementation(Z_Param_Out_Property1,Z_Param_Out_Property2,Z_Param_Out_Property3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractable::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	struct IInteractable_eventCanInteract_Parms
	{
		AActor* Interactor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		IInteractable_eventCanInteract_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct IInteractable_eventExecuteOption1_Parms
	{
		AActor* Interactor;
	};
	struct IInteractable_eventExecuteOption2_Parms
	{
		AActor* Interactor;
	};
	struct IInteractable_eventExecuteOption3_Parms
	{
		AActor* Interactor;
	};
	struct IInteractable_eventGetNPCProperties_Parms
	{
		float Property1;
		int32 Property2;
		bool Property3;
	};
	struct IInteractable_eventInteract_Parms
	{
		AActor* Interactor;
	};
	bool IIInteractable::CanInteract(AActor* Interactor) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
		IInteractable_eventCanInteract_Parms Parms;
		return Parms.ReturnValue;
	}
	void IIInteractable::ExecuteOption1(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteOption1 instead.");
	}
	void IIInteractable::ExecuteOption2(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteOption2 instead.");
	}
	void IIInteractable::ExecuteOption3(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteOption3 instead.");
	}
	void IIInteractable::GetNPCProperties(float& Property1, int32& Property2, bool& Property3)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNPCProperties instead.");
	}
	void IIInteractable::Interact(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UIInteractable::StaticRegisterNativesUIInteractable()
	{
		UClass* Class = UIInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &IIInteractable::execCanInteract },
			{ "ExecuteOption1", &IIInteractable::execExecuteOption1 },
			{ "ExecuteOption2", &IIInteractable::execExecuteOption2 },
			{ "ExecuteOption3", &IIInteractable::execExecuteOption3 },
			{ "GetNPCProperties", &IIInteractable::execGetNPCProperties },
			{ "Interact", &IIInteractable::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIInteractable_CanInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventCanInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IInteractable_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IInteractable_eventCanInteract_Parms), &Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_CanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Etkile\xc5\x9fime girilip girilemeyece\xc4\x9fini kontrol eden fonksiyon\n" },
		{ "ModuleRelativePath", "IInteractable.h" },
		{ "ToolTip", "Etkile\xc5\x9fime girilip girilemeyece\xc4\x9fini kontrol eden fonksiyon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "CanInteract", nullptr, nullptr, sizeof(IInteractable_eventCanInteract_Parms), Z_Construct_UFunction_UIInteractable_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventExecuteOption1_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Etkile\xc5\x9fim se\xc3\xa7""eneklerini tetiklemek i\xc3\xa7in fonksiyonlar\n" },
		{ "ModuleRelativePath", "IInteractable.h" },
		{ "ToolTip", "Etkile\xc5\x9fim se\xc3\xa7""eneklerini tetiklemek i\xc3\xa7in fonksiyonlar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "ExecuteOption1", nullptr, nullptr, sizeof(IInteractable_eventExecuteOption1_Parms), Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_ExecuteOption1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_ExecuteOption1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventExecuteOption2_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "IInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "ExecuteOption2", nullptr, nullptr, sizeof(IInteractable_eventExecuteOption2_Parms), Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_ExecuteOption2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_ExecuteOption2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventExecuteOption3_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "IInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "ExecuteOption3", nullptr, nullptr, sizeof(IInteractable_eventExecuteOption3_Parms), Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_ExecuteOption3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_ExecuteOption3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Property1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Property2;
		static void NewProp_Property3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Property3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property1 = { "Property1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventGetNPCProperties_Parms, Property1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property2 = { "Property2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventGetNPCProperties_Parms, Property2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property3_SetBit(void* Obj)
	{
		((IInteractable_eventGetNPCProperties_Parms*)Obj)->Property3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property3 = { "Property3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IInteractable_eventGetNPCProperties_Parms), &Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::NewProp_Property3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// NPC'nin \xc3\xb6zelliklerini almak i\xc3\xa7in fonksiyon\n" },
		{ "ModuleRelativePath", "IInteractable.h" },
		{ "ToolTip", "NPC'nin \xc3\xb6zelliklerini almak i\xc3\xa7in fonksiyon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "GetNPCProperties", nullptr, nullptr, sizeof(IInteractable_eventGetNPCProperties_Parms), Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_GetNPCProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_GetNPCProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractable_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractable_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IInteractable_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractable_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractable_Interact_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "IInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractable, nullptr, "Interact", nullptr, nullptr, sizeof(IInteractable_eventInteract_Parms), Z_Construct_UFunction_UIInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIInteractable);
	UClass* Z_Construct_UClass_UIInteractable_NoRegister()
	{
		return UIInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UIInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UniqueNPCProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIInteractable_CanInteract, "CanInteract" }, // 1570166911
		{ &Z_Construct_UFunction_UIInteractable_ExecuteOption1, "ExecuteOption1" }, // 3221139707
		{ &Z_Construct_UFunction_UIInteractable_ExecuteOption2, "ExecuteOption2" }, // 1598172538
		{ &Z_Construct_UFunction_UIInteractable_ExecuteOption3, "ExecuteOption3" }, // 1670547902
		{ &Z_Construct_UFunction_UIInteractable_GetNPCProperties, "GetNPCProperties" }, // 3158380204
		{ &Z_Construct_UFunction_UIInteractable_Interact, "Interact" }, // 1821821554
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIInteractable_Statics::ClassParams = {
		&UIInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIInteractable()
	{
		if (!Z_Registration_Info_UClass_UIInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIInteractable.OuterSingleton, Z_Construct_UClass_UIInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIInteractable.OuterSingleton;
	}
	template<> UNIQUENPCPROJECT_API UClass* StaticClass<UIInteractable>()
	{
		return UIInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIInteractable);
	UIInteractable::~UIInteractable() {}
	static FName NAME_UIInteractable_CanInteract = FName(TEXT("CanInteract"));
	bool IIInteractable::Execute_CanInteract(const UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventCanInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_CanInteract);
		if (Func)
		{
			Parms.Interactor=Interactor;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			Parms.ReturnValue = I->CanInteract_Implementation(Interactor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UIInteractable_ExecuteOption1 = FName(TEXT("ExecuteOption1"));
	void IIInteractable::Execute_ExecuteOption1(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventExecuteOption1_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_ExecuteOption1);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			I->ExecuteOption1_Implementation(Interactor);
		}
	}
	static FName NAME_UIInteractable_ExecuteOption2 = FName(TEXT("ExecuteOption2"));
	void IIInteractable::Execute_ExecuteOption2(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventExecuteOption2_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_ExecuteOption2);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			I->ExecuteOption2_Implementation(Interactor);
		}
	}
	static FName NAME_UIInteractable_ExecuteOption3 = FName(TEXT("ExecuteOption3"));
	void IIInteractable::Execute_ExecuteOption3(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventExecuteOption3_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_ExecuteOption3);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			I->ExecuteOption3_Implementation(Interactor);
		}
	}
	static FName NAME_UIInteractable_GetNPCProperties = FName(TEXT("GetNPCProperties"));
	void IIInteractable::Execute_GetNPCProperties(UObject* O, float& Property1, int32& Property2, bool& Property3)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventGetNPCProperties_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_GetNPCProperties);
		if (Func)
		{
			Parms.Property1=Property1;
			Parms.Property2=Property2;
			Parms.Property3=Property3;
			O->ProcessEvent(Func, &Parms);
			Property1=Parms.Property1;
			Property2=Parms.Property2;
			Property3=Parms.Property3;
		}
		else if (auto I = (IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			I->GetNPCProperties_Implementation(Property1,Property2,Property3);
		}
	}
	static FName NAME_UIInteractable_Interact = FName(TEXT("Interact"));
	void IIInteractable::Execute_Interact(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractable::StaticClass()));
		IInteractable_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractable_Interact);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIInteractable*)(O->GetNativeInterfaceAddress(UIInteractable::StaticClass())))
		{
			I->Interact_Implementation(Interactor);
		}
	}
	struct Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIInteractable, UIInteractable::StaticClass, TEXT("UIInteractable"), &Z_Registration_Info_UClass_UIInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIInteractable), 3045637389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_989847401(TEXT("/Script/UniqueNPCProject"),
		Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
