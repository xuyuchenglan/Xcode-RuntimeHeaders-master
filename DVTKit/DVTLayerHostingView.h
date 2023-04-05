/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class CALayer<DVTClickableLayer>;

@interface DVTLayerHostingView : NSView
{
    CALayer<DVTClickableLayer> *_currentClickedLayer;
}

- (void).cxx_destruct;
- (BOOL)clickableLayerExistsForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)clickableLayerForEvent:(id)arg1;
- (id)clickableLayerAtPoint:(struct CGPoint)arg1;
- (unsigned int)_CAViewFlags;
- (BOOL)requireOptimumPerformance;

@end

