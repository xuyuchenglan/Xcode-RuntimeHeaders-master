/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DTGraphKit/DTGraph.h>

@interface DTBarGraph : DTGraph
{
    BOOL _hasWidthOrSpacingAttribute;
    long long _maxX;
    long long _minX;
    long long _maxY;
    long long _calculatedYAxisLabelHeight;
    long long _lastMaximumYValue;
}

+ (id)sortEntries:(id)arg1 keyPath:(id)arg2;
@property long long lastMaximumYValue; // @synthesize lastMaximumYValue=_lastMaximumYValue;
- (BOOL)validateModel:(id)arg1;
- (id)_divisionsForContentMagnitude:(double)arg1 start:(double)arg2 min:(long long)arg3 max:(long long)arg4 spacing:(double)arg5 keypath:(id)arg6 onlyStartAndEnd:(BOOL)arg7;
- (id)_entries:(id)arg1 fittingIntoRect:(struct CGRect)arg2;
- (id)sortedEntries:(id)arg1 fittingIntoRect:(struct CGRect)arg2;
- (id)visibleEntries:(id)arg1;
- (unsigned long long)numberOfBars;
- (unsigned long long)numberOfEntriesThatFitRect:(struct CGRect)arg1;
- (long long)maximumYValue;
- (long long)_maximumValueOfSeries:(id)arg1;
- (long long)minimumXValue;
- (long long)maximumXValue;
- (BOOL)hasBarSpacing;
@property(readonly) double barSpacing;
@property(readonly) double barWidth;
- (struct CGRect)contentFrame;
- (void)clearCache;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)textAttributesForAxisLabels;
- (double)widthToFill:(struct CGRect)arg1 numberOfEntries:(unsigned long long)arg2;
- (id)divisionPositionsYAxis;
- (id)divisionPositionsXAxis;
@property(readonly) double yAxisSpacing;
@property(readonly) double xAxisSpacing;
- (void)getXAxisRect:(struct CGRect *)arg1 yAxisRect:(struct CGRect *)arg2;
- (double)calculateVerticalBorderBuffer;
- (double)calculateHorizontalBorderBuffer;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (BOOL)canDrawBeyondContentRect;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

