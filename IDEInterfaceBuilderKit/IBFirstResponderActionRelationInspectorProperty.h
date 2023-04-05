/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IBDocument, NSComboBoxCell, NSDictionary;

@interface IBFirstResponderActionRelationInspectorProperty : IDEInspectorProperty
{
    NSComboBoxCell *_comboBoxCell;
    id <DVTCancellable> _classDescriberObservingToken;
    IBDocument *_observedDocument;
    BOOL _refreshClassInfo;
    NSDictionary *_cachedActions;
}

- (void).cxx_destruct;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)setActionRelations:(id)arg1;
- (id)actionRelations;
- (id)allClassNames;
- (id)inspectorController;
- (double)baseline;
- (id)defaultType;
- (id)defaultAction;
- (id)nibBundle;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

