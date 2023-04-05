/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSRunLoop, NSString;

@interface DVTTask : NSObject
{
    NSMutableDictionary *_environment;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSArray *_preferredArchitectures;
    NSMutableArray *_fileDescriptorsToKeepOpen;
    NSNumber *_exitStatus;
    NSNumber *_signalStatus;
    NSNumber *_processIdentifier;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSRunLoop *_waitLoop;
    NSString *_waitRunLoopMode;
    id _runLoopSignaler;
    int _runLoopSetupLock;
    int _runLoopSignal;
    NSMutableSet *_fileHandlesToCloseAfterLaunching;
    NSNumber *_argumentEncoding;
}

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
@property(copy) NSNumber *argumentEncoding; // @synthesize argumentEncoding=_argumentEncoding;
@property(copy) NSString *waitRunLoopMode; // @synthesize waitRunLoopMode=_waitRunLoopMode;
@property(copy) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy) NSArray *preferredArchitectures; // @synthesize preferredArchitectures=_preferredArchitectures;
@property(copy) NSNumber *signalStatus; // @synthesize signalStatus=_signalStatus;
@property(copy) NSNumber *exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL isRunning;
- (void)markFileHandleToStayOpenAcrossExec:(id)arg1;
- (void)markFileDescriptorToStayOpenAcrossExec:(int)arg1;
- (void)hookStandardInputToPipe:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)hookStandardErrorToPipe:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)hookStandardOutputToPipe:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)hookStandardInputToFileHandle:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)hookStandardErrorToFileHandle:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)hookStandardOutputToFileHandle:(id)arg1 closingParentEndOnLaunch:(BOOL)arg2;
- (void)addFileHandleToCloseAfterLaunch:(id)arg1;
- (BOOL)runReturningStandardOutput:(id *)arg1 standardError:(id *)arg2 error:(id *)arg3;
- (BOOL)runReturningStandardOutput:(id *)arg1 standardError:(id *)arg2 standardInput:(id)arg3 error:(id *)arg4;
- (void)waitUntilExit;
- (void)waitUntilExitRunningRunLoopInWaitMode;
- (BOOL)launchReturningError:(id *)arg1;
- (id)installRunLoopSignal;
- (BOOL)launchRunningTerminationHandlerOnQueue:(struct dispatch_queue_s *)arg1 error:(id *)arg2 terminationHandler:(id)arg3;
- (id)applyFileDescriptorMappingsToFileActions:(void **)arg1;
- (void)warnAboutBogusFileDescriptors;
- (id)applyPreferredArchitecturesToSpawnAttributes:(void **)arg1;
- (void)installEventHandlersForChildPID:(int)arg1 queue:(struct dispatch_queue_s *)arg2 terminationHandler:(id)arg3;
- (void)setValue:(id)arg1 forEnvironmentVariableNamed:(id)arg2;
- (id)init;

@end

