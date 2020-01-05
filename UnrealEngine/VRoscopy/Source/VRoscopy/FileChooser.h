// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileChooser.generated.h"

/**
 * 
 */
UCLASS()
class VROSCOPY_API UFileChooser : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "FileChooser")
		static void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);

	UFUNCTION(BlueprintCallable, Category = "FileChooser")
		static void OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolder);

	/*Prints the data of the given file*/

	UFUNCTION(BlueprintCallable, Category = "FileChooser")
		static void PrintData(const FString& File);
	
};
