/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFosterParent.h>

#import "PBXUIDeletionAssistant-Protocol.h"
#import "XCBreakpointActionsProtocol-Protocol.h"
#import "XCGroupingProtocol-Protocol.h"
#import "XCOutlineViewCheckBoxProtocol-Protocol.h"

@interface XCBreakpointsBucketProxy : PBXFosterParent <PBXUIDeletionAssistant, XCGroupingProtocol, XCBreakpointActionsProtocol, XCOutlineViewCheckBoxProtocol>
{
    BOOL _enabled;
    BOOL _showCheckbox;
    struct CGRect _checkBoxBounds;
}

+ (void)addGroup:(id)arg1 forSource:(id)arg2;
+ (void)ungroupObjects:(id)arg1;
+ (void)groupObjects:(id)arg1 forSource:(id)arg2;
- (struct CGRect)checkBoxBounds;
- (void)storeCheckBoxBounds:(struct CGRect)arg1;
- (void)toggleEnabledState;
- (id)iconImage;
- (void)setEnabledState:(BOOL)arg1;
- (void)setShowCheckbox:(BOOL)arg1;
- (id)container;
- (BOOL)acceptsDraggedItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 forPaths:(id)arg3 withDraggingInfo:(id)arg4 item:(id)arg5 childIndex:(long long)arg6 forModule:(id)arg7;
- (BOOL)acceptsItem:(id)arg1;
- (BOOL)isAncestorOf:(id)arg1;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItem:(id)arg1;
- (BOOL)canDelete;
- (BOOL)canRename;
- (void)importBreakpointsFromPath:(id)arg1 forProject:(id)arg2 atPath:(id)arg3;
- (void)exportBreakpoints:(id)arg1 toPath:(id)arg2;
- (void)enableAllBreakpoints;
- (void)disableAllBreakpoints;
- (BOOL)allowsEditingOfChildren;
- (void)setName:(id)arg1;
- (id)name;
- (Class)groupingClass;
- (void)deleteApplicableElements:(id)arg1 fromModule:(id)arg2;
- (void)uiParentDidChange;
- (void)_objectRemoved:(id)arg1;
- (void)_objectAdded:(id)arg1;
- (void)_breakpointDidChange:(id)arg1;
- (id)children;
- (void)setRepresentedObject:(id)arg1;
- (id)initWithBreakpointGroup:(id)arg1;
- (id)initWithBreakpointGroup:(id)arg1 usingGUID:(id)arg2;

@end

