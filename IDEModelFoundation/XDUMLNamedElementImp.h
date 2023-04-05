/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEModelFoundation/XDUMLElementImp.h>

#import "XDUMLNamedElement-Protocol.h"

@class NSMutableArray, NSString;

@interface XDUMLNamedElementImp : XDUMLElementImp <XDUMLNamedElement>
{
    NSString *_name;
    unsigned long long _visibility;
    NSMutableArray *_containingBuckets;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeContainingBucket:(id)arg1;
- (void)addContainingBucket:(id)arg1;
- (id)separator;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)visibility;
- (id)namespace;
- (id)qualifiedName;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

