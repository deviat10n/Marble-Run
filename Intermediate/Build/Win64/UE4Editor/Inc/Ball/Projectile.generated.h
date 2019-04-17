// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALL_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define BALL_Projectile_generated_h

#define Ball_Source_Ball_Projectile_h_12_RPC_WRAPPERS
#define Ball_Source_Ball_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ball_Source_Ball_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend BALL_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend BALL_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define Ball_Source_Ball_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define Ball_Source_Ball_Projectile_h_12_PRIVATE_PROPERTY_OFFSET
#define Ball_Source_Ball_Projectile_h_9_PROLOG
#define Ball_Source_Ball_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Projectile_h_12_RPC_WRAPPERS \
	Ball_Source_Ball_Projectile_h_12_INCLASS \
	Ball_Source_Ball_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ball_Source_Ball_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ball_Source_Ball_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Ball_Source_Ball_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ball_Source_Ball_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
