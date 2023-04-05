/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCUserScriptNode.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSMutableArray;

@interface XCUserScriptGroup : XCUserScriptNode <NSMenuDelegate>
{
    NSMutableArray *_subNodes;
}

+ (id)archivableRelationships;
+ (id)userScriptGroupWithName:(id)arg1;
+ (id)keyPathsForValuesAffectingSubNodesArray;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)gidCommentForArchive;
- (id)contents;
- (void)setContents:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (SEL)selector;
- (id)menuItem;
@property(readonly) NSMenu *menu;
- (BOOL)isLeaf;
- (BOOL)isNameEditable;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (id)objectInSubNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSubNodes;
- (void)setSubNodesArray:(id)arg1;
- (id)subNodesArray;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)propertyListRepresentationWithUUIDs:(BOOL)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)init;

@end

