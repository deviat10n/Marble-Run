// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALL_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define BALL_Turret_generated_h

#define Ball_Source_Ball_Turret_h_12_RPC_WRAPPERS
#define Ball_Source_Ball_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ball_Source_Ball_Turret_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend BALL_API class UClass* Z_Construct_UClass_ATurret(); \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ATurret) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Turret_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend BALL_API class UClass* Z_Construct_UClass_ATurret(); \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ATurret) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Turret_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define Ball_Source_Ball_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define Ball_Source_Ball_Turret_h_12_PRIVATE_PROPERTY_OFFSET
#define Ball_Source_Ball_Turret_h_9_PROLOG
#define Ball_Source_Ball_Turret_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Turret_h_12_RPC_WRAPPERS \
	Ball_Source_Ball_Turret_h_12_INCLASS \
	Ball_Source_Ball_Turret_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ball_Source_Ball_Turret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ball_Source_Ball_Turret_h_12_INCLASS_NO_PURE_DECLS \
	Ball_Source_Ball_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ball_Source_Ball_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
