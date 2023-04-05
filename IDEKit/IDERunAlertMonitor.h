/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEWorkspaceTabController;

@interface IDERunAlertMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspaceTabController *_workspaceTabController;
    id _currentLaunchSessionStateNotificationObserver;
    id _currentLaunchSessionTargetOutputNotificationObserver;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)executionComplete;
- (void)executionStart;
- (void)_setHasDeterminedOutput:(id)arg1;
- (BOOL)_hasDeterminedOutput;
- (void)_setHasDoneExecutionStopped;
- (BOOL)_hasDoneExecutionStopped;
- (void)_setHasDoneExecutionStarted;
- (BOOL)_hasDoneExecutionStarted;
- (void)_runEvent:(id)arg1 inWorkspace:(id)arg2 modifyContext:(id)arg3;
- (void)_targetOutputStateChanged;
- (BOOL)_targetHasOutput:(id)arg1;
- (id)_createInternalHideIfNoOutputAlertForRunCompleteEvent:(id)arg1;
- (id)initWithWorkspaceTabController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

