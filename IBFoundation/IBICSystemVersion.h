/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICMultipartImageRepSlotComponent.h>

@class NSString;

@interface IBICSystemVersion : IBICMultipartImageRepSlotComponent
{
    NSString *_platform;
    NSString *_marketingVersion;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;
+ (id)contentsJSONKey;
@property(readonly) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (BOOL)isEqualToSchemaImageRepIDComponent:(id)arg1;
- (BOOL)isEqualToSystemVersion:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;

@end

