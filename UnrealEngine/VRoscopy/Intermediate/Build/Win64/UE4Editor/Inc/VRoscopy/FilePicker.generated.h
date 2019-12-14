// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VROSCOPY_FilePicker_generated_h
#error "FilePicker.generated.h already included, missing '#pragma once' in FilePicker.h"
#endif
#define VROSCOPY_FilePicker_generated_h

#define VRoscopy_Source_VRoscopy_FilePicker_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilePicker::PrintData(Z_Param_File); \
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
		UFilePicker::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilePicker::PrintData(Z_Param_File); \
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
		UFilePicker::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilePicker(); \
	friend struct Z_Construct_UClass_UFilePicker_Statics; \
public: \
	DECLARE_CLASS(UFilePicker, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(UFilePicker)


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFilePicker(); \
	friend struct Z_Construct_UClass_UFilePicker_Statics; \
public: \
	DECLARE_CLASS(UFilePicker, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(UFilePicker)


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilePicker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilePicker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilePicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilePicker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilePicker(UFilePicker&&); \
	NO_API UFilePicker(const UFilePicker&); \
public:


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilePicker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilePicker(UFilePicker&&); \
	NO_API UFilePicker(const UFilePicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilePicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilePicker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilePicker)


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_FilePicker_h_11_PROLOG
#define VRoscopy_Source_VRoscopy_FilePicker_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_INCLASS \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_FilePicker_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FilePicker_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class UFilePicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_FilePicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
