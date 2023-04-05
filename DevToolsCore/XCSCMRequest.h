/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCSCMOperationDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, XCSCMOperation, XCSCMReferenceDictionary;

@interface XCSCMRequest : NSObject <XCSCMOperationDelegate>
{
    NSNumber *_idNumber;
    XCSCMReferenceDictionary *_referenceDictionary;
    XCSCMReferenceDictionary *_finishedReferenceDictionary;
    NSDictionary *_arguments;
    id <XCSCMRequestDelegate> _delegate;
    NSMutableArray *_queue;
    XCSCMOperation *_activeProcess;
    long long _totalOperationsToProcess;
    long long _successfulSteps;
    long long _totalSteps;
    NSString *_requestState;
}

+ (BOOL)isWrapperFileReference:(id)arg1 forProject:(id)arg2;
+ (id)authenticationInfoForProject:(id)arg1;
+ (id)authenticationInfoForDirectory:(id)arg1;
+ (id)authenticationEnvironmentForProject:(id)arg1;
+ (id)authenticationEnvironmentForDirectory:(id)arg1;
+ (BOOL)authenticateProject:(id)arg1 user:(id)arg2 password:(id)arg3;
+ (BOOL)authenticateDirectory:(id)arg1 forUser:(id)arg2 password:(id)arg3;
+ (id)networkHostForDirectory:(id)arg1 forProject:(id)arg2;
+ (BOOL)isAuthenticatedProject:(id)arg1;
+ (BOOL)isAuthenticatedDirectory:(id)arg1 forProject:(id)arg2;
+ (BOOL)isFileUnderSourceControl:(id)arg1 forProject:(id)arg2;
+ (BOOL)isABranchFileReference:(id)arg1;
- (void)_setActiveProcess:(id)arg1;
- (id)statusViewString;
- (id)flattenReferencesFromArray:(id)arg1;
- (id)referenceForPath:(id)arg1;
- (id)finishedReferences;
- (id)references;
- (void)setReferences:(id)arg1;
- (id)sourceControlManager;
- (id)argumentsDictionary;
- (void)setArgumentsDictionary:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)idNumber;
- (void)_setIdNumber:(id)arg1;
- (long long)totalSteps;
- (void)setTotalSteps:(long long)arg1;
- (long long)successfulSteps;
- (void)_setSuccessfulSteps:(long long)arg1;
- (id)requestState;
- (void)setRequestState:(id)arg1;
- (void)_setQueue:(id)arg1;
- (void)operation:(id)arg1 reportedObject:(id)arg2 forKey:(id)arg3 forItemAtPath:(id)arg4;
- (void)operation:(id)arg1 wasSuspendedWithCode:(id)arg2 message:(id)arg3;
- (void)operation:(id)arg1 reportedError:(id)arg2;
- (void)operation:(id)arg1 reportedMessage:(id)arg2;
- (void)operation:(id)arg1 finishedParsingForItemAtPath:(id)arg2;
- (void)cleanup;
- (void)requestCompleted;
- (void)flushQueue;
- (void)suspendQueue;
- (void)resumeQueue;
- (void)queueOperationsFromArray:(id)arg1;
- (void)queueOperation:(id)arg1;
- (long long)totalOperationsToProcess;
- (id)description;
- (id)touchedReferences;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)suspend;
- (void)run;
- (void)performSetupForOperation:(id)arg1 withArguments:(id)arg2 references:(id)arg3;
- (void)dealloc;
- (id)initWithID:(id)arg1;

@end

