/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTFindResult.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class DVTRegularExpressionMatch;

@interface DVTFindRegularExpressionResult : DVTFindResult <NSCoding, NSCopying>
{
    DVTRegularExpressionMatch *_match;
}

@property(retain) DVTRegularExpressionMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (id)stringForReplacementString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFoundLocation:(id)arg1 withRange:(struct _NSRange)arg2 inContext:(id)arg3 andRegexMatch:(id)arg4 foundUsingDescriptor:(id)arg5;

@end

