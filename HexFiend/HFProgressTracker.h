/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSProgressIndicator, NSTimer;

@interface HFProgressTracker : NSObject
{
    unsigned long long currentProgress;
    int cancelRequested;
    unsigned long long maxProgress;
    NSProgressIndicator *progressIndicator;
    NSTimer *progressTimer;
    double lastSetValue;
    NSDictionary *userInfo;
    id delegate;
}

- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)noteFinished:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)requestCancel:(id)arg1;
- (void)endTrackingProgress;
- (void)beginTrackingProgress;
- (void)_updateProgress:(id)arg1;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg1;
- (unsigned long long)maxProgress;
- (void)setMaxProgress:(unsigned long long)arg1;

@end

