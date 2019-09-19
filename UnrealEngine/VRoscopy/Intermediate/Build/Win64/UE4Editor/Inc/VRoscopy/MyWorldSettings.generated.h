// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VROSCOPY_MyWorldSettings_generated_h
#error "MyWorldSettings.generated.h already included, missing '#pragma once' in MyWorldSettings.h"
#endif
#define VROSCOPY_MyWorldSettings_generated_h

#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_RPC_WRAPPERS
#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyWorldSettings(); \
	friend struct Z_Construct_UClass_AMyWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AMyWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AMyWorldSettings)


#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyWorldSettings(); \
	friend struct Z_Construct_UClass_AMyWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AMyWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AMyWorldSettings)


#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWorldSettings(AMyWorldSettings&&); \
	NO_API AMyWorldSettings(const AMyWorldSettings&); \
public:


#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWorldSettings(AMyWorldSettings&&); \
	NO_API AMyWorldSettings(const AMyWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyWorldSettings)


#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_12_PROLOG
#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_INCLASS \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_MyWorldSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class AMyWorldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_MyWorldSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
