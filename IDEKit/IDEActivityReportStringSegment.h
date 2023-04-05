/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface IDEActivityReportStringSegment : NSObject
{
    id _frontSeparator;
    id _backSeparator;
    id _stringValue;
    double _priority;
}

+ (id)activityReportStringSegmentWithDictionaryRepresentation:(id)arg1;
@property(readonly) id frontSeparator; // @synthesize frontSeparator=_frontSeparator;
@property(readonly) id backSeparator; // @synthesize backSeparator=_backSeparator;
@property(readonly) double priority; // @synthesize priority=_priority;
@property(readonly) id stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) long long segmentType;
- (id)description;
- (id)attributedStringValueWithDefaultAttributes:(id)arg1 hasFrontSeparator:(BOOL)arg2 hasBackSeparator:(BOOL)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithString:(id)arg1 priority:(double)arg2;
- (id)initWithString:(id)arg1 priority:(double)arg2 frontSeparator:(id)arg3 backSeparator:(id)arg4;

@end

