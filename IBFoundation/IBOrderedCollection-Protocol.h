/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBCollection-Protocol.h"

@protocol IBOrderedCollection <IBCollection>
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(id)arg4;
- (id)ib_firstObject;
- (long long)indexOfObject:(id)arg1;
@end

