/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEArchivedApplicationsViewer/AAVAssistant.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSString, NSView;

@interface AAVShareCompletionAssistant : AAVAssistant <NSOpenSavePanelDelegate>
{
    _Bool _useEnterpriseDistribution;
    _Bool imagesNeedShine;
    NSString *applicationURL;
    NSString *applicationTitle;
    NSString *subtitle;
    NSString *largeImageURL;
    NSString *smallImageURL;
    NSView *enterpriseAccessoryView;
}

@property _Bool imagesNeedShine; // @synthesize imagesNeedShine;
@property(retain) NSView *enterpriseAccessoryView; // @synthesize enterpriseAccessoryView;
@property(copy) NSString *smallImageURL; // @synthesize smallImageURL;
@property(copy) NSString *largeImageURL; // @synthesize largeImageURL;
@property(copy) NSString *subtitle; // @synthesize subtitle;
@property(copy) NSString *applicationTitle; // @synthesize applicationTitle;
@property(copy) NSString *applicationURL; // @synthesize applicationURL;
- (void).cxx_destruct;
- (void)finishWithCompletionBlock:(id)arg1;
@property(nonatomic) _Bool useEnterpriseDistribution; // @synthesize useEnterpriseDistribution=_useEnterpriseDistribution;
- (void)updateEnterpriseAccessoryViewHeightAnimated:(BOOL)arg1;
- (BOOL)canFinish;

@end

