/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "IBAutolayoutIssueResolvingViewControllerDelegate-Protocol.h"
#import "IBAutolayoutIssueTableCellViewDelegate-Protocol.h"
#import "IBHybridStructureSelectionProvider-Protocol.h"
#import "IBOutlineViewDelegate-Protocol.h"
#import "IBSelectionProvider-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, IBAbstractDocumentEditor, IBAutolayoutStatus, IBCancellationToken, IBOutlineView, NSObject, NSOrderedSet, NSPopover, NSSet, NSString, NSTextField;

@interface IBAutolayoutSidebarViewController : IDEViewController <NSOutlineViewDelegate, IBOutlineViewDelegate, NSOutlineViewDataSource, IBAutolayoutIssueTableCellViewDelegate, IBAutolayoutIssueResolvingViewControllerDelegate, NSPopoverDelegate, IBHybridStructureSelectionProvider, IBSelectionProvider>
{
    DVTNotificationToken *_documentWillRemoveNotificationToken;
    IBCancellationToken *_documentAutolayoutStatusToken;
    DVTObservingToken *_kvoTopLevelObjectLabelToken;
    long long _ignoreOutlineViewSelectionUpdates;
    DVTDelayedInvocation *_syncDelayedInvocation;
    DVTObservingToken *_kvoFirstResponderToken;
    IBCancellationToken *_highlightToken;
    NSPopover *_currentResolvingPopover;
    NSSet *_selectedMembers;
    BOOL _drawsWithActiveLook;
    IBAbstractDocumentEditor *_documentEditor;
    NSObject *_topLevelObject;
    id <IBAutolayoutSidebarViewControllerDelegate> _delegate;
    IBOutlineView *_outlineView;
    NSOrderedSet *_topLevelItems;
    IBAutolayoutStatus *_status;
    NSPopover *_helpTextPopover;
    NSTextField *_helpTextLabel;
}

@property(retain) NSTextField *helpTextLabel; // @synthesize helpTextLabel=_helpTextLabel;
@property(retain) NSPopover *helpTextPopover; // @synthesize helpTextPopover=_helpTextPopover;
@property(retain, nonatomic) IBAutolayoutStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) NSOrderedSet *topLevelItems; // @synthesize topLevelItems=_topLevelItems;
@property(nonatomic) __weak IBOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) __weak id <IBAutolayoutSidebarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(retain, nonatomic) NSObject *topLevelObject; // @synthesize topLevelObject=_topLevelObject;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void).cxx_destruct;
@property(readonly) NSString *stateSavingIdentifier;
- (void)willResignAsSelectionProviderForDocumentEditor:(id)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(id)arg1;
- (BOOL)documentEditor:(id)arg1 canSelectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 pullSelection:(id)arg2;
- (void)documentEditor:(id)arg1 selectMembers:(id)arg2;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)_readSelectedMembersFromOutlineView;
- (void)_selectMembers:(id)arg1 selectionCameFromDocumentEditor:(BOOL)arg2;
- (void)_pushSelectionToOutlineView;
- (void)_whileIgnoringOutlineViewSelectionUpdates:(id)arg1;
- (BOOL)_isIgnoringOutlineViewSelectionUpdates;
- (void)willResignAsCurrentNavigationItemForNavigationController:(id)arg1;
- (void)_didDoubleClickTableView:(id)arg1;
- (void)issueTableCellView:(id)arg1 mouseExitedWithEvent:(id)arg2;
- (void)issueTableCellView:(id)arg1 mouseEnteredWithEvent:(id)arg2;
- (void)_stopHighlightingObjectsInCanvas;
- (void)_highlightObjectInCanvas:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)_outlineViewItemsForDocumentObject:(id)arg1;
- (id)_categoryForItem:(id)arg1;
- (void)registerWithDocumentEditor;
@property(copy) NSString *filterString;
@property(readonly) BOOL wantsFilterField;
- (void)issueResolvingViewControllerDidFinishResolvingIssues:(id)arg1;
- (void)_closeCurrentResolvingPopover;
- (void)popoverDidClose:(id)arg1;
- (void)_showResolutionUIForItem:(id)arg1 sender:(id)arg2;
- (void)_showHelpTextForCategory:(id)arg1 sender:(id)arg2;
- (id)_misplacedViewsCategoryForStatuses:(id)arg1;
- (id)_actualFrameLabelForMisplacementStatus:(id)arg1;
- (id)_expectedFrameLabelForMisplacementStatus:(id)arg1;
- (id)_conflictingConstraintsCategoryforSet:(id)arg1;
- (BOOL)_addScrollableContentSizeCategoryToCollection:(id)arg1 forAmbiguityGroupIfNeeded:(id)arg2;
- (BOOL)_addResolvingInequalityConstraintsCategoryToCollection:(id)arg1 forAmbiguityGroupIfNeeded:(id)arg2;
- (BOOL)_addEqualNonRequiredPriorityConstraintsCategoryToCollection:(id)arg1 forAmbiguityGroupIfNeeded:(id)arg2;
- (void)_addFallbackMissingConstraintsCategoryToCollection:(id)arg1 forAmbiguityGroup:(id)arg2;
- (BOOL)_addMissingConstraintsCategoryToCollection:(id)arg1 forAmbiguityGroupIfNeeded:(id)arg2;
- (void)_addMissingConstraintsCategoryToCollection:(id)arg1 forViews:(id)arg2 inAmbiguityGroup:(id)arg3;
- (BOOL)_addContentSizeConstraintsCategoryToCollection:(id)arg1 forAmbiguityGroupIfNeeded:(id)arg2;
- (id)_effectiveAmbiguityCategoryNameForName:(id)arg1 ambiguityGroup:(id)arg2;
- (void)_refreshAfterStatusUpdate;
- (void)_ensureTopLevelItemsAreExpanded;
- (id)document;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

