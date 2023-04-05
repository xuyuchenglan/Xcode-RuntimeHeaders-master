/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEUnitTestsObserver-Protocol.h"

@class DVTOperation, NSMutableArray, NSMutableDictionary;

@interface IDEUnitTestsRunnerAdaptor : NSObject <IDEUnitTestsObserver>
{
    NSMutableDictionary *_operationToTestRunnerLookup;
    NSMutableArray *_testsStack;
    DVTOperation *_currentOperation;
}

- (void).cxx_destruct;
- (void)testOperationGroupDidFinish;
- (void)testOperation:(id)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testDidOutput:(id)arg1;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testOperationDidStartExecution:(id)arg1;
- (id)parsedTestFromTestClass:(id)arg1 method:(id)arg2;
- (id)currentTestRecord;
- (id)popTestRecord;
- (void)pushTestRecord:(id)arg1;
- (id)currentTestRunner;
- (void)registerOperations:(id)arg1 forTestRunner:(id)arg2;
- (id)init;

@end

