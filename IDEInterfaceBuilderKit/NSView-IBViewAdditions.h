/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (IBViewAdditions)
- (void)ib_removeFromSuperviewMakingAncestorFirstResponderIfNeeded;
- (void)ib_setSubviewsMakingAncestorFirstResponderIfNeeded:(id)arg1;
- (id)ib_layoutDescription;
- (void)ib_centerWithIntegralOriginInRect:(struct CGRect)arg1;
- (id)ib_constraintsForMakingFlushWithSuperview;
- (BOOL)isMouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)firstAncestorPassingTest:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animatingSynchronously:(BOOL)arg2 duration:(double)arg3;
- (void)scrollRectToVisible:(struct CGRect)arg1 animatingSynchronously:(BOOL)arg2;
- (struct CGRect)rectToScrollRectToVisible:(struct CGRect)arg1 keepingRectVisible:(struct CGRect)arg2;
- (CDStruct_f6143a38)convertLine:(CDStruct_f6143a38)arg1 fromView:(id)arg2;
- (CDStruct_f6143a38)convertLine:(CDStruct_f6143a38)arg1 toView:(id)arg2;
- (long long)convertKnobPosition:(long long)arg1 fromView:(id)arg2;
- (long long)convertKnobPosition:(long long)arg1 toView:(id)arg2;
- (unsigned long long)convertRectEdge:(unsigned long long)arg1 fromView:(id)arg2;
- (unsigned long long)convertRectEdge:(unsigned long long)arg1 toView:(id)arg2;
- (id)transformForConvertingPointsFromView:(id)arg1;
- (id)transformForConvertingPointsToView:(id)arg1;
- (id)transformForConvertingToAncestor:(id)arg1;
- (struct CGRect)visibleBoundsIgnoringHiddenAncestors;
- (struct CGPoint)convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToScreen:(struct CGPoint)arg1;
- (struct CGSize)convertSizeToScreen:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromScreen:(struct CGSize)arg1;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
- (struct CGSize)convertOffsetFromWindow:(struct CGSize)arg1;
- (struct CGSize)convertOffsetToWindow:(struct CGSize)arg1;
- (struct CGPoint)convertPointFromWindowUserSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToWindowUserSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromWindowUserSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToWindowUserSpace:(struct CGRect)arg1;
- (struct CGSize)convertSizeFromWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeToWindow:(struct CGSize)arg1;
- (struct CGPoint)convertPointFromWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToWindow:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromWindow:(struct CGRect)arg1;
- (struct CGRect)convertRectToWindow:(struct CGRect)arg1;
- (CDStruct_c519178c)convertInsetFromWindowUserSpace:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInsetToWindowUserSpace:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInsetFromWindow:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInsetToWindow:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(id)arg2;
- (struct CGRect)boundsClippedToAncestor:(id)arg1 convertedToView:(id)arg2;
- (struct CGRect)boundsClippedToAncestorsConvertedToView:(id)arg1;
- (struct CGRect)boundsClippedToAncestorsConvertedToWindow;
- (void)makeRectVisible:(struct CGRect)arg1 ofView:(id)arg2;
- (void)makeRectVisible:(struct CGRect)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)foreachRectBeingDrawn:(id)arg1;
- (BOOL)isVisible;
@end

