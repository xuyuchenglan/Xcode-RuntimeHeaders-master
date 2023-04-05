/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

@class DVTBorderedView, DVTChooserView, DVTDocumentLocation, IDENavigatorFilterControlBar, IDENavigatorOutlineView, IDEReviewFilesButtonCell, IDEReviewFilesImageCell, IDESelection, NSArray, NSIndexSet, NSMenu, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString, NSTabView;

@interface IDEReviewFilesNavigator : IDENavigator
{
    DVTChooserView *_chooserView;
    NSTabView *_tabView;
    IDENavigatorOutlineView *_workspaceOutlineView;
    IDENavigatorOutlineView *_fileSystemOutlineView;
    IDENavigatorOutlineView *_flatOutlineView;
    IDENavigatorOutlineView *_issuesOutlineView;
    DVTBorderedView *_outerBorderedView;
    IDEReviewFilesButtonCell *_checkboxCell;
    IDEReviewFilesImageCell *_imageCell;
    NSMutableArray *_checkedFilePaths;
    NSMutableArray *_completedFilePaths;
    NSMutableSet *_mixedStateFilePaths;
    NSMutableArray *_disabledFilePaths;
    NSArray *_viewChoices;
    NSIndexSet *_selectedViewIndexes;
    NSString *_selectedChoiceWithWorkspaceKey;
    NSString *_selectedChoiceWithoutWorkspaceKey;
    NSArray *_selectedFilePaths;
    DVTDocumentLocation *_selectedDocumentLocation;
    id <IDEReviewFilesDataSource> _workspaceDataSource;
    id <IDEReviewFilesDataSource> _fileSystemDataSource;
    id <IDEReviewFilesDataSource> _flatDataSource;
    id <IDEReviewFilesDataSource> _issueDataSource;
    int _activity;
    NSMutableIndexSet *_lastSelectedIndexes;
    DVTBorderedView *_filterControlBarBorderedView;
    IDENavigatorFilterControlBar *_filterControlBar;
    NSString *_filterString;
    BOOL _showFilter;
    BOOL _showCheckboxes;
}

+ (id)keyPathsForValuesAffectingFilterPredicate;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCheckedFilePaths;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) NSMutableSet *mixedStateFilePaths; // @synthesize mixedStateFilePaths=_mixedStateFilePaths;
@property BOOL showCheckboxes; // @synthesize showCheckboxes=_showCheckboxes;
@property(copy) NSString *selectedChoiceWithoutWorkspaceKey; // @synthesize selectedChoiceWithoutWorkspaceKey=_selectedChoiceWithoutWorkspaceKey;
@property(copy) NSString *selectedChoiceWithWorkspaceKey; // @synthesize selectedChoiceWithWorkspaceKey=_selectedChoiceWithWorkspaceKey;
@property BOOL showFilter; // @synthesize showFilter=_showFilter;
@property(readonly) DVTDocumentLocation *selectedDocumentLocation; // @synthesize selectedDocumentLocation=_selectedDocumentLocation;
@property(readonly) NSArray *viewChoices; // @synthesize viewChoices=_viewChoices;
@property(retain) NSMutableArray *disabledFilePaths; // @synthesize disabledFilePaths=_disabledFilePaths;
@property(retain) NSMutableArray *completedFilePaths; // @synthesize completedFilePaths=_completedFilePaths;
@property(retain) id <IDEReviewFilesDataSource> issueDataSource; // @synthesize issueDataSource=_issueDataSource;
@property(retain) id <IDEReviewFilesDataSource> flatDataSource; // @synthesize flatDataSource=_flatDataSource;
@property(retain) id <IDEReviewFilesDataSource> fileSystemDataSource; // @synthesize fileSystemDataSource=_fileSystemDataSource;
@property(retain) id <IDEReviewFilesDataSource> workspaceDataSource; // @synthesize workspaceDataSource=_workspaceDataSource;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (id)successImage;
- (id)imageCell;
- (id)checkboxCell;
- (id)navigableItemsInOutlineView:(id)arg1 forFilePaths:(id)arg2;
- (id)navigableChildItemOfItem:(id)arg1 matchingFilePath:(id)arg2;
- (void)addFilePathToMixedState:(id)arg1;
- (void)removeFilePathFromMixedState:(id)arg1;
- (void)uncheckItemsAtFilePaths:(id)arg1;
- (void)checkItemsAtFilePaths:(id)arg1;
- (void)refreshItemsAtFilePaths:(id)arg1;
@property(readonly) IDESelection *contextMenuSelection;
@property(retain) NSMenu *contextMenu;
- (id)filterPredicate;
- (void)updateSelectedDocumentLocation;
@property int activity; // @synthesize activity=_activity;
@property(retain) NSArray *checkedFilePaths; // @synthesize checkedFilePaths=_checkedFilePaths;
@property(readonly) IDENavigatorOutlineView *currentOutlineView;
- (void)setupViewChoices;
- (void)reloadAvailableNavigators;
@property(copy) NSIndexSet *selectedViewIndexes; // @synthesize selectedViewIndexes=_selectedViewIndexes;
- (void)setSelectedNavigableItems:(id)arg1 forOutlineView:(id)arg2;
- (id)selectedNavigableItemsOfOutlineView:(id)arg1;
- (void)setSelectedFilePaths:(id)arg1 forOutlineView:(id)arg2;
- (id)selectedFilePathsOfOutlineView:(id)arg1;
@property(retain) NSMutableArray *selectedFilePaths;
- (id)domainIdentifier;
@property(readonly) IDENavigatorOutlineView *issuesOutlineView;
@property(readonly) IDENavigatorOutlineView *flatOutlineView;
@property(readonly) IDENavigatorOutlineView *fileSystemOutlineView;
@property(readonly) IDENavigatorOutlineView *workspaceOutlineView;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

