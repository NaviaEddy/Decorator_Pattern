// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decorator/Decorator_.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecorator_() {}
// Cross Module References
	DECORATOR_API UClass* Z_Construct_UClass_ADecorator__NoRegister();
	DECORATOR_API UClass* Z_Construct_UClass_ADecorator_();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Decorator();
	DECORATOR_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
// End Cross Module References
	void ADecorator_::StaticRegisterNativesADecorator_()
	{
	}
	UClass* Z_Construct_UClass_ADecorator__NoRegister()
	{
		return ADecorator_::StaticClass();
	}
	struct Z_Construct_UClass_ADecorator__Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecorator__Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Decorator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecorator__Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Decorator_.h" },
		{ "ModuleRelativePath", "Decorator_.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecorator__Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(ADecorator_, IEnemy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecorator__Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecorator_>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecorator__Statics::ClassParams = {
		&ADecorator_::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecorator__Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecorator__Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecorator_()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecorator__Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecorator_, 3536760844);
	template<> DECORATOR_API UClass* StaticClass<ADecorator_>()
	{
		return ADecorator_::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecorator_(Z_Construct_UClass_ADecorator_, &ADecorator_::StaticClass, TEXT("/Script/Decorator"), TEXT("ADecorator_"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecorator_);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
