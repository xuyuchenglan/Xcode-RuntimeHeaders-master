/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTOutlineView.h"

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSNumber, NSSet, NSString;

@interface IBOutlineView : DVTOutlineView
{
    NSMutableDictionary *_cachedAutolayoutHeightDrivenWidthConstraintsByIdentifier;
    NSMutableDictionary *_cachedAutolayoutHeightDrivenCellViewsByIdentifier;
    NSMutableIndexSet *_temporaryRowIndexesForDynamicHeightItems;
    NSMutableSet *_itemsGettingHeightComputed;
    NSString *_cachedGroupCellViewIdentifier;
    NSString *_separatorRowViewIdentifier;
    NSMutableSet *_itemsWithDynamicHeight;
    NSString *_groupRowViewIdentifier;
    BOOL _delegateRespondsToDynamicHeight;
    BOOL _drawsWithActiveLook;
    NSNumber *_rowIndicatingPotentialConnection;
    NSSet *_highlightedRows;
}

@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(retain, nonatomic) NSSet *highlightedRows; // @synthesize highlightedRows=_highlightedRows;
@property(copy, nonatomic) NSNumber *rowIndicatingPotentialConnection; // @synthesize rowIndicatingPotentialConnection=_rowIndicatingPotentialConnection;
- (void).cxx_destruct;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (id)effectiveBackgroundColor;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)drawPotentialConnectionIndicatorInRect:(struct CGRect)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (double)heightForItem:(id)arg1 givenContentHeight:(double)arg2;
- (double)heightForItem:(id)arg1 givenContentHeight:(double)arg2 dynamicHeightViewIdentifier:(id)arg3 dynamicHeightViewBundle:(id)arg4 willSetupDynamicHeightBlock:(id)arg5 didSetupDynamicHeightBlock:(void)arg6;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)delegateInterceptsRightAndContextClickActions;
- (void)trackingLoopWithInitialEvent:(id)arg1;
- (id)makeEffectiveCellViewForItem:(id)arg1 withOwner:(id)arg2 groupCellViewConfigurationBlock:(id)arg3 cellViewForNonGroupRowBlock:(void)arg4;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)reloadItem:(id)arg1;
- (void)reloadDataForRowIndexes:(id)arg1 columnIndexes:(id)arg2;
- (void)reloadData;
- (id)makeSeparatorRowViewForItem:(id)arg1 withOwner:(id)arg2;
- (id)makeGroupRowViewForItem:(id)arg1 withOwner:(id)arg2;
@property(nonatomic) id <IBOutlineViewDelegate> delegate;
- (void)syncRowHeights;
- (void)setFrameSize:(struct CGSize)arg1;

@end

