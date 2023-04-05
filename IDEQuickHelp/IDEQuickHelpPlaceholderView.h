/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEUtilityPlaceholderView.h"

@class NSButton;

@interface IDEQuickHelpPlaceholderView : IDEUtilityPlaceholderView
{
    NSButton *_searchButton;
    id <IDEQuickHelpPlaceholderViewDelegate> _delegate;
}

@property __weak id <IDEQuickHelpPlaceholderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSButton *searchButton; // @synthesize searchButton=_searchButton;
- (void).cxx_destruct;
- (void)clickSearchButton:(id)arg1;
- (void)setShowsDocumentationSearch:(BOOL)arg1;
- (void)layoutBottomUp;
- (id)initWithFrame:(struct CGRect)arg1;

@end

