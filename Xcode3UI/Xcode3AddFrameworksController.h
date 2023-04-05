/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEFilePickerViewDelegate-Protocol.h"

@class IDEFilePickerPanel, IDEWorkspace, NSArray, NSTimer, Xcode3Target;

@interface Xcode3AddFrameworksController : NSObject <IDEFilePickerViewDelegate>
{
    Xcode3Target *_target;
    IDEWorkspace *_workspace;
    NSArray *_libraries;
    NSArray *_selectedItems;
    BOOL _showFrameworksInProject;
    IDEFilePickerPanel *_panel;
    NSTimer *_libraryTimer;
    BOOL _showingProgress;
}

+ (id)addFrameworksControllerForTarget:(id)arg1;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(getter=isShowingFrameworksInProject) BOOL showFrameworksInProject; // @synthesize showFrameworksInProject=_showFrameworksInProject;
@property(copy, nonatomic) NSArray *_libraries; // @synthesize _libraries;
@property(readonly) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (void).cxx_destruct;
- (id)filePickerView:(id)arg1 outlineView:(id)arg2 toolTipForCell:(id)arg3 rect:(struct CGRect *)arg4 tableColumn:(id)arg5 item:(id)arg6 mouseLocation:(struct CGPoint)arg7;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (void)_loadLibrariesWithCompletionBlock:(id)arg1;
- (void)_firedLibraryTimer:(id)arg1;
- (id)_developerLibraryGroup;
- (id)_librariesInProject:(id)arg1;
- (void)endSheetWithReturnCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

