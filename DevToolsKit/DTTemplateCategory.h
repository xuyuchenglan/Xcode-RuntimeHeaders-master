/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage, NSMutableArray, NSString;

@interface DTTemplateCategory : NSObject
{
    NSString *displayName;
    NSImage *image;
    NSMutableArray *templateItems;
    NSString *identifier;
}

@property(readonly) NSString *identifier; // @synthesize identifier;
@property(readonly) NSImage *image; // @synthesize image;
@property(readonly) NSString *displayName; // @synthesize displayName;
- (void)addTemplateItem:(id)arg1;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 image:(id)arg2 templateItems:(id)arg3 identifier:(id)arg4;

@end

