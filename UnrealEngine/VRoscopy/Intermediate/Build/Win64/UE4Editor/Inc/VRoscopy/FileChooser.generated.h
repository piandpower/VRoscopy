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

#define VRoscopy_Source_VRoscopy_FileChooser_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintData(Z_Param_File); \
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
		P_THIS->OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintData(Z_Param_File); \
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
		P_THIS->OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames); \
		P_NATIVE_END; \
	}


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFileChooser(); \
	friend struct Z_Construct_UClass_AFileChooser_Statics; \
public: \
	DECLARE_CLASS(AFileChooser, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFileChooser(); \
	friend struct Z_Construct_UClass_AFileChooser_Statics; \
public: \
	DECLARE_CLASS(AFileChooser, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRoscopy"), NO_API) \
	DECLARE_SERIALIZER(AFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFileChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFileChooser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFileChooser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFileChooser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFileChooser(AFileChooser&&); \
	NO_API AFileChooser(const AFileChooser&); \
public:


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFileChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFileChooser(AFileChooser&&); \
	NO_API AFileChooser(const AFileChooser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFileChooser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFileChooser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFileChooser)


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_PRIVATE_PROPERTY_OFFSET
#define VRoscopy_Source_VRoscopy_FileChooser_h_12_PROLOG
#define VRoscopy_Source_VRoscopy_FileChooser_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_RPC_WRAPPERS \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_INCLASS \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRoscopy_Source_VRoscopy_FileChooser_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_PRIVATE_PROPERTY_OFFSET \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_INCLASS_NO_PURE_DECLS \
	VRoscopy_Source_VRoscopy_FileChooser_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VROSCOPY_API UClass* StaticClass<class AFileChooser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRoscopy_Source_VRoscopy_FileChooser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
