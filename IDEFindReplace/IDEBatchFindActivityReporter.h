/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEActivityReporter.h"

@class DVTMapTable;

@interface IDEBatchFindActivityReporter : IDEActivityReporter
{
    DVTMapTable *_queryToObservers;
    id _queryCreationObserer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_observerQuery:(id)arg1 inWorkspace:(id)arg2;
- (id)_patternAttributes;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

