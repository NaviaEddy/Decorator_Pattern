// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decorator/MeleeEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeEnemy() {}
// Cross Module References
	DECORATOR_API UClass* Z_Construct_UClass_AMeleeEnemy_NoRegister();
	DECORATOR_API UClass* Z_Construct_UClass_AMeleeEnemy();
	DECORATOR_API UClass* Z_Construct_UClass_ADecorator_();
	UPackage* Z_Construct_UPackage__Script_Decorator();
// End Cross Module References
	void AMeleeEnemy::StaticRegisterNativesAMeleeEnemy()
	{
	}
	UClass* Z_Construct_UClass_AMeleeEnemy_NoRegister()
	{
		return AMeleeEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorator_,
		(UObject* (*)())Z_Construct_UPackage__Script_Decorator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeleeEnemy.h" },
		{ "ModuleRelativePath", "MeleeEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeleeEnemy_Statics::ClassParams = {
		&AMeleeEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeleeEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeleeEnemy, 1769223875);
	template<> DECORATOR_API UClass* StaticClass<AMeleeEnemy>()
	{
		return AMeleeEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeleeEnemy(Z_Construct_UClass_AMeleeEnemy, &AMeleeEnemy::StaticClass, TEXT("/Script/Decorator"), TEXT("AMeleeEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
