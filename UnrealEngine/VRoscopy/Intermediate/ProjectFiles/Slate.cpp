// File Tree Viewer

#include "Slate.h"

//#include "VictoryGame.h"

//This header
//#include "SDDFileTree.h"

//The Data
#include "FDDFileTreeItem.h"

DEFINE_LOG_CATEGORY(LogSlate)
void SDDFileTree::Construct(const FArguments& Args, TWeakObjectPtr<class UDDEdEngine> IN_DDEdEngine)
{
	//Set DDEdEngine
	DDEdEngine = IN_DDEdEngine;
	//~~~~~~~~~~~~~~~~~~~

	//Build Core Data
	RebuildFileTree();

	//Build the tree view of the above core data
	DDFileTreeView =
		SNew(SDDFileTreeView)

		// For now we only support selecting a single folder in the tree
		.SelectionMode(ESelectionMode::Single)
		.ClearSelectionOnClick(false)		// Don't allow user to select nothing.

		.TreeItemsSource(&Directories)
		.OnGenerateRow(this, &SDDFileTree::DDFileTree_OnGenerateRow)
		.OnGetChildren(this, &SDDFileTree::DDFileTree_OnGetChildren)

		.OnSelectionChanged(this, &SDDFileTree::DDFileTree_OnSelectionChanged)
		;

	/*
	// Expand the root  by default
	for( auto RootDirIt( Directories.CreateConstIterator() ); RootDirIt; ++RootDirIt )
	{
		const auto& Dir = *RootDirIt;
		DDFileTreeView->SetItemExpansion( Dir, true );
	}

	// Select the first item by default
	if( Directories.Num() > 0 )
	{
		DDFileTreeView->SetSelection( Directories[ 0 ] );
	}
	*/

	//ChildSlot.Widget = DDFileTreeView.ToSharedRef();
		ChildSlot.AttachWidget = DDFileTreeView.ToSharedRef();

}


SDDFileTree::~SDDFileTree()
{
}



void SDDFileTree::RebuildFileTree()
{

	Directories.Empty();

	//~~~~~~~~~~~~~~~~~~~
	//Root Level
	TSharedRef<FDDFileTreeItem> RootDir = MakeShareable(new FDDFileTreeItem(NULL, TEXT("RootDir"), FString("RootDir")));
	Directories.Add(RootDir);

	TSharedRef<FDDFileTreeItem> RootDir2 = MakeShareable(new FDDFileTreeItem(NULL, TEXT("RootDir2"), FString("RootDir2")));
	Directories.Add(RootDir2);
	//~~~~~~~~~~~~~~~~~~~

	//Root Category
	FDDFileTreeItemPtr ParentCategory = RootDir;


	//Add
	FDDFileTreeItemPtr EachSubDir = MakeShareable(new FDDFileTreeItem(ParentCategory, "Joy", "Joy"));
	RootDir->AddSubDirectory(EachSubDir);

	//Add
	EachSubDir = MakeShareable(new FDDFileTreeItem(ParentCategory, "Song", "Song"));
	RootDir->AddSubDirectory(EachSubDir);

	//Add
	FDDFileTreeItemPtr SongDir = MakeShareable(new FDDFileTreeItem(ParentCategory, "Dance", "Dance"));
	EachSubDir->AddSubDirectory(SongDir);

	//Add
	SongDir = MakeShareable(new FDDFileTreeItem(ParentCategory, "Rainbows", "Rainbows"));
	EachSubDir->AddSubDirectory(SongDir);

	//Add
	EachSubDir = MakeShareable(new FDDFileTreeItem(ParentCategory, "Butterflies", "Butterflies"));
	RootDir->AddSubDirectory(EachSubDir);


	//Refresh
	if (DDFileTreeView.IsValid())
	{
		DDFileTreeView->RequestTreeRefresh();
	}
}

TSharedRef<ITableRow> SDDFileTree::DDFileTree_OnGenerateRow(FDDFileTreeItemPtr Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	if (!Item.IsValid())
	{
		return SNew(STableRow< FDDFileTreeItemPtr >, OwnerTable)
			[
				SNew(STextBlock)
				.Text(FString("THIS WAS NULL SOMEHOW"))
			];
	}
	return SNew(STableRow< FDDFileTreeItemPtr >, OwnerTable)
		[
			SNew(STextBlock)
			.Text(Item->GetDisplayName())
		.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 12))
		.ColorAndOpacity(FLinearColor(1, 0, 1, 1))
		.ShadowColorAndOpacity(FLinearColor::Black)
		.ShadowOffset(FIntPoint(-2, 2))
		];
}


void SDDFileTree::DDFileTree_OnGetChildren(FDDFileTreeItemPtr Item, TArray< FDDFileTreeItemPtr >& OutChildren)
{
	const auto& SubCategories = Item->GetSubDirectories();
	OutChildren.Append(SubCategories);
}


//Key function for interaction with user!
void SDDFileTree::DDFileTree_OnSelectionChanged(FDDFileTreeItemPtr Item, ESelectInfo::Type SelectInfo)
{
	//Selection Changed! Tell DDEdEngine!
	UE_LOG(LogSlate, Warning, TEXT("Item Selected: %s"), *Item->GetDisplayName());
}


FDDFileTreeItemPtr SDDFileTree::GetSelectedDirectory() const
{
	if (DDFileTreeView.IsValid())
	{
		auto SelectedItems = DDFileTreeView->GetSelectedItems();
		if (SelectedItems.Num() > 0)
		{
			const auto& SelectedCategoryItem = SelectedItems[0];
			return SelectedCategoryItem;
		}
	}

	return NULL;
}


void SDDFileTree::SelectDirectory(const FDDFileTreeItemPtr& CategoryToSelect)
{
	if (ensure(DDFileTreeView.IsValid()))
	{
		DDFileTreeView->SetSelection(CategoryToSelect);
	}
}

//is the tree item expanded to show children?
bool SDDFileTree::IsItemExpanded(const FDDFileTreeItemPtr Item) const
{
	return DDFileTreeView->IsItemExpanded(Item);
}



void SDDFileTree::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	// Call parent implementation
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	//can do things here every tick
}