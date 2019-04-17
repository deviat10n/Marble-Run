// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BALL_Spring_generated_h
#error "Spring.generated.h already included, missing '#pragma once' in Spring.h"
#endif
#define BALL_Spring_generated_h

#define Ball_Source_Ball_Spring_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Ball_Source_Ball_Spring_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Ball_Source_Ball_Spring_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpring(); \
	friend BALL_API class UClass* Z_Construct_UClass_ASpring(); \
public: \
	DECLARE_CLASS(ASpring, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ASpring) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Spring_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpring(); \
	friend BALL_API class UClass* Z_Construct_UClass_ASpring(); \
public: \
	DECLARE_CLASS(ASpring, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Ball"), NO_API) \
	DECLARE_SERIALIZER(ASpring) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ball_Source_Ball_Spring_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpring(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpring) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpring); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpring(ASpring&&); \
	NO_API ASpring(const ASpring&); \
public:


#define Ball_Source_Ball_Spring_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpring(ASpring&&); \
	NO_API ASpring(const ASpring&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpring); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpring)


#define Ball_Source_Ball_Spring_h_12_PRIVATE_PROPERTY_OFFSET
#define Ball_Source_Ball_Spring_h_9_PROLOG
#define Ball_Source_Ball_Spring_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Spring_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Spring_h_12_RPC_WRAPPERS \
	Ball_Source_Ball_Spring_h_12_INCLASS \
	Ball_Source_Ball_Spring_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ball_Source_Ball_Spring_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ball_Source_Ball_Spring_h_12_PRIVATE_PROPERTY_OFFSET \
	Ball_Source_Ball_Spring_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ball_Source_Ball_Spring_h_12_INCLASS_NO_PURE_DECLS \
	Ball_Source_Ball_Spring_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ball_Source_Ball_Spring_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
