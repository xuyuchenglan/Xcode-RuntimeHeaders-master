/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTObservingToken, IDEDocPDFDownloader;

@interface IDEDocPDFDownloadController : NSObject
{
    IDEDocPDFDownloader *_downloader;
    DVTObservingToken *_downloadObservingToken;
    id _completionHandler;
    double _editorLoadingProgress;
}

@property double editorLoadingProgress; // @synthesize editorLoadingProgress=_editorLoadingProgress;
- (void).cxx_destruct;
- (void)downloadFinished:(id)arg1;
- (void)beginDownloadWithCompletionHandler:(id)arg1;
- (id)initWithRequestForPDF:(id)arg1;

@end

