/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTViewController.h>

#import "DVTPlistOutlineViewDelegate-Protocol.h"
#import "DVTPlistViewControllerProtocol-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class DVTNonLossyASCIIFormatter, DVTNotificationToken, DVTPlistComboBoxCell, DVTPlistDataFormatter, DVTPlistNode, DVTPlistOutlineView, DVTPlistSelection, DVTPlistTextFieldCell, DVTPlistTitledPopupCell, NSArray, NSButtonCell, NSDateFormatter, NSDictionary, NSDocument<DVTPlistDocumentProtocol>, NSMutableSet, NSPopUpButtonCell, NSScrollView, NSTableHeaderView;

@interface DVTPlistViewController : DVTViewController <DVTPlistViewControllerProtocol, DVTPlistOutlineViewDelegate, NSOutlineViewDataSource, NSUserInterfaceValidations>
{
    NSScrollView *scrollView;
    DVTPlistOutlineView *outlineView;
    NSTableHeaderView *headerView;
    NSPopUpButtonCell *_classPopUpCell;
    NSPopUpButtonCell *_rootClassPopUpCell;
    DVTPlistDataFormatter *_dataFormatter;
    NSDateFormatter *_dateFormatter;
    DVTNonLossyASCIIFormatter *_nonLossyASCIIFormatter;
    DVTPlistComboBoxCell *_comboBoxCell;
    DVTPlistTitledPopupCell *_popupCell;
    NSButtonCell *_checkBoxCell;
    NSDictionary *_statusButtonCells;
    DVTPlistTextFieldCell *_textCell;
    DVTPlistTextFieldCell *_rootCell;
    NSArray *_foundLocations;
    DVTPlistSelection *_currentFoundLocation;
    DVTPlistNode *_selectedNode;
    NSArray *draggedItems;
    id _editingObj;
    id _editingValue;
    NSDocument<DVTPlistDocumentProtocol> *document;
    NSMutableSet *_expandedItems;
    struct __pecFlags {
        unsigned int showsRootPlist:1;
        unsigned int initedOutlineView:1;
        unsigned int nonLossyASCIIStrings:1;
        unsigned int editRawKeysAndValues:1;
        unsigned int reserved:28;
    } _pecFlags;
    BOOL _editingError;
    BOOL _duplicateKeySheetIsActive;
    BOOL _restoringState;
    DVTNotificationToken *_frameChangeToken;
    id <DVTPlistViewControllerDelegate> _delegate;
}

@property(retain) id <DVTPlistViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) DVTPlistNode *selectedNode; // @synthesize selectedNode=_selectedNode;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)createPlistTypeMenuWithTitle:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (struct _NSRange)foundRangeForItem:(id)arg1 inColumn:(id)arg2;
- (void)setCurrentFoundLocation:(id)arg1;
- (void)setFoundLocations:(id)arg1;
- (struct CGRect)currentSelectionFrame;
- (void)setSelection:(id)arg1 edit:(BOOL)arg2;
- (id)currentSelection;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
- (void)revealNode:(id)arg1;
- (void)expandParent:(id)arg1;
- (void)textDidEndEditingColumn:(long long)arg1 row:(long long)arg2 withMovement:(long long)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)restoreExpandedItemKeyPaths:(id)arg1;
- (id)expandedItemKeyPaths;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)_outlineViewFrameChanged:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)invalidEntryAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)sameNameAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)delayedEditItem:(id)arg1;
- (void)delayedDeletePlist:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)setPlistTypeDate:(id)arg1;
- (void)setPlistTypeData:(id)arg1;
- (void)setPlistTypeBoolean:(id)arg1;
- (void)setPlistTypeNumber:(id)arg1;
- (void)setPlistTypeString:(id)arg1;
- (void)setPlistTypeDictionary:(id)arg1;
- (void)setPlistTypeArray:(id)arg1;
- (void)setPlistClass:(Class)arg1;
- (void)shiftRowRight:(id)arg1;
- (void)shiftRowLeft:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)editNewItem:(id)arg1;
- (void)DVTPlist_unfoldAll:(id)arg1;
- (void)DVTPlist_unfold:(id)arg1;
- (void)DVTPlist_foldAll:(id)arg1;
- (void)DVTPlist_fold:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteItem:(id)arg1 withKey:(id)arg2 intoParent:(id)arg3 atIndex:(long long)arg4;
- (void)copy:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)outlineView:(id)arg1 handleTabKey:(unsigned short)arg2;
- (BOOL)outlineView:(id)arg1 handleReturnKey:(unsigned short)arg2;
- (void)toggleEditRawKeysAndValues:(id)arg1;
- (void)toggleShowsStringsAsNonLossyASCII:(id)arg1;
@property BOOL editRawKeysAndValues;
@property BOOL showsStringsAsNonLossyASCII;
@property BOOL showsRootPlist;
- (void)expandPlist:(id)arg1;
- (void)propertyListChanged:(id)arg1;
- (id)model;
- (id)draggedItems;
- (id)outlineView;
- (id)scrollView;
@property(retain) NSDocument<DVTPlistDocumentProtocol> *document;
- (void)loadView;
- (id)statusButtonCells;
- (void)primitiveInvalidate;
- (id)init;

@end

