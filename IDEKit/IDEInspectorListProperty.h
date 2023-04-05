/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSComboBox, NSString;

@interface IDEInspectorListProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    IDEInspectorKeyPath *_listContentKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_placeholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end
