/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PBXLSDebuggingSession;

@interface PBXLSTypeController : NSObject
{
    PBXLSDebuggingSession *_debuggingSession;
}

+ (id)typeControllerForSession:(id)arg1;
- (id)typeByExpressionString:(id)arg1;
- (id)debuggingSession;
- (void)setDebuggingSession:(id)arg1;
- (void)dealloc;

@end

