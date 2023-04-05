/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class DVTFilePath;

@interface IDEArchivePathsSnapshot : NSObject <NSCopying>
{
    DVTFilePath *_archivePath;
    DVTFilePath *_archiveProductsPath;
    DVTFilePath *_archiveDSYMsPath;
}

@property(retain) DVTFilePath *archiveDSYMsPath; // @synthesize archiveDSYMsPath=_archiveDSYMsPath;
@property(retain) DVTFilePath *archiveProductsPath; // @synthesize archiveProductsPath=_archiveProductsPath;
@property(retain) DVTFilePath *archivePath; // @synthesize archivePath=_archivePath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

