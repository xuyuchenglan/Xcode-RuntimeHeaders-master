/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAssistant.h"

@class NSArray;

@interface Xcode3AddFileReferencesAssistant : IDEAssistant
{
    BOOL _canFinish;
    NSArray *_targetWrappers;
}

@property(copy) NSArray *targetWrappers; // @synthesize targetWrappers=_targetWrappers;
@property BOOL canFinish; // @synthesize canFinish=_canFinish;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)finishWithCompletionBlock:(id)arg1;
- (void)viewDidInstall;
- (void)setAssistantContext:(id)arg1;
- (void)loadView;

@end

