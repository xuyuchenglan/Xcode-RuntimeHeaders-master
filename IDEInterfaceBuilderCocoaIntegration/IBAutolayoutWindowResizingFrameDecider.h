/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBAutolayoutFrameDecider.h"

@class IBCocoaAutolayoutEngine, NSView;

@interface IBAutolayoutWindowResizingFrameDecider : IBAutolayoutFrameDecider
{
    NSView *_contentView;
}

+ (void)decideAndSetFramesOfEntireViewHierarchyForResizingWindowContentView:(id)arg1 toLayoutSize:(struct CGSize)arg2 layoutInfo:(id)arg3 delegate:(id)arg4;
+ (id)frameDeciderForResizingWindowContentView:(id)arg1 layoutInfo:(id)arg2 delegate:(id)arg3;
@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(readonly) IBCocoaAutolayoutEngine *engine;
- (BOOL)isEdge:(unsigned long long)arg1 ofDescendant:(id)arg2 fixedInPositionOnWindowDuringResizeOfAncestor:(id)arg3 fromKnob:(long long)arg4;
- (BOOL)isDistanceFromEdge:(unsigned long long)arg1 ofDescendant:(id)arg2 toSameEdgeOfAncestor:(id)arg3 changingOneToOneWithKnob:(long long)arg4;
- (void)decideAndSetFramesOfEntireViewHierarchyForResizingWindowContentViewToLayoutSize:(struct CGSize)arg1;

@end

