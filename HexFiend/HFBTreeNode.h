/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface HFBTreeNode : NSObject
{
    unsigned long long rc;
    unsigned long long subtreeLength;
    HFBTreeNode *left;
    HFBTreeNode *right;
    id children[10];
}

- (id)shortDescription;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

