#pragma once

#include "DDFileTreeItem.h"
#include "CoreMinimal.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/SCompoundWidget.h"
#include "SlateHUD.h"

typedef STreeView< FDDFileTreeItemPtr > SDDFileTreeView;
/**

*/
class SDDFileTree : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDDFileTree) : _OwnerHUD() {}
	SLATE_ARGUMENT(TWeakObjectPtr<class ASlateHUD>, OwnerHUD)
		SLATE_END_ARGS()
public:
	TWeakObjectPtr<ASlateHUD> OwnerHUD;

	//bool DoRefresh;
public:
	void Construct(const FArguments& InArgs);
	/** Destructor */
	~SDDFileTree();

	FDDFileTreeItemPtr GetSelectedDirectory() const;

	void SelectDirectory(const FDDFileTreeItemPtr& CategoryToSelect);

	bool IsItemExpanded(const FDDFileTreeItemPtr Item) const;
private:

	TSharedRef<ITableRow> DDFileTree_OnGenerateRow(FDDFileTreeItemPtr Item, const TSharedRef<STableViewBase>& OwnerTable);

	void DDFileTree_OnGetChildren(FDDFileTreeItemPtr Item, TArray< FDDFileTreeItemPtr >& OutChildren);

	void DDFileTree_OnSelectionChanged(FDDFileTreeItemPtr Item, ESelectInfo::Type SelectInfo);

	void RebuildFileTree();

	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
private:

	TSharedPtr< SDDFileTreeView > DDFileTreeView;

	TArray< FDDFileTreeItemPtr > Directories;
};