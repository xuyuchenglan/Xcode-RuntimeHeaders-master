/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PBXTSTaskDelegate <NSObject>
- (void)task:(id)arg1 outputData:(id)arg2;
- (void)taskDidStop:(id)arg1 stopRequested:(BOOL)arg2;
- (void)taskDidStart:(id)arg1;
- (void)task:(id)arg1 failureMessage:(id)arg2;
@end

