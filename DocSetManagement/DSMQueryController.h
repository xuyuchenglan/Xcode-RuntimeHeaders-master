/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DSMQueryController : NSObject
{
}

+ (id)sharedQueryController;
- (id)runBookTitleQuery:(id)arg1;
- (void)runAsynchronousBookTitleQuery:(id)arg1 delegate:(id)arg2;
- (id)_runBookTitleQuery:(id)arg1;
- (BOOL)doesNode:(id)arg1 matchSearchString:(id)arg2 withMatchType:(unsigned long long)arg3;
- (id)managedObjectContextForDocSet:(id)arg1;
- (void)_mainThreadCallbackBookTitleDelegateWithResults:(id)arg1;
- (id)docSetNodesFromObjectIDs:(id)arg1;
- (void)runAsynchronousFullTextQuery:(id)arg1 restrictToNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (void)runAsynchronousFullTextQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousFullTextQuery:(id)arg1 maximumRelevance:(double *)arg2;
- (id)runSynchronousFullTextQuery:(id)arg1 restrictToNodes:(id)arg2 maximumRelevance:(double *)arg3;
- (void)runAsynchronousAPIQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousAPIQuery:(id)arg1;
- (id)runSynchronousAPIQueryForAppleRef:(id)arg1 docSets:(id)arg2;
- (id)tokenQueryDictionaryWithOptions:(id)arg1;

@end

