/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPathCellDelegate-Protocol.h"

@protocol IDEPathCellDelegate <NSPathCellDelegate>

@optional
- (void)pathCell:(id)arg1 didEndDragForComponentCell:(id)arg2;
- (BOOL)pathCell:(id)arg1 beginDragForComponentCell:(id)arg2;
- (id)pathCell:(id)arg1 toolTipForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCell:(id)arg1 titleForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCellNoSelectionTitle;
- (struct CGPoint)pathCell:(id)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldEnableSelection:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldPopUpMenuForPathComponentCell:(id)arg2 item:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
@end

