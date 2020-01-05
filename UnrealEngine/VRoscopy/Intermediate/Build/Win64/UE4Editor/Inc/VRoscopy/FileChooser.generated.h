// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VROSCOPY_FileChooser_generated_h
#error "FileChooser.generated.h already included, missing '#pragma once' in FileChooser.h"
#endif
#define VROSCOPY_FileChooser_generated_h

#define VRoscopy_Source_VRoscopy_FileChooser_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::PrintData(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFolderDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::OpenFolderDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_Out_OutFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::PrintData(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFolderDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::OpenFolderDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_Out_OutFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFileChooser::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileChooser(); \
	friend struct Z_Construct_UClass_UFileChooser_Statics; \
public: \
	DECLARE_CLASS(UFileChooser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(UFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFileChooser(); \
	friend struct Z_Construct_UClass_UFileChooser_Statics; \
public: \
	DECLARE_CLASS(UFileChooser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(UFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileChooser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileChooser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileChooser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileChooser(UFileChooser&&); \
	NO_API UFileChooser(const UFileChooser&); \
public:


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileChooser(UFileChooser&&); \
	NO_API UFileChooser(const UFileChooser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileChooser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileChooser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_FileChooser_h_13_PROLOG
#define VRoscopy_Source_VRoscopy_FileChooser_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_INCLASS \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_FileChooser_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FileChooser_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class UFileChooser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_FileChooser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
