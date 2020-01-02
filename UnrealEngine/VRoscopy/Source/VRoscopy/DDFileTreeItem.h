#pragma once
#include "Containers/UnrealString.h"
#include "Templates/SharedPointer.h"
#include "CoreMinimal.h"


typedef TSharedPtr< class FDDFileTreeItem > FDDFileTreeItemPtr;
/**

*/
class FDDFileTreeItem
{
public:

	const FDDFileTreeItemPtr GetParentCategory() const
	{
		return ParentDir.Pin();
	}

	const FString& GetDirectoryPath() const
	{
		return DirectoryPath;
	}

	const FString& GetDisplayName() const
	{
		return DisplayName;
	}

	const TArray< FDDFileTreeItemPtr >& GetSubDirectories() const
	{
		return SubDirectories;
	}

	TArray< FDDFileTreeItemPtr >& AccessSubDirectories()
	{
		return SubDirectories;
	}

	void AddSubDirectory(const FDDFileTreeItemPtr NewSubDir)
	{
		SubDirectories.Add(NewSubDir);
	}
public:

	FDDFileTreeItem(const FDDFileTreeItemPtr IN_ParentDir, const FString& IN_DirectoryPath, const FString& IN_DisplayName)
		: ParentDir(IN_ParentDir)
		, DirectoryPath(IN_DirectoryPath)
		, DisplayName(IN_DisplayName)
	{
	}
private:

	TWeakPtr< FDDFileTreeItem > ParentDir;

	FString DirectoryPath;

	FString DisplayName;

	TArray< FDDFileTreeItemPtr > SubDirectories;
};