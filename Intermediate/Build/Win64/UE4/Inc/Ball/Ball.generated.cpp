// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Ball.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Ball() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	BALL_API class UClass* Z_Construct_UClass_ABallBall_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ABallBall();
	BALL_API class UClass* Z_Construct_UClass_ABallGameMode_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ABallGameMode();
	BALL_API class UClass* Z_Construct_UClass_APlatforms_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_APlatforms();
	BALL_API class UPackage* Z_Construct_UPackage__Script_Ball();
	void ABallBall::StaticRegisterNativesABallBall()
	{
	}
	UClass* Z_Construct_UClass_ABallBall_NoRegister()
	{
		return ABallBall::StaticClass();
	}
	UClass* Z_Construct_UClass_ABallBall()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = ABallBall::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_RollTorque = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RollTorque"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RollTorque, ABallBall), 0x0010000000000001);
				UProperty* NewProp_JumpImpulse = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpImpulse, ABallBall), 0x0010000000000001);
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, ABallBall), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_SpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArm, ABallBall), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_Ball = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Ball"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Ball, ABallBall), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABallBall> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BallBall.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_RollTorque, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_RollTorque, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_RollTorque, TEXT("ToolTip"), TEXT("Torque to apply when trying to roll ball"));
				MetaData->SetValue(NewProp_JumpImpulse, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_JumpImpulse, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_JumpImpulse, TEXT("ToolTip"), TEXT("Vertical impulse to apply when pressing jump"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("ToolTip"), TEXT("Camera to view the ball"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ToolTip"), TEXT("Spring arm for positioning the camera above the ball"));
				MetaData->SetValue(NewProp_Ball, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Ball, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_Ball, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Ball, TEXT("ModuleRelativePath"), TEXT("BallBall.h"));
				MetaData->SetValue(NewProp_Ball, TEXT("ToolTip"), TEXT("StaticMesh used for the ball"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallBall, 3607339781);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallBall(Z_Construct_UClass_ABallBall, &ABallBall::StaticClass, TEXT("/Script/Ball"), TEXT("ABallBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallBall);
	void ABallGameMode::StaticRegisterNativesABallGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABallGameMode_NoRegister()
	{
		return ABallGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABallGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = ABallGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABallGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BallGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BallGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallGameMode, 1956831467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallGameMode(Z_Construct_UClass_ABallGameMode, &ABallGameMode::StaticClass, TEXT("/Script/Ball"), TEXT("ABallGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallGameMode);
	void APlatforms::StaticRegisterNativesAPlatforms()
	{
	}
	UClass* Z_Construct_UClass_APlatforms_NoRegister()
	{
		return APlatforms::StaticClass();
	}
	UClass* Z_Construct_UClass_APlatforms()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = APlatforms::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<APlatforms> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Platforms.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Platforms.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatforms, 1896419738);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatforms(Z_Construct_UClass_APlatforms, &APlatforms::StaticClass, TEXT("/Script/Ball"), TEXT("APlatforms"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatforms);
	UPackage* Z_Construct_UPackage__Script_Ball()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Ball")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x34F6169A;
			Guid.B = 0x2BD02DBD;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
