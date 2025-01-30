// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseNpc.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseNpc;
#ifdef UNIQUENPCPROJECT_BaseNpc_generated_h
#error "BaseNpc.generated.h already included, missing '#pragma once' in BaseNpc.h"
#endif
#define UNIQUENPCPROJECT_BaseNpc_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseInteractionWidget); \
	DECLARE_FUNCTION(execGetNPCReference); \
	DECLARE_FUNCTION(execRandomizeProperties); \
	DECLARE_FUNCTION(execReturnToSpawn); \
	DECLARE_FUNCTION(execMoveToTarget);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseInteractionWidget); \
	DECLARE_FUNCTION(execGetNPCReference); \
	DECLARE_FUNCTION(execRandomizeProperties); \
	DECLARE_FUNCTION(execReturnToSpawn); \
	DECLARE_FUNCTION(execMoveToTarget);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseNpc(); \
	friend struct Z_Construct_UClass_ABaseNpc_Statics; \
public: \
	DECLARE_CLASS(ABaseNpc, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpc) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseNpc*>(this); }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseNpc(); \
	friend struct Z_Construct_UClass_ABaseNpc_Statics; \
public: \
	DECLARE_CLASS(ABaseNpc, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpc) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseNpc*>(this); }


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseNpc(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpc(ABaseNpc&&); \
	NO_API ABaseNpc(const ABaseNpc&); \
public: \
	NO_API virtual ~ABaseNpc();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpc(ABaseNpc&&); \
	NO_API ABaseNpc(const ABaseNpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseNpc) \
	NO_API virtual ~ABaseNpc();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_10_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_INCLASS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_INCLASS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class ABaseNpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_BaseNpc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
