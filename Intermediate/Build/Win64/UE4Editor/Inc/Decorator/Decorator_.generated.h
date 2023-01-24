// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECORATOR_Decorator__generated_h
#error "Decorator_.generated.h already included, missing '#pragma once' in Decorator_.h"
#endif
#define DECORATOR_Decorator__generated_h

#define Decorator_Source_Decorator_Decorator__h_12_SPARSE_DATA
#define Decorator_Source_Decorator_Decorator__h_12_RPC_WRAPPERS
#define Decorator_Source_Decorator_Decorator__h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Decorator_Source_Decorator_Decorator__h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecorator_(); \
	friend struct Z_Construct_UClass_ADecorator__Statics; \
public: \
	DECLARE_CLASS(ADecorator_, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Decorator"), NO_API) \
	DECLARE_SERIALIZER(ADecorator_) \
	virtual UObject* _getUObject() const override { return const_cast<ADecorator_*>(this); }


#define Decorator_Source_Decorator_Decorator__h_12_INCLASS \
private: \
	static void StaticRegisterNativesADecorator_(); \
	friend struct Z_Construct_UClass_ADecorator__Statics; \
public: \
	DECLARE_CLASS(ADecorator_, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Decorator"), NO_API) \
	DECLARE_SERIALIZER(ADecorator_) \
	virtual UObject* _getUObject() const override { return const_cast<ADecorator_*>(this); }


#define Decorator_Source_Decorator_Decorator__h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecorator_(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecorator_) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecorator_); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecorator_); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecorator_(ADecorator_&&); \
	NO_API ADecorator_(const ADecorator_&); \
public:


#define Decorator_Source_Decorator_Decorator__h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecorator_(ADecorator_&&); \
	NO_API ADecorator_(const ADecorator_&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecorator_); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecorator_); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADecorator_)


#define Decorator_Source_Decorator_Decorator__h_12_PRIVATE_PROPERTY_OFFSET
#define Decorator_Source_Decorator_Decorator__h_9_PROLOG
#define Decorator_Source_Decorator_Decorator__h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decorator_Source_Decorator_Decorator__h_12_PRIVATE_PROPERTY_OFFSET \
	Decorator_Source_Decorator_Decorator__h_12_SPARSE_DATA \
	Decorator_Source_Decorator_Decorator__h_12_RPC_WRAPPERS \
	Decorator_Source_Decorator_Decorator__h_12_INCLASS \
	Decorator_Source_Decorator_Decorator__h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decorator_Source_Decorator_Decorator__h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decorator_Source_Decorator_Decorator__h_12_PRIVATE_PROPERTY_OFFSET \
	Decorator_Source_Decorator_Decorator__h_12_SPARSE_DATA \
	Decorator_Source_Decorator_Decorator__h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Decorator_Source_Decorator_Decorator__h_12_INCLASS_NO_PURE_DECLS \
	Decorator_Source_Decorator_Decorator__h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECORATOR_API UClass* StaticClass<class ADecorator_>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decorator_Source_Decorator_Decorator__h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
