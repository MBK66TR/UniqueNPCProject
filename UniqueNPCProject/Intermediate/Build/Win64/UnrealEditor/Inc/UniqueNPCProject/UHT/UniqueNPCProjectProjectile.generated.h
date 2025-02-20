// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniqueNPCProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNIQUENPCPROJECT_UniqueNPCProjectProjectile_generated_h
#error "UniqueNPCProjectProjectile.generated.h already included, missing '#pragma once' in UniqueNPCProjectProjectile.h"
#endif
#define UNIQUENPCPROJECT_UniqueNPCProjectProjectile_generated_h

#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_SPARSE_DATA
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_ACCESSORS
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUniqueNPCProjectProjectile(); \
	friend struct Z_Construct_UClass_AUniqueNPCProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AUniqueNPCProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(AUniqueNPCProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUniqueNPCProjectProjectile(); \
	friend struct Z_Construct_UClass_AUniqueNPCProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AUniqueNPCProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniqueNPCProject"), NO_API) \
	DECLARE_SERIALIZER(AUniqueNPCProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUniqueNPCProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUniqueNPCProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniqueNPCProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniqueNPCProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniqueNPCProjectProjectile(AUniqueNPCProjectProjectile&&); \
	NO_API AUniqueNPCProjectProjectile(const AUniqueNPCProjectProjectile&); \
public: \
	NO_API virtual ~AUniqueNPCProjectProjectile();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniqueNPCProjectProjectile(AUniqueNPCProjectProjectile&&); \
	NO_API AUniqueNPCProjectProjectile(const AUniqueNPCProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniqueNPCProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniqueNPCProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUniqueNPCProjectProjectile) \
	NO_API virtual ~AUniqueNPCProjectProjectile();


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_12_PROLOG
#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_RPC_WRAPPERS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_INCLASS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_SPARSE_DATA \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_ACCESSORS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIQUENPCPROJECT_API UClass* StaticClass<class AUniqueNPCProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_UniqueNPCProject_UniqueNPCProject_Source_UniqueNPCProject_UniqueNPCProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
