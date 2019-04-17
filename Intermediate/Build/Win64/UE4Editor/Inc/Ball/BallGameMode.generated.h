// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALL_BallGameMode_generated_h
#error "BallGameMode.generated.h already included, missing '#pragma once' in BallGameMode.h"
#endif
#define BALL_BallGameMode_generated_h

#define Ball_Source_Ball_BallGameMode_h_12_RPC_WRAPPERS
#define Ball_Source_Ball_BallGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ball_Source_Ball_BallGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallGameMode(); \
	friend BALL_API class UClass* Z_Construct_UClass_ABallGameMode(); \
public: \
	DECLARE_CLASS(ABallGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Ball"), BALL_API) \
	DECLARE_SERIALIZER(ABallGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_BallGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABallGameMode(); \
	friend BALL_API class UClass* Z_Construct_UClass_ABallGameMode(); \
public: \
	DECLARE_CLASS(ABallGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Ball"), BALL_API) \
	DECLARE_SERIALIZER(ABallGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_BallGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BALL_API ABallGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BALL_API, ABallGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BALL_API ABallGameMode(ABallGameMode&&); \
	BALL_API ABallGameMode(const ABallGameMode&); \
public:


#define Ball_Source_Ball_BallGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BALL_API ABallGameMode(ABallGameMode&&); \
	BALL_API ABallGameMode(const ABallGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BALL_API, ABallGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallGameMode)


#define Ball_Source_Ball_BallGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Ball_Source_Ball_BallGameMode_h_9_PROLOG
#define Ball_Source_Ball_BallGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_BallGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_BallGameMode_h_12_RPC_WRAPPERS \
	Ball_Source_Ball_BallGameMode_h_12_INCLASS \
	Ball_Source_Ball_BallGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ball_Source_Ball_BallGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_BallGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_BallGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ball_Source_Ball_BallGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Ball_Source_Ball_BallGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ball_Source_Ball_BallGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
