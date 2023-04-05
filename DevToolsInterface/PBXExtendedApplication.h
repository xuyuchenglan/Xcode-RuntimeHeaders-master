/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSApplication.h"

#import "NSMenuDelegate-Protocol.h"

@class NSWindow;

@interface PBXExtendedApplication : NSApplication <NSMenuDelegate>
{
    NSWindow *_mainWindowAtBeginningOfSendEvent;
    struct {
        char shouldSendEvent;
        char didSendEvent;
    } _edRespondsTo;
    NSWindow *_lastActiveWindow;
    NSWindow *_hudWindow;
}

+ (void)initialize;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleBreakpointBubblesShown:(id)arg1;
- (void)changeBuildBubblesDisplayMode:(id)arg1;
- (void)toggleBuildBubblesShown:(id)arg1;
- (void)hideIncrementalFindBar:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)findSelectionInFile:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNextAndDismissIfSuccessful:(id)arg1;
- (void)findNext:(id)arg1;
- (void)showSimpleFind:(id)arg1;
- (BOOL)hudWindowIsVisible;
- (id)hudWindow;
- (void)setHUDWindow:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)installTopLevelMenuItems:(id)arg1 forBundle:(id)arg2;
- (void)_makeWindowsPerform:(SEL)arg1 forEvent:(id)arg2 inWindow:(id)arg3 standardWindowButton:(unsigned long long)arg4;
- (void)closeWindows:(id)arg1;
- (void)cascadeWindows:(id)arg1;
- (void)updateWindowsItem:(id)arg1;
- (void)changeWindowsItem:(id)arg1 title:(id)arg2 filename:(BOOL)arg3;
- (void)addWindowsItem:(id)arg1 title:(id)arg2 filename:(BOOL)arg3;
- (void)removeWindowsItem:(id)arg1;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)_setEventDelegate:(id)arg1;
- (id)eventDelegate;
- (id)valueInProjectsWithName:(id)arg1;
- (id)projects;
- (void)reportException:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)mainWindowAtBeginningOfSendEvent;

@end

