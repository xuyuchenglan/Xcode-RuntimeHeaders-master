/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEContainer, NSArray;

@interface IDEBuildIssueChange : NSObject
{
    int _type;
    NSArray *_issues;
    id _providerContext;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
}

+ (id)setChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
+ (id)removeChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
+ (id)additionChangeWithIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
@property(retain, nonatomic) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) IDEContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id providerContext; // @synthesize providerContext=_providerContext;
@property(retain, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 issues:(id)arg2 forProviderContext:(id)arg3 container:(id)arg4 blueprint:(id)arg5;

@end

