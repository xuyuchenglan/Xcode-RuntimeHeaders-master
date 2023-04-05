/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface CSConfig : NSObject
{
    NSMutableDictionary *plistCache;
    NSMutableDictionary *_configurationLastModDateByName;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain) NSMutableDictionary *configurationLastModDateByName; // @synthesize configurationLastModDateByName=_configurationLastModDateByName;
- (void).cxx_destruct;
- (void)clearCacheIfConfigChanged:(id)arg1;
- (void)clearCache;
- (id)configForName:(id)arg1;
- (id)cachedPlistAtPath:(id)arg1;
- (id)readPlistAtPath:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

