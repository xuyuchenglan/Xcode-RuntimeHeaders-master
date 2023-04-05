/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXProjectModule.h>

#import "PBXSelectionTarget-Protocol.h"
#import "XCSelectionSource-Protocol.h"

@class PBXSmartGroupDataSource, XCBorderView;

@interface XCDetailModule : PBXProjectModule <PBXSelectionTarget, XCSelectionSource>
{
    XCBorderView *_detailView;
    PBXSmartGroupDataSource *_dataSource;
    BOOL _searchIsEditing;
}

- (id)dockMenuItems;
- (BOOL)canCloneInDock;
- (id)performAction:(id)arg1 withSelection:(id)arg2;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)selectedProjectItemPaths;
- (id)selectedProjectItems;
- (void)_showDetailView;
- (void)_refreshDataSource:(id)arg1;
- (void)_searchFieldHasStoppedEditing:(id)arg1;
- (void)_searchFieldContinuesEditing:(id)arg1;
- (void)_searchFieldHasStartedEditing:(id)arg1;
- (BOOL)_shouldSelectSelfInTabModule;
- (void)_perspectiveSpecificationReadyForInfo:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)label;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)previousDetail:(id)arg1;
- (void)nextDetail:(id)arg1;
- (id)slideOutTabIconImage;
- (void)moduleWillBeHidden;
- (void)moduleWasDisplayed;
- (void)moduleWasExposedByUser;
- (void)becomeActive;
- (void)setView:(id)arg1;
- (BOOL)loadView;
- (void)viewDidLoad;
- (id)currentDataSource;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)dealloc;

@end

