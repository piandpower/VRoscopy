// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VROSCOPY_SlateHUD_generated_h
#error "SlateHUD.generated.h already included, missing '#pragma once' in SlateHUD.h"
#endif
#define VROSCOPY_SlateHUD_generated_h

#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_RPC_WRAPPERS
#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlateHUD(); \
	friend struct Z_Construct_UClass_ASlateHUD_Statics; \
public: \
	DECLARE_CLASS(ASlateHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(ASlateHUD)


#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASlateHUD(); \
	friend struct Z_Construct_UClass_ASlateHUD_Statics; \
public: \
	DECLARE_CLASS(ASlateHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(ASlateHUD)


#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlateHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlateHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlateHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlateHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlateHUD(ASlateHUD&&); \
	NO_API ASlateHUD(const ASlateHUD&); \
public:


#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlateHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlateHUD(ASlateHUD&&); \
	NO_API ASlateHUD(const ASlateHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlateHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlateHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlateHUD)


#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_SlateHUD_h_11_PROLOG
#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_INCLASS \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_SlateHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_SlateHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class ASlateHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_SlateHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
