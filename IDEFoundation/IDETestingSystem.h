/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDETestingSystem : NSObject
{
    NSString *_name;
    NSString *_identifier;
    Class _testableClass;
}

+ (id)testingSystems;
+ (id)testingSystemForIdentifier:(id)arg1;
+ (id)_testingSystemForExtension:(id)arg1;
+ (void)initialize;
@property(readonly) Class testableClass; // @synthesize testableClass=_testableClass;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTestingSystemExtension:(id)arg1;

@end

