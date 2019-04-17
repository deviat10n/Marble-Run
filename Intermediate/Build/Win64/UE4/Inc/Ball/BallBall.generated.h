// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALL_BallBall_generated_h
#error "BallBall.generated.h already included, missing '#pragma once' in BallBall.h"
#endif
#define BALL_BallBall_generated_h

#define Ball_Source_Ball_BallBall_h_12_RPC_WRAPPERS
#define Ball_Source_Ball_BallBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ball_Source_Ball_BallBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallBall(); \
	friend BALL_API class UClass* Z_Construct_UClass_ABallBall(); \
public: \
	DECLARE_CLASS(ABallBall, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ABallBall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_BallBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABallBall(); \
	friend BALL_API class UClass* Z_Construct_UClass_ABallBall(); \
public: \
	DECLARE_CLASS(ABallBall, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ABallBall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_BallBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBall(ABallBall&&); \
	NO_API ABallBall(const ABallBall&); \
public:


#define Ball_Source_Ball_BallBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBall(ABallBall&&); \
	NO_API ABallBall(const ABallBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallBall)


#define Ball_Source_Ball_BallBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(ABallBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABallBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABallBall, Camera); }


#define Ball_Source_Ball_BallBall_h_9_PROLOG
#define Ball_Source_Ball_BallBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_BallBall_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_BallBall_h_12_RPC_WRAPPERS \
	Ball_Source_Ball_BallBall_h_12_INCLASS \
	Ball_Source_Ball_BallBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ball_Source_Ball_BallBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_BallBall_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_BallBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ball_Source_Ball_BallBall_h_12_INCLASS_NO_PURE_DECLS \
	Ball_Source_Ball_BallBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ball_Source_Ball_BallBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
