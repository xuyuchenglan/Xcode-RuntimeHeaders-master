/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlMergeController.h>

@interface IDESourceControlConflictResolutionController : IDESourceControlMergeController
{
    BOOL _shouldDisableMergeSaving;
}

+ (void)replaceItemAtFilePath:(id)arg1 withFileWrapper:(id)arg2;
+ (int)binaryConflictMergeDirection:(id)arg1;
+ (BOOL)isBinaryConflictResolutionMergeData:(id)arg1;
@property BOOL shouldDisableMergeSaving; // @synthesize shouldDisableMergeSaving=_shouldDisableMergeSaving;
- (void)completeConflictResolution;

@end

