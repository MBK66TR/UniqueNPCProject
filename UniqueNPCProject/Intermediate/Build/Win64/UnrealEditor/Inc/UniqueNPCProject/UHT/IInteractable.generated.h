// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IInteractable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNIQUENPCPROJECT_IInteractable_generated_h
#error "IInteractable.generated.h already included, missing '#pragma once' in IInteractable.h"
#endif
#define UNIQUENPCPROJECT_IInteractable_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_RPC_WRAPPERS \
	virtual void ExecuteOption3_Implementation(AActor* Interactor) {}; \
	virtual void ExecuteOption2_Implementation(AActor* Interactor) {}; \
	virtual void ExecuteOption1_Implementation(AActor* Interactor) {}; \
	virtual void GetNPCProperties_Implementation(float& Property1, int32& Property2, bool& Property3) {}; \
	virtual bool CanInteract_Implementation(AActor* Interactor) const { return false; }; \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execExecuteOption3); \
	DECLARE_FUNCTION(execExecuteOption2); \
	DECLARE_FUNCTION(execExecuteOption1); \
	DECLARE_FUNCTION(execGetNPCProperties); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execInteract);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteOption3_Implementation(AActor* Interactor) {}; \
	virtual void ExecuteOption2_Implementation(AActor* Interactor) {}; \
	virtual void ExecuteOption1_Implementation(AActor* Interactor) {}; \
	virtual void GetNPCProperties_Implementation(float& Property1, int32& Property2, bool& Property3) {}; \
	virtual bool CanInteract_Implementation(AActor* Interactor) const { return false; }; \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execExecuteOption3); \
	DECLARE_FUNCTION(execExecuteOption2); \
	DECLARE_FUNCTION(execExecuteOption1); \
	DECLARE_FUNCTION(execGetNPCProperties); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execInteract);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_CALLBACK_WRAPPERS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNIQUENPCPROJECT_API UIInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNIQUENPCPROJECT_API, UIInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNIQUENPCPROJECT_API UIInteractable(UIInteractable&&); \
	UNIQUENPCPROJECT_API UIInteractable(const UIInteractable&); \
public: \
	UNIQUENPCPROJECT_API virtual ~UIInteractable();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNIQUENPCPROJECT_API UIInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNIQUENPCPROJECT_API UIInteractable(UIInteractable&&); \
	UNIQUENPCPROJECT_API UIInteractable(const UIInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNIQUENPCPROJECT_API, UIInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractable) \
	UNIQUENPCPROJECT_API virtual ~UIInteractable();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIInteractable(); \
	friend struct Z_Construct_UClass_UIInteractable_Statics; \
public: \
	DECLARE_CLASS(UIInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), UNIQUENPCPROJECT_API) \
	DECLARE_SERIALIZER(UIInteractable)


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIInteractable() {} \
public: \
	typedef UIInteractable UClassType; \
	typedef IIInteractable ThisClass; \
	static bool Execute_CanInteract(const UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption1(UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption2(UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption3(UObject* O, AActor* Interactor); \
	static void Execute_GetNPCProperties(UObject* O, float& Property1, int32& Property2, bool& Property3); \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IIInteractable() {} \
public: \
	typedef UIInteractable UClassType; \
	typedef IIInteractable ThisClass; \
	static bool Execute_CanInteract(const UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption1(UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption2(UObject* O, AActor* Interactor); \
	static void Execute_ExecuteOption3(UObject* O, AActor* Interactor); \
	static void Execute_GetNPCProperties(UObject* O, float& Property1, int32& Property2, bool& Property3); \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_7_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_CALLBACK_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_CALLBACK_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class UIInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_IInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
