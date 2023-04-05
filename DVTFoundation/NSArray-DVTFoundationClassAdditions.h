/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@interface NSArray (DVTFoundationClassAdditions)
- (BOOL)dvt_isNonEmpty;
- (BOOL)dvt_hasPrefix:(id)arg1;
- (id)dvt_stringByConcatenatingAsCommandLineArguments;
- (id)dvt_arrayByAddingObjects:(id)arg1;
- (id)dvt_subarrayFromIndex:(long long)arg1;
- (id)dvt_subarrayAfterIndex:(long long)arg1;
- (id)dvt_arrayByReversingObjects;
- (BOOL)dvt_areAnyObjectsPassingTest:(id)arg1;
- (BOOL)dvt_areAllObjectsPassingTest:(id)arg1;
- (id)dvt_objectsPassingTest:(id)arg1;
- (id)dvt_objectByFoldingWithBlock:(id)arg1;
- (id)dvt_onlyObject;
- (id)dvt_firstObjectPassingTest:(id)arg1;
- (id)dvt_firstObject;
- (id)dvt_arrayByGroupingAdjacentObjectsUsingBlock:(id)arg1;
- (id)dvt_arrayByApplyingBlock:(id)arg1;
- (id)dvt_arrayByApplyingSelector:(SEL)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1 inRange:(struct _NSRange)arg2;
@end

