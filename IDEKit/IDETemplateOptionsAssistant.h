/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import "NSComboBoxDataSource-Protocol.h"

@class NSArray, NSTextField, NSView;

@interface IDETemplateOptionsAssistant : IDETemplateInstantiationAssistant <NSComboBoxDataSource>
{
    BOOL _canGoForward;
    NSView *_mainView;
    NSTextField *_firstTextField;
    NSArray *_classNames;
    NSArray *_allSortedOptions;
}

@property(readonly) NSArray *allSortedOptions; // @synthesize allSortedOptions=_allSortedOptions;
@property(retain) NSTextField *firstTextField; // @synthesize firstTextField=_firstTextField;
@property BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
- (void).cxx_destruct;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)classNamesForComboBox:(id)arg1;
- (void)writeStateToUserDefaults;
- (void)restoreSelectionFromUserDefaults;
- (void)setOptionsPersistanceDictionary:(id)arg1;
- (id)optionsPersistanceDictionary;
- (void)setupOptionViews;
- (id)additionalOptions;
- (double)requiredViewSpacingForOption:(id)arg1;
- (id)createLabelForOption:(id)arg1;
- (id)createControlForOption:(id)arg1;
- (void)_setAccessibilityForCell:(id)arg1 withOption:(id)arg2 prefix:(id)arg3;
- (id)assistantTitle;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (void)updateOptions:(id)arg1;
- (void)setAssistantContext:(id)arg1;

@end

