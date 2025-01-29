// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniqueNPCProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
#ifdef UNIQUENPCPROJECT_UniqueNPCProjectCharacter_generated_h
#error "UniqueNPCProjectCharacter.generated.h already included, missing '#pragma once' in UniqueNPCProjectCharacter.h"
#endif
#define UNIQUENPCPROJECT_UniqueNPCProjectCharacter_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_12_DELEGATE \
static inline void FOnInteractionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionUpdated) \
{ \
	OnInteractionUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_13_DELEGATE \
struct _Script_UniqueNPCProject_eventOnHotbarUpdated_Parms \
{ \
	int32 SlotIndex; \
}; \
static inline void FOnHotbarUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnHotbarUpdated, int32 SlotIndex) \
{ \
	_Script_UniqueNPCProject_eventOnHotbarUpdated_Parms Parms; \
	Parms.SlotIndex=SlotIndex; \
	OnHotbarUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActiveHotbarSlot); \
	DECLARE_FUNCTION(execUseHotbarItem); \
	DECLARE_FUNCTION(execAddItemToHotbar); \
	DECLARE_FUNCTION(execCheckForInteractables); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActiveHotbarSlot); \
	DECLARE_FUNCTION(execUseHotbarItem); \
	DECLARE_FUNCTION(execAddItemToHotbar); \
	DECLARE_FUNCTION(execCheckForInteractables); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUniqueNPCProjectCharacter(); \
	friend struct Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AUniqueNPCProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(AUniqueNPCProjectCharacter)


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAUniqueNPCProjectCharacter(); \
	friend struct Z_Construct_UClass_AUniqueNPCProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AUniqueNPCProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(AUniqueNPCProjectCharacter)


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUniqueNPCProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUniqueNPCProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniqueNPCProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniqueNPCProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniqueNPCProjectCharacter(AUniqueNPCProjectCharacter&&); \
	NO_API AUniqueNPCProjectCharacter(const AUniqueNPCProjectCharacter&); \
public: \
	NO_API virtual ~AUniqueNPCProjectCharacter();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniqueNPCProjectCharacter(AUniqueNPCProjectCharacter&&); \
	NO_API AUniqueNPCProjectCharacter(const AUniqueNPCProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniqueNPCProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniqueNPCProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUniqueNPCProjectCharacter) \
	NO_API virtual ~AUniqueNPCProjectCharacter();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_22_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_INCLASS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class AUniqueNPCProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
