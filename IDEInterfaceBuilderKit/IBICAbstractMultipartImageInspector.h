/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorViewController.h"

@class NSArrayController;

@interface IBICAbstractMultipartImageInspector : IDEInspectorViewController
{
    NSArrayController *_multipartImageController;
}

+ (void)installPerSuggestionSetPropertiesIfNeeded;
+ (void)installKVODependencyForSuggestionSet:(id)arg1;
+ (void)installGetterForSuggestionSet:(id)arg1;
+ (void)installSetterForSuggestionSet:(id)arg1;
+ (id)propertyNameForPresentingValueForSuggestionSet:(id)arg1;
+ (id)inspectedArrayControllerKeyPaths;
+ (Class)imageRepClass;
+ (Class)imageSetClass;
+ (Class)imageRepSlotClass;
+ (id)slotSuggestionSets;
- (void).cxx_destruct;
- (id)sliceElement;
- (void)addPostSuggestionSetContent:(id)arg1 pusherStorage:(void)arg2;
- (void)setContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

