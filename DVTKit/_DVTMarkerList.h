/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface _DVTMarkerList : NSObject
{
    struct CGRect _markRect;
    NSMutableArray *_marks;
    NSMutableArray *_markRects;
}

- (void).cxx_destruct;
- (id)markRectList;
- (long long)numMarkRects;
- (struct CGRect)addMark:(double)arg1;
- (void)clearMarks;
- (struct CGRect)markRect;
- (void)setMarkRect:(struct CGRect)arg1;
- (void)_recomputeMarkRects;
- (void)_mergeMarkRect:(struct CGRect)arg1;
- (struct CGRect)_rectForMark:(double)arg1;
- (id)initWithSlotRect:(struct CGRect)arg1;

@end

