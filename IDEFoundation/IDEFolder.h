/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEContainer.h>

@class DVTDispatchLock;

@interface IDEFolder : IDEContainer
{
    DVTDispatchLock *_generationLock;
    unsigned long long _updateOperationGeneration;
}

+ (BOOL)supportsMultipleInstancesPerFilePath;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (BOOL)_THREAD_shouldAddFileWithName:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (void)_filePathDidChange:(id)arg1;
- (id)_THREAD_fileNamesAtFilePath:(id)arg1;
- (void)_updateSubitemsWithFileNames:(id)arg1;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (id)createRootGroup;

@end

