/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

#import "IDESourceControlLogFilesChangedViewDelegate-Protocol.h"
#import "IDESourceControlNameTokenViewDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "RVPeoplePickerDelegate-Protocol.h"

@class DVTBindingToken, DVTBorderedView, DVTStackView_ML, IDESourceControlLogFilesChangedView, IDESourceControlLogItem, IDESourceControlLogViewController, IDESourceControlNameTokenView, IDESourceControlPerson, IDESourceControlPersonPopover, IDESourceControlTree, NSTextField;

@interface IDESourceControlLogItemView : NSTableCellView <NSPopoverDelegate, RVPeoplePickerDelegate, IDESourceControlNameTokenViewDelegate, IDESourceControlLogFilesChangedViewDelegate>
{
    IDESourceControlPerson *_author;
    IDESourceControlLogItem *_logItem;
    IDESourceControlPersonPopover *_peoplePickerPopover;
    DVTBindingToken *_imageBindingToken;
    DVTBindingToken *_nameBindingToken;
    DVTBindingToken *_chatBindingToken;
    DVTStackView_ML *_filesChangedStackView;
    long long _trackingTag;
    BOOL _isChangedFilesExpanded;
    NSTextField *_dateField;
    NSTextField *_revisionField;
    IDESourceControlLogFilesChangedView *_filesChangedButton;
    NSTextField *_messageField;
    IDESourceControlNameTokenView *_nameTokenView;
    DVTBorderedView *_borderedView;
    IDESourceControlLogViewController *_owningController;
    IDESourceControlTree *_sourceTree;
}

+ (double)textHorizontalMargins;
+ (double)defaultMaxSize;
+ (id)messageTextAttributes;
+ (id)showChatButtonTransformer;
+ (id)nibName;
@property BOOL isChangedFilesExpanded; // @synthesize isChangedFilesExpanded=_isChangedFilesExpanded;
@property __weak IDESourceControlTree *sourceTree; // @synthesize sourceTree=_sourceTree;
@property __weak IDESourceControlLogViewController *owningController; // @synthesize owningController=_owningController;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) IDESourceControlNameTokenView *nameTokenView; // @synthesize nameTokenView=_nameTokenView;
@property(retain) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain) IDESourceControlLogFilesChangedView *filesChangedButton; // @synthesize filesChangedButton=_filesChangedButton;
@property(retain) NSTextField *revisionField; // @synthesize revisionField=_revisionField;
@property(retain) NSTextField *dateField; // @synthesize dateField=_dateField;
- (void).cxx_destruct;
- (void)dealloc;
- (void)teardown;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewChanges:(id)arg1;
- (void)clearAuthor;
- (void)personSelected:(id)arg1;
- (void)pair:(id)arg1;
- (void)startChatWithToken:(id)arg1;
- (id)menuForNameToken:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDescriptionWithDate:(id)arg1 revision:(id)arg2 workingCopyName:(id)arg3;
- (void)setMessage:(id)arg1;
@property __weak IDESourceControlLogItem *logItem;
@property(retain) IDESourceControlPerson *author;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

