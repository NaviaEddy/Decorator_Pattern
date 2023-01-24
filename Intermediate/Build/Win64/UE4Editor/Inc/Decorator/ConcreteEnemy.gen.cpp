// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decorator/ConcreteEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcreteEnemy() {}
// Cross Module References
	DECORATOR_API UClass* Z_Construct_UClass_AConcreteEnemy_NoRegister();
	DECORATOR_API UClass* Z_Construct_UClass_AConcreteEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Decorator();
	DECORATOR_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
// End Cross Module References
	void AConcreteEnemy::StaticRegisterNativesAConcreteEnemy()
	{
	}
	UClass* Z_Construct_UClass_AConcreteEnemy_NoRegister()
	{
		return AConcreteEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AConcreteEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcreteEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Decorator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcreteEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcreteEnemy.h" },
		{ "ModuleRelativePath", "ConcreteEnemy.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcreteEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(AConcreteEnemy, IEnemy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcreteEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcreteEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcreteEnemy_Statics::ClassParams = {
		&AConcreteEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcreteEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcreteEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcreteEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcreteEnemy, 2944213897);
	template<> DECORATOR_API UClass* StaticClass<AConcreteEnemy>()
	{
		return AConcreteEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcreteEnemy(Z_Construct_UClass_AConcreteEnemy, &AConcreteEnemy::StaticClass, TEXT("/Script/Decorator"), TEXT("AConcreteEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcreteEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
