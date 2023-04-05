/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileManager, NSMutableDictionary;

@interface DVTDownloadableManagerIOCache : NSObject
{
    NSFileManager *_fileManager;
    NSMutableDictionary *_fileExistsCache;
    NSMutableDictionary *_shasumCache;
    NSMutableDictionary *_packageVersionCache;
}

- (void).cxx_destruct;
- (id)packageVersionOfIdentifer:(id)arg1 atInstallPrefix:(id)arg2;
- (id)shasumOfFileAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1;
- (void)clear;
- (id)init;

@end

