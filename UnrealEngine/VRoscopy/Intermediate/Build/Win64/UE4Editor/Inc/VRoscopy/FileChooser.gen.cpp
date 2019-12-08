// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRoscopy/FileChooser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileChooser() {}
// Cross Module References
	VROSCOPY_API UClass* Z_Construct_UClass_AFileChooser_NoRegister();
	VROSCOPY_API UClass* Z_Construct_UClass_AFileChooser();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_VRoscopy();
	VROSCOPY_API UFunction* Z_Construct_UFunction_AFileChooser_OpenFileDialog();
	VROSCOPY_API UFunction* Z_Construct_UFunction_AFileChooser_PrintData();
// End Cross Module References
	void AFileChooser::StaticRegisterNativesAFileChooser()
	{
		UClass* Class = AFileChooser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenFileDialog", &AFileChooser::execOpenFileDialog },
			{ "PrintData", &AFileChooser::execPrintData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics
	{
		struct FileChooser_eventOpenFileDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString FileTypes;
			TArray<FString> OutFileNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFileNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFileNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames = { "OutFileNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, OutFileNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames_Inner = { "OutFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_FileTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_OutFileNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::NewProp_DialogTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePicker" },
		{ "Comment", "/*\n\x09 * Opens a file dialog for the specified data. Leave FileTypes empty to be able to select any files.\n\x09 * Filetypes must be in the format of: <File type Description>|*.<actual extension>\n\x09 * You can combine multiple extensions by placing \";\" between them\n\x09 * For example: Text Files|*.txt|Excel files|*.csv|Image Files|*.png;*.jpg;*.bmp will display 3 lines for 3 different type of files.\n\x09 */" },
		{ "ModuleRelativePath", "FileChooser.h" },
		{ "ToolTip", "* Opens a file dialog for the specified data. Leave FileTypes empty to be able to select any files.\n* Filetypes must be in the format of: <File type Description>|*.<actual extension>\n* You can combine multiple extensions by placing \";\" between them\n* For example: Text Files|*.txt|Excel files|*.csv|Image Files|*.png;*.jpg;*.bmp will display 3 lines for 3 different type of files." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFileChooser, nullptr, "OpenFileDialog", nullptr, nullptr, sizeof(FileChooser_eventOpenFileDialog_Parms), Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFileChooser_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFileChooser_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFileChooser_PrintData_Statics
	{
		struct FileChooser_eventPrintData_Parms
		{
			FString File;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_PrintData_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileChooser_PrintData_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileChooser_eventPrintData_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_PrintData_Statics::NewProp_File_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_PrintData_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFileChooser_PrintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileChooser_PrintData_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFileChooser_PrintData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePicker" },
		{ "Comment", "/*Prints the data of the given file*/" },
		{ "ModuleRelativePath", "FileChooser.h" },
		{ "ToolTip", "Prints the data of the given file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFileChooser_PrintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFileChooser, nullptr, "PrintData", nullptr, nullptr, sizeof(FileChooser_eventPrintData_Parms), Z_Construct_UFunction_AFileChooser_PrintData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_PrintData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFileChooser_PrintData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFileChooser_PrintData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFileChooser_PrintData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFileChooser_PrintData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFileChooser_NoRegister()
	{
		return AFileChooser::StaticClass();
	}
	struct Z_Construct_UClass_AFileChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFileChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VRoscopy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFileChooser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFileChooser_OpenFileDialog, "OpenFileDialog" }, // 1072423828
		{ &Z_Construct_UFunction_AFileChooser_PrintData, "PrintData" }, // 2818822211
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFileChooser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "FileChooser.h" },
		{ "ModuleRelativePath", "FileChooser.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFileChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFileChooser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFileChooser_Statics::ClassParams = {
		&AFileChooser::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFileChooser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFileChooser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFileChooser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFileChooser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFileChooser, 2734615401);
	template<> VROSCOPY_API UClass* StaticClass<AFileChooser>()
	{
		return AFileChooser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFileChooser(Z_Construct_UClass_AFileChooser, &AFileChooser::StaticClass, TEXT("/Script/VRoscopy"), TEXT("AFileChooser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFileChooser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
