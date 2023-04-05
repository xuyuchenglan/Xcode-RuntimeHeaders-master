/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXProjectModule.h>

@class NSBox, NSButton, NSComboBox, NSPopUpButton, NSString, NSTextView, NSView, XCUnretainedReference;

@interface XCMemoryBrowserModule : PBXProjectModule
{
    NSView *addrScrollView;
    NSComboBox *addrTextField;
    NSTextView *addrTextView;
    NSTextView *asciiTextView;
    NSBox *box;
    NSComboBox *bytesTextField;
    NSPopUpButton *columnsPopUp;
    NSTextView *memoryTextView;
    NSButton *updateButton;
    NSPopUpButton *wordSizePopUp;
    NSButton *liveUpdateButton;
    XCUnretainedReference *_debuggerAdaptorReference;
    NSString *_expression;
    NSString *_currentExpressionWithAddress;
    unsigned long long _cascadeNumber;
    struct CGPoint _nextCascadePoint;
    BOOL _didShowOnce;
    BOOL _isBlank;
    BOOL _showingBlankAddress;
}

+ (id)_monospacedFontForDisplay;
@property(setter=_setNextCascadePoint:) struct CGPoint _nextCascadePoint; // @synthesize _nextCascadePoint;
@property(readonly) NSString *currentExpressionWithAddress; // @synthesize currentExpressionWithAddress=_currentExpressionWithAddress;
@property unsigned long long cascadeNumber; // @synthesize cascadeNumber=_cascadeNumber;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)scrollClipView:(id)arg1 toPoint:(struct CGPoint)arg2;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)asciiTextViewDidChangeSelection:(id)arg1;
- (void)memoryTextViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateComboBox:(id)arg1;
- (void)memoryViewerSetMemory:(id)arg1 address:(id)arg2 ascii:(id)arg3 startAddress:(id)arg4 bytes:(id)arg5;
- (void)_showWindow;
- (void)setDebuggerAdaptor:(id)arg1;
- (id)debuggerAdaptor;
- (void)newMemoryBrowser:(id)arg1;
- (void)update:(id)arg1;
- (void)autoupdate;
- (BOOL)liveUpdateEnabled;
- (id)wordSizePopUp;
- (id)columnsPopUp;
- (id)bytesTextField;
- (id)addrTextField;
- (void)nextPage:(id)arg1;
- (void)actionWordSize:(id)arg1;
- (void)actionColumns:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (id)_debugSessionModule;
- (void)dealloc;
- (id)initAsBlankBrowser;
- (id)initWithExpression:(id)arg1;
- (void)awakeFromNib;
- (struct CGSize)viewMinSize;

@end

