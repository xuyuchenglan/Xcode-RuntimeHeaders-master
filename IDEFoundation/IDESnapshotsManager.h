/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTPerformanceMetric;

@interface IDESnapshotsManager : NSObject
{
    BOOL _areSnapshotsEnabled;
    DVTPerformanceMetric *_metric;
}

+ (id)sourceControlSystemUsedForSnapshotsWithError:(id *)arg1;
+ (id)snapshotsLogAspect;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)restoreSnapshot:(id)arg1 fromRepositoryAtPath:(id)arg2 toLocation:(id)arg3 completionBlock:(id)arg4;
- (id)tmpFileForFileAtOriginalLocation:(id)arg1 fromSnapshot:(id)arg2 fromRepositoryAtPath:(id)arg3 completionBlock:(id)arg4;
- (id)modifiedFilesBetweenSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 fromRepositoryAtPath:(id)arg3 completionBlock:(id)arg4;
- (id)snapshotsForRepositoryAtPath:(id)arg1 completionBlock:(id)arg2;
@property BOOL areSnapshotsEnabled; // @synthesize areSnapshotsEnabled=_areSnapshotsEnabled;
- (id)snapshotsFolderPath;
- (id)snapshotExtension;

@end

