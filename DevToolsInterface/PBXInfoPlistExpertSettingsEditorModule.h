/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXPlistEditorModule.h>

@class PBXTarget;

@interface PBXInfoPlistExpertSettingsEditorModule : PBXPlistEditorModule
{
    PBXTarget *_target;
    BOOL _handlingPListChangeNotification;
    double _viewHeightSansOutline;
    long long _numRowsOutlineSizedTo;
}

- (void)takeUIConfigurationFromDictionary:(id)arg1;
- (void)addUIConfigurationToMutableDictionary:(id)arg1;
- (void)update;
- (void)_resizeViewIfNeeded;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)targetProductSettingsDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)propertyListChanged:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

