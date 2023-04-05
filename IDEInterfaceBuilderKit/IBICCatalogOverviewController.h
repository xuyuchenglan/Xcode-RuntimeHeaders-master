/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBICAbstractCatalogDetailController.h>

#import "DVTStatefulObject-Protocol.h"
#import "IBDragAndDropInsertionIndicatorDelegate-Protocol.h"
#import "IBICMultipartImageViewControllerDelegate-Protocol.h"

@class IBDragAndDropInsertionIndicator, IBICCatalog, IBICCatalogActionContext, IBICQuickLookController, IBMutableIdentityDictionary, NSMutableArray;

@interface IBICCatalogOverviewController : IBICAbstractCatalogDetailController <DVTStatefulObject, IBDragAndDropInsertionIndicatorDelegate, IBICMultipartImageViewControllerDelegate>
{
    NSMutableArray *_controllers;
    IBMutableIdentityDictionary *_multipartImagesToControllers;
    IBDragAndDropInsertionIndicator *_dragIndicator;
    long long _insertionIndex;
    IBICCatalogActionContext *_contextMenuActionContext;
    IBICQuickLookController *_quickLookController;
    IBICCatalog *_draggedImageCatalogContent;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) IBICCatalog *draggedImageCatalogContent; // @synthesize draggedImageCatalogContent=_draggedImageCatalogContent;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)quickLookImageCatalogItems:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)detailDocumentViewLayoutDidComplete:(id)arg1;
- (void)detailDocumentView:(id)arg1 cancelPreview:(id)arg2;
- (void)detailDocumentView:(id)arg1 togglePreview:(id)arg2;
- (void)updateQuickLookController;
- (struct CGRect)frameForItem:(id)arg1 inView:(id)arg2;
- (id)objectsForSelectAll;
- (void)detailDocumentView:(id)arg1 performDelete:(id)arg2;
- (void)multipartImageViewController:(id)arg1 trackBandSelectionWithInitialMouseDown:(id)arg2 currentMouseDragged:(id)arg3 selectionBeforeMouseDown:(id)arg4;
- (id)multipartImageViewControllerInitialSelectionForFutureBandSelection:(id)arg1;
- (void)multipartImageViewController:(id)arg1 performDelete:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)chooseImageRepSlotsBasedOnContextFocus:(id)arg1;
- (void)importImageCatalogContent:(id)arg1;
- (void)showItemsInFinder:(id)arg1;
- (void)openItemsWithExternalEditor:(id)arg1;
- (void)insertNewImageCatalogLaunchImageSet:(id)arg1;
- (void)insertNewImageCatalogAppIconSet:(id)arg1;
- (void)insertNewImageCatalogIconSet:(id)arg1;
- (void)insertNewImageCatalogImageSet:(id)arg1;
- (void)removeImageCatalogItems:(id)arg1;
- (id)contextMenu;
- (void)detailDocumentView:(id)arg1 didTrackContextMenuFromEvent:(id)arg2;
- (void)detailDocumentView:(id)arg1 willTrackContextMenuFromEvent:(id)arg2;
- (id)detailDocumentView:(id)arg1 menuForEvent:(id)arg2;
- (id)contextClickActionForInsertingNewMultipartImage;
- (id)contextMenuFocusedItemsForEvent:(id)arg1;
- (void)refreshContentView;
- (id)orderedMultipartImageControllers;
- (struct CGRect)dragAndDropInsertionIndicator:(id)arg1 dragAlignmentRectForRelatedObject:(id)arg2;
- (struct CGRect)dragAlignmentRectForMultipartImageViewController:(id)arg1;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (void)view:(id)arg1 draggingEnded:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (id)destinationFolderForDraggingInfo:(id)arg1;
- (id)destinationFolderForDraggingLocation:(struct CGPoint)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (void)updateDropIndicators:(id)arg1;
- (long long)displayInsertionIndexForItem:(id)arg1 intoFolder:(id)arg2;
- (id)multipartImageViewControllerAtPoint:(struct CGPoint)arg1;
- (BOOL)isController:(id)arg1 hitByPoint:(struct CGPoint)arg2;
- (void)drawsWithKeyAppearanceDidChange;
- (BOOL)item:(id)arg1 intersectsBandSelectionRect:(struct CGRect)arg2 fromView:(id)arg3;
- (void)updateSelectionOwner:(id)arg1 forBandSelectionHittingObjects:(id)arg2 withEvent:(id)arg3 initialSelection:(id)arg4;
- (id)bandSelectionCandidates;
- (void)multipartImageViewController:(id)arg1 userDidDragItems:(id)arg2 withMouseDown:(id)arg3 andMouseDragged:(id)arg4;
- (void)multipartImageViewController:(id)arg1 userDidSelectItems:(id)arg2 withEvent:(id)arg3;
- (void)pushSelectionToViews;
- (id)showAlternateDetailControllerTitle;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)invalidateChildControllers:(id)arg1;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)initWithDocumentEditor:(id)arg1;

@end

