/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEDebugProcess-Protocol.h"

@class DBGDebugSession, DBGStackFrame, DBGThread, DVTObservingToken, DVTStackBacktrace, IDELaunchSession, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface DBGProcess : NSObject <IDEDebugProcess, DVTInvalidation>
{
    DVTObservingToken *_codeModulesObserver;
    DBGDebugSession *_parentDebugSession;
    NSString *_associatedProcessUUID;
    int _controlState;
    NSArray *_threads;
    BOOL _threadsAutoRefreshStackFramesDone;
    NSMutableSet *_threadsAutoRefreshStackFrames;
    NSMutableSet *_codeModules;
    NSMutableDictionary *_codeModuleForPathTable;
    DBGThread *_currentThread;
    DBGStackFrame *_currentStackFrame;
    NSString *_name;
    int _PID;
    NSMutableArray *_memoryDatas;
    DVTObservingToken *_currentStackFrameValidityObserver;
    DVTStackBacktrace *_currentStackFrameBacktraceWhenSet;
    BOOL _usesPIDInName;
    BOOL _nameConflictWithOtherRunningProcess;
    BOOL _allSameSchemes;
}

+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingThreads;
+ (void)initialize;
@property(nonatomic) BOOL allSameSchemes; // @synthesize allSameSchemes=_allSameSchemes;
@property(nonatomic) BOOL nameConflictWithOtherRunningProcess; // @synthesize nameConflictWithOtherRunningProcess=_nameConflictWithOtherRunningProcess;
@property(nonatomic) BOOL usesPIDInName; // @synthesize usesPIDInName=_usesPIDInName;
@property BOOL threadsAutoRefreshStackFramesDone; // @synthesize threadsAutoRefreshStackFramesDone=_threadsAutoRefreshStackFramesDone;
@property(nonatomic) int PID; // @synthesize PID=_PID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(nonatomic) int controlState; // @synthesize controlState=_controlState;
@property(readonly) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
@property(readonly) DBGDebugSession *parentDebugSession; // @synthesize parentDebugSession=_parentDebugSession;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) unsigned long long addressByteSize;
- (id)_stackFrameInThread:(id)arg1 frameID:(unsigned long long)arg2;
- (id)stackFrameForThreadID:(unsigned long long)arg1 frameID:(unsigned long long)arg2;
- (void)removeMemoryData:(id)arg1;
- (void)autoUpdateAllMemoryDatas;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(id)arg3;
- (void)rawMemoryDataForAddressExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(id)arg3;
- (id)memoryDataForUUID:(id)arg1;
- (id)memoryDataForAddressOfExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)_handleCodeModuleChange:(id)arg1;
- (id)codeModuleForPath:(id)arg1;
- (BOOL)hasThreadsAutoRefreshStackFrames;
@property(retain, nonatomic) DBGStackFrame *currentStackFrame; // @synthesize currentStackFrame=_currentStackFrame;
@property(retain, nonatomic) DBGThread *currentThread; // @synthesize currentThread=_currentThread;
- (void)deregisterThreadAutoRefreshesStackFrames:(id)arg1;
- (void)registerThreadAutoRefreshesStackFrames:(id)arg1;
- (BOOL)_shouldSelectFirstSymbolFrame;
- (BOOL)_shouldLookForStackFrameWithDebugSymbols;
- (void)setInitialCurrentStackFrame;
- (BOOL)isPaused;
- (void)invalidateUnsuedThreadsAfterCallToSetThreads:(id)arg1;
- (void)_resetName;
@property(readonly) NSString *displayStatus;
@property(readonly) IDELaunchSession *launchSession;
- (id)initWithDebugSession:(id)arg1;
- (void)_detectNameConflict:(char *)arg1 sameScheme:(char *)arg2 forLaunchSession:(id)arg3 inLaunchSessions:(id)arg4 add:(BOOL)arg5;
- (void)_detectNameConflict:(char *)arg1 sameScheme:(char *)arg2 forLaunchSession:(id)arg3 otherLaunchSession:(id)arg4;
- (id)contentDelegateUIExtensionIdentifier;

// Remaining properties
@property(copy) NSSet *codeModules; // @dynamic codeModules;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *memoryDatas; // @dynamic memoryDatas;
@property(copy) NSMutableSet *mutableCodeModules; // @dynamic mutableCodeModules;
@property(retain) NSMutableArray *mutableMemoryDatas; // @dynamic mutableMemoryDatas;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

