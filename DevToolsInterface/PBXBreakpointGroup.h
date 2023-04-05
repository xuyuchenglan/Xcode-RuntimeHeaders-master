/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PBXBreakpointGroup : NSObject
{
    NSString *_title;
    NSMutableArray *_breakpoints;
    NSMutableArray *_unvalidatedbreakpoints;
    NSString *_identifierString;
    BOOL _haveSorted;
}

- (long long)compareToBreakpointGroup:(id)arg1;
- (id)sortedBreakpoints;
- (id)breakpoints;
- (void)validateBreakpoints;
- (void)addBreakpoint:(id)arg1;
- (void)invalidateBreakpoints;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)identifierString;
- (void)dealloc;
- (id)initWithIdentifierString:(id)arg1;

@end

