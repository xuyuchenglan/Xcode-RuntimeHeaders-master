/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorLayoutGroup.h>

@interface IDEInspectorLayoutGroupWrapper : IDEInspectorLayoutGroup
{
    CDStruct_bf6d4a14 _subgroupInset;
}

@property CDStruct_d2b197d1 subgroupInset; // @synthesize subgroupInset=_subgroupInset;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (id)subgroup;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (id)attributeDescription;
- (id)initWithSubgroupInset:(CDStruct_d2b197d1)arg1;

@end

