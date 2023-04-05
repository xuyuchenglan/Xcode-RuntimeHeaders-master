/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEActivityReporter.h"

@class DVTNotificationToken, IDEActivityReport;

@interface IBHeaderScanningActivityReporter : IDEActivityReporter
{
    DVTNotificationToken *headerScannerWillBeginParsingToken;
    DVTNotificationToken *headerScannerDidCompleteParseSetToken;
    DVTNotificationToken *headerScannerIsIdleToken;
    IDEActivityReport *workspaceActivityReport;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)cancelActivityReport;
- (void)updateActivityReport:(id)arg1;
- (void)publishActivityReport:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupHeaderScannerObserving:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end

