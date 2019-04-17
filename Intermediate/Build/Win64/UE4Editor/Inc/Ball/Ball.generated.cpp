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
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();

	BALL_API class UClass* Z_Construct_UClass_ABallBall_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ABallBall();
	BALL_API class UClass* Z_Construct_UClass_ABallGameMode_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ABallGameMode();
	BALL_API class UClass* Z_Construct_UClass_ALava_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ALava();
	BALL_API class UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_AMovingPlatform();
	BALL_API class UClass* Z_Construct_UClass_APlatforms_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_APlatforms();
	BALL_API class UClass* Z_Construct_UClass_AProejctile_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_AProejctile();
	BALL_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_AProjectile();
	BALL_API class UFunction* Z_Construct_UFunction_ASpring_OnHit();
	BALL_API class UClass* Z_Construct_UClass_ASpring_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ASpring();
	BALL_API class UClass* Z_Construct_UClass_ATurret_NoRegister();
	BALL_API class UClass* Z_Construct_UClass_ATurret();
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
	void ALava::StaticRegisterNativesALava()
	{
	}
	UClass* Z_Construct_UClass_ALava_NoRegister()
	{
		return ALava::StaticClass();
	}
	UClass* Z_Construct_UClass_ALava()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = ALava::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ALava> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Lava.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Lava.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALava, 108605809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALava(Z_Construct_UClass_ALava, &ALava::StaticClass, TEXT("/Script/Ball"), TEXT("ALava"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALava);
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = AMovingPlatform::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMovingPlatform> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovingPlatform.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MovingPlatform.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingPlatform, 3368928775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatform(Z_Construct_UClass_AMovingPlatform, &AMovingPlatform::StaticClass, TEXT("/Script/Ball"), TEXT("AMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
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
	void AProejctile::StaticRegisterNativesAProejctile()
	{
	}
	UClass* Z_Construct_UClass_AProejctile_NoRegister()
	{
		return AProejctile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProejctile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = AProejctile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProejctile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Proejctile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Proejctile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProejctile, 2041646315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProejctile(Z_Construct_UClass_AProejctile, &AProejctile::StaticClass, TEXT("/Script/Ball"), TEXT("AProejctile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProejctile);
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_movementDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("movementDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(movementDirection, AProjectile), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Projectile.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ModuleRelativePath"), TEXT("Projectile.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ToolTip"), TEXT("Direction vector"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 759572542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/Ball"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	void ASpring::StaticRegisterNativesASpring()
	{
		UClass* Class = ASpring::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&ASpring::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ASpring_OnHit()
	{
		struct Spring_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ASpring();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(Spring_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Spring_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Spring_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Spring_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Spring_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, Spring_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Spring.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to handle the spring being hit"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpring_NoRegister()
	{
		return ASpring::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpring()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = ASpring::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpring_OnHit());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASpring_OnHit(), "OnHit"); // 104147225
				static TCppClassTypeInfo<TCppClassTypeTraits<ASpring> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Spring.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Spring.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpring, 2302765591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpring(Z_Construct_UClass_ASpring, &ASpring::StaticClass, TEXT("/Script/Ball"), TEXT("ASpring"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpring);
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	UClass* Z_Construct_UClass_ATurret()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Ball();
			OuterClass = ATurret::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATurret> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Turret.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Turret.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurret, 3259926543);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurret(Z_Construct_UClass_ATurret, &ATurret::StaticClass, TEXT("/Script/Ball"), TEXT("ATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	UPackage* Z_Construct_UPackage__Script_Ball()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Ball")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF816AA0E;
			Guid.B = 0xE1FD4031;
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
