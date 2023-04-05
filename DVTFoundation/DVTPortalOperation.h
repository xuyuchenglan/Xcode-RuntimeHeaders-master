/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTOperationGroup.h>

@class DTDKDeveloperPortalService, DVTPortalOperationToken, DVTStackBacktrace, NSArray, NSString;

@interface DVTPortalOperation : DVTOperationGroup
{
    _Bool _cancelOnDependencies;
    _Bool _cancelOnSuboperations;
    DVTPortalOperationToken *_token;
    DTDKDeveloperPortalService *_service;
    DVTStackBacktrace *_creationBacktrace;
    NSString *_name;
}

+ (id)keyPathsForValuesAffectingResultCode;
+ (id)operationForService:(id)arg1;
+ (id)operationForService:(id)arg1 withToken:(id)arg2;
+ (id)operationWithBlock:(id)arg1;
+ (id)operationWithName:(id)arg1;
+ (id)operationWithToken:(id)arg1;
+ (id)operationWithToken:(id)arg1 name:(id)arg2 andBlock:(id)arg3;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) DTDKDeveloperPortalService *service; // @synthesize service=_service;
@property _Bool cancelOnSuboperations; // @synthesize cancelOnSuboperations=_cancelOnSuboperations;
@property _Bool cancelOnDependencies; // @synthesize cancelOnDependencies=_cancelOnDependencies;
- (void).cxx_destruct;
- (long long)resultCode;
@property(readonly) NSArray *responseWrappers;
@property(readonly) NSArray *responseDictionaries;
@property(readonly) NSArray *errors;
- (id)error;
@property(retain) DVTPortalOperationToken *token; // @synthesize token=_token;
- (id)description;
- (void)_updateCaches;
- (void)_success;
- (void)_failure:(id)arg1;
- (void)main;
- (void)start;
- (void)addSuboperations:(id)arg1 withQueue:(id)arg2;
- (double)_retryDelay;
- (unsigned long long)_maxRetryAttempts;
- (_Bool)_shouldRetryOnServiceError:(id)arg1;
- (id)init;

@end

