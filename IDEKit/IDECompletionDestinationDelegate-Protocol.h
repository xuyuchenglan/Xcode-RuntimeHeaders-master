/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDECompletionDestinationDelegate <NSObject>
- (id)targetWorkspacesForDestinationManager:(id)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
@end
