// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VROSCOPY_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define VROSCOPY_MyGameModeBase_generated_h

#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_RPC_WRAPPERS
#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase)


#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_15_PROLOG
#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_INCLASS \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_MyGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
