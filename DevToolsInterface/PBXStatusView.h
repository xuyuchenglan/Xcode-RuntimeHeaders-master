/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSProgressIndicator, NSTextField;

@interface PBXStatusView : NSView
{
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusField;
    long long _curPriority;
}

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)clear;
- (void)setStatusString:(id)arg1 andProgress:(long long)arg2 priority:(long long)arg3;
- (void)setStatusString:(id)arg1 priority:(long long)arg2;
- (void)_clearCompletedStatusOperation:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

