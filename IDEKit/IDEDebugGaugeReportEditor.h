/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEEditor.h>

@class DVTStackView_AppKitAutolayout, IDEDebugGaugeReportTopSection, IDELaunchSession, NSLayoutConstraint, NSScrollView;

@interface IDEDebugGaugeReportEditor : IDEEditor
{
    IDELaunchSession *_launchSession;
    IDEDebugGaugeReportTopSection *_reportTopSection;
    id <IDEDebugGaugeReportContentDelegate> _contentDelegate;
    id <IDEDebugGaugeReportTopSectionContentDelegate> _topSectionContentDelegate;
    double _minimumWidth;
    NSScrollView *_mainContentScrollView;
    DVTStackView_AppKitAutolayout *_stackView;
    NSLayoutConstraint *_stackViewHeightConstraintToBeRemoved;
    NSLayoutConstraint *_minimumWidthConstraint;
}

@property __weak NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property __weak NSLayoutConstraint *stackViewHeightConstraintToBeRemoved; // @synthesize stackViewHeightConstraintToBeRemoved=_stackViewHeightConstraintToBeRemoved;
@property __weak DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSScrollView *mainContentScrollView; // @synthesize mainContentScrollView=_mainContentScrollView;
@property(readonly) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(retain, nonatomic) id <IDEDebugGaugeReportContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)attachInstrumentsWithToolIdentifer:(id)arg1;
- (void)_profileOptionAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_profileWithToolIdentifer:(id)arg1 detachOrNew:(unsigned long long)arg2;
- (void)loadView;
- (void)_fixUpScrollView;
- (void)_handleContentDelegateDidChange;
- (id)launchSession;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

@end

