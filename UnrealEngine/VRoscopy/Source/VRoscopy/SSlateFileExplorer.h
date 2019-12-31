// File Tree Viewer

#pragma once

//DD File Tree Item
#include "FDDFileTreeItem.h"
#include "CoreMinimal.h"
//#include "Widgets/Views/STreeView.h"
//#include "Widgets/Input/SComboBox.h"
//DECLARE_LOG_CATEGORY_EXTERN(LogSlate, All, All)

/**
 * 
 */
//~~~ Forward Declarations ~~~
class UDDEdEngine;

typedef STreeView< FDDFileTreeItemPtr > SDDFileTreeView;

/**
 * File Tree View
 */

 /** Widget constructor */
class SDDFileTree : public SCompoundWidget
{


public:

	SLATE_BEGIN_ARGS(SDDFileTree)
	{}

	SLATE_END_ARGS()


		//~~~~~~~~
		//		DDEdEngine
		//~~~~~~~~
public:
	//owns this
	TWeakObjectPtr<class UDDEdEngine> DDEdEngine;


	/** Refresh the Tree */
	//bool DoRefresh;


//~~~
public:
	/** Widget constructor */
	void Construct(const FArguments& Args, TWeakObjectPtr<class UDDEdEngine> IN_DDEdEngine);

	/** Destructor */
	~SDDFileTree();

	/** @return Returns the currently selected category item */
	FDDFileTreeItemPtr GetSelectedDirectory() const;

	/** Selects the specified category */
	void SelectDirectory(const FDDFileTreeItemPtr& CategoryToSelect);

	/** @return Returns true if the specified item is currently expanded in the tree */
	bool IsItemExpanded(const FDDFileTreeItemPtr Item) const;

private:

	/** Called to generate a widget for the specified tree item */
	TSharedRef<ITableRow> DDFileTree_OnGenerateRow(FDDFileTreeItemPtr Item, const TSharedRef<STableViewBase>& OwnerTable);

	/** Given a tree item, fills an array of child items */
	void DDFileTree_OnGetChildren(FDDFileTreeItemPtr Item, TArray< FDDFileTreeItemPtr >& OutChildren);

	/** Called when the user clicks on an  item, or when selection changes by some other means */
	void DDFileTree_OnSelectionChanged(FDDFileTreeItemPtr Item, ESelectInfo::Type SelectInfo);

	/** Rebuilds the category tree from scratch */
	void RebuildFileTree();

	/** SWidget overrides */
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);// OVERRIDE;


private:


	/** The tree view widget*/
	TSharedPtr< SDDFileTreeView > DDFileTreeView;

	/** The Core Data for the Tree Viewer! */
	TArray< FDDFileTreeItemPtr > Directories;
};

//class VROSCOPY_API SSlateFileExplorer : public SCompoundWidget
//{
//public:
//	SLATE_BEGIN_ARGS(SSlateFileExplorer)
//	{}
//	SLATE_END_ARGS()
//
//	/** Constructs this widget with InArgs */
//	void Construct(const FArguments& InArgs);
//};
