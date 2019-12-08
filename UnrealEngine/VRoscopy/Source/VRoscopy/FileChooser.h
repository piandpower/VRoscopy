// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "FileChooser.generated.h"

/**
 * 
 */
UCLASS()
class VROSCOPY_API AFileChooser : public AWorldSettings
{
	GENERATED_BODY()
		/*
	 * Opens a file dialog for the specified data. Leave FileTypes empty to be able to select any files.
	 * Filetypes must be in the format of: <File type Description>|*.<actual extension>
	 * You can combine multiple extensions by placing ";" between them
	 * For example: Text Files|*.txt|Excel files|*.csv|Image Files|*.png;*.jpg;*.bmp will display 3 lines for 3 different type of files.
	 */
		UFUNCTION(BlueprintCallable, Category = "FilePicker")
		void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);

	/*Prints the data of the given file*/
	UFUNCTION(BlueprintCallable, Category = "FilePicker")
		void PrintData(const FString& File);
};
