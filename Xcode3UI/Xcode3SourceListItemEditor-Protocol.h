/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class DVTSourceExpression, NSArray, Xcode3ProjectEditor;

@protocol Xcode3SourceListItemEditor <NSObject>
+ (id)localizedSourceListItemEditorName;
+ (BOOL)canInspectBlueprint:(id)arg1;
@property(retain) Xcode3ProjectEditor *projectEditor;

@optional
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(retain, nonatomic) id inspectedBlueprint;
@property(copy, nonatomic) NSArray *inspectedBlueprints;
- (id)titleKeyPathForToolbarButtonWithIdentifier:(id)arg1;
- (SEL)menuSourceSelectorForToolbarButtonWithIdentifier:(id)arg1;
- (id)supportedToolbarButtonIdentifiers;
- (void)selectLocations:(id)arg1;
- (id)currentSelectedLocations;
@end

