/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface DVTSlidingAnimation : NSObject
{
    id _delegate;
    NSMapTable *_views;
    BOOL _sliding;
    BOOL _paused;
}

+ (id)_runLoopModesForAnimation;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (BOOL)isSliding;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)stopView:(id)arg1;
- (struct CGRect)destinationForView:(id)arg1;
- (void)sendViewToDestination:(id)arg1;
- (void)setDestinationForView:(id)arg1 to:(struct CGRect)arg2 duration:(double)arg3;
- (void)showNextFrame;
- (void)updateTimer;
- (void)updateViewPosition:(id)arg1 forTime:(double)arg2;
- (id)init;

@end

