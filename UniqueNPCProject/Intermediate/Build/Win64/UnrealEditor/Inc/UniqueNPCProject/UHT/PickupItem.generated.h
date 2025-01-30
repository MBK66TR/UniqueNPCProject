// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickupItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
#ifdef UNIQUENPCPROJECT_PickupItem_generated_h
#error "PickupItem.generated.h already included, missing '#pragma once' in PickupItem.h"
#endif
#define UNIQUENPCPROJECT_PickupItem_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execSetItemData);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execSetItemData);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(APickupItem) \
	virtual UObject* _getUObject() const override { return const_cast<APickupItem*>(this); }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(APickupItem) \
	virtual UObject* _getUObject() const override { return const_cast<APickupItem*>(this); }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public: \
	NO_API virtual ~APickupItem();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupItem) \
	NO_API virtual ~APickupItem();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_11_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_INCLASS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class APickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
