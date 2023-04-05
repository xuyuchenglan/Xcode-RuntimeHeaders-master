/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCEDataNodeAdapterP-Protocol.h"

@class XCBinderModule;

@interface XCOrganizerNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCBinderModule *binderModule;
}

+ (id)adapterWithBinderModule:(id)arg1;
@property XCBinderModule *binderModule; // @synthesize binderModule;
- (id)removalConfirmationAlertForDataNode:(id)arg1;
- (id)actionMenuForDataNode:(id)arg1;
- (id)addMenuForDataNode:(id)arg1;
- (id)contextualMenuForDataNode:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (void)refreshDataNode:(id)arg1;
- (void)dataNodeInvalidate:(id)arg1;
- (void)removeDataNode:(id)arg1;
- (BOOL)shouldSortChildrenOfNode:(id)arg1;
- (void)renameChild:(id)arg1 withinDataNode:(id)arg2;
- (void)removeChild:(id)arg1 fromDataNode:(id)arg2;
- (id)instantiateAddedChildWithData:(id)arg1 forDataNode:(id)arg2;
- (double)heightOfRowForDataNode:(id)arg1;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (void)dataNode:(id)arg1 acceptDroppedItems:(id)arg2 atIndex:(long long)arg3;
- (BOOL)dataNode:(id)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (void)invalidate;

@end

