/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/TestGlassPropertyDefinitionStringNodeAdapter.h>

@class NSCell;

@interface TestGlassPropertyDefinitionUserDefinedNodeAdapter : TestGlassPropertyDefinitionStringNodeAdapter
{
    BOOL _noEditUntilRebuild;
    NSCell *_nameCell;
}

- (void)dataNodeConfigure:(id)arg1;
- (void)setNewName:(id)arg1;
- (void)rename:(id)arg1 toNewName:(id)arg2 conditionSet:(id)arg3;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (BOOL)formatter:(id)arg1 getObjectValue:(out id *)arg2 forString:(id)arg3 errorDescription:(out id *)arg4;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (void)assignCurrentValuesFor:(id)arg1;

@end

