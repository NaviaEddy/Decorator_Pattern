// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECORATOR_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define DECORATOR_Enemy_generated_h

#define Decorator_Source_Decorator_Enemy_h_13_SPARSE_DATA
#define Decorator_Source_Decorator_Enemy_h_13_RPC_WRAPPERS
#define Decorator_Source_Decorator_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Decorator_Source_Decorator_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATOR_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATOR_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATOR_API UEnemy(UEnemy&&); \
	DECORATOR_API UEnemy(const UEnemy&); \
public:


#define Decorator_Source_Decorator_Enemy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATOR_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATOR_API UEnemy(UEnemy&&); \
	DECORATOR_API UEnemy(const UEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATOR_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy)


#define Decorator_Source_Decorator_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemy(); \
	friend struct Z_Construct_UClass_UEnemy_Statics; \
public: \
	DECLARE_CLASS(UEnemy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Decorator"), DECORATOR_API) \
	DECLARE_SERIALIZER(UEnemy)


#define Decorator_Source_Decorator_Enemy_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Decorator_Source_Decorator_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
	Decorator_Source_Decorator_Enemy_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decorator_Source_Decorator_Enemy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Decorator_Source_Decorator_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
	Decorator_Source_Decorator_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decorator_Source_Decorator_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Decorator_Source_Decorator_Enemy_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Decorator_Source_Decorator_Enemy_h_10_PROLOG
#define Decorator_Source_Decorator_Enemy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decorator_Source_Decorator_Enemy_h_13_SPARSE_DATA \
	Decorator_Source_Decorator_Enemy_h_13_RPC_WRAPPERS \
	Decorator_Source_Decorator_Enemy_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decorator_Source_Decorator_Enemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decorator_Source_Decorator_Enemy_h_13_SPARSE_DATA \
	Decorator_Source_Decorator_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Decorator_Source_Decorator_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECORATOR_API UClass* StaticClass<class UEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decorator_Source_Decorator_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
