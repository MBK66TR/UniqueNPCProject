// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseNpc;
#ifdef UNIQUENPCPROJECT_CustomerManager_generated_h
#error "CustomerManager.generated.h already included, missing '#pragma once' in CustomerManager.h"
#endif
#define UNIQUENPCPROJECT_CustomerManager_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReorganizeQueue); \
	DECLARE_FUNCTION(execRemoveCustomerFromQueue); \
	DECLARE_FUNCTION(execFindEmptyQueuePosition); \
	DECLARE_FUNCTION(execSpawnNewCustomer);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReorganizeQueue); \
	DECLARE_FUNCTION(execRemoveCustomerFromQueue); \
	DECLARE_FUNCTION(execFindEmptyQueuePosition); \
	DECLARE_FUNCTION(execSpawnNewCustomer);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomerManager(); \
	friend struct Z_Construct_UClass_ACustomerManager_Statics; \
public: \
	DECLARE_CLASS(ACustomerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(ACustomerManager)


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACustomerManager(); \
	friend struct Z_Construct_UClass_ACustomerManager_Statics; \
public: \
	DECLARE_CLASS(ACustomerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(ACustomerManager)


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomerManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomerManager(ACustomerManager&&); \
	NO_API ACustomerManager(const ACustomerManager&); \
public: \
	NO_API virtual ~ACustomerManager();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomerManager(ACustomerManager&&); \
	NO_API ACustomerManager(const ACustomerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomerManager) \
	NO_API virtual ~ACustomerManager();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_10_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_INCLASS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class ACustomerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_CustomerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
