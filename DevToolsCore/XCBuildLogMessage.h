/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCActivityLogMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, XCTextFileLocation;

@interface XCBuildLogMessage : XCActivityLogMessage <NSCopying>
{
    XCTextFileLocation *_fileLocation;
    NSString *_categoryIdent;
    NSArray *_secondaryFileLocations;
}

+ (id)messageWithTitle:(id)arg1 filePath:(id)arg2 lineNumber:(unsigned long long)arg3;
+ (id)messageWithTitle:(id)arg1 fileLocation:(id)arg2;
- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (BOOL)isHeaderInclusionMessage;
- (BOOL)isContextInfoMessage;
- (BOOL)isAnalyzerEventStepMessage;
- (BOOL)isAnalyzerControlFlowStepMessage;
- (BOOL)isAnalyzerStepMessage;
- (BOOL)isAnalyzerResultMessage;
- (BOOL)isAnalyzerWarningMessage;
- (BOOL)isNoticeMessage;
- (BOOL)isWarningMessage;
- (BOOL)isErrorMessage;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfWarnings;
- (unsigned long long)totalNumberOfErrors;
- (void)setSecondaryFileLocations:(id)arg1;
- (id)secondaryFileLocations;
- (void)setCategoryIdentifier:(id)arg1;
- (id)categoryIdentifier;
- (unsigned long long)lineNumber;
- (id)displayFilePath;
- (id)filePath;
- (id)fileLocation;
- (id)shortTitle;
- (id)title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 filePath:(id)arg2;
- (id)initWithTitle:(id)arg1 filePath:(id)arg2 lineNumber:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg1 fileLocation:(id)arg2;
- (unsigned long long)buildLogItemIdentifier;
- (unsigned long long)buildLogTranscriptCharacterRangeBaseForSubitems;
- (struct _NSRange)buildLogTranscriptCharacterRange;
- (BOOL)haveAnyMessagesBeenSuppressed;
- (unsigned long long)totalNumberOfItems;
- (id)buildable;
- (BOOL)isActive;
- (id)nextSiblingItem;
- (id)subitems;
- (BOOL)isToplevelItem;
- (BOOL)isHeaderInclusion;
- (BOOL)isContextInfo;
- (BOOL)isNotice;
- (BOOL)isError;
- (BOOL)isWarning;
- (BOOL)isAnalyzerResult;
- (BOOL)isRuleInvocation;
- (BOOL)isTargetHeadingItem;
- (id)fileLocations;
- (id)shortMessageString;
- (id)messageString;
- (int)type;

@end
