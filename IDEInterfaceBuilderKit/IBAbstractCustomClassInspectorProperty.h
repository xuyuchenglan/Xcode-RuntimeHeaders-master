/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

#import "IBCustomClassSuggestionsProviderDelegate-Protocol.h"

@class DVTDelayedInvocation, IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IBCustomClassIndexStateProvider, IBCustomClassQuickStateProvider, IBCustomClassSuggestionsProvider, IDEInspectorKeyPath, NSArray;

@interface IBAbstractCustomClassInspectorProperty : IDEInspectorProperty <IBCustomClassSuggestionsProviderDelegate>
{
    IBButtonComboBox *_comboBox;
    IBCustomClassSuggestionsProvider *_classSuggestionsProvider;
    DVTDelayedInvocation *_indexBasedRefreshInvocation;
    IBCustomClassQuickStateProvider *_quickStateProvider;
    IBCustomClassIndexStateProvider *_indexStateProvider;
    IBAutoCompletingComboBoxDataSource *_comboBoxDatasource;
    BOOL _comboBoxStringValueIsRefreshingFromIndex;
    BOOL _comboBoxSuggestionsQueryInFlight;
    id <DVTCancellable> _firstResponderToken;
    IDEInspectorKeyPath *_valueKeyPath;
    BOOL showingProgressIndicator;
    BOOL updatingApplicableCustomClassNames;
    NSArray *applicableCustomClassNames;
}

@property BOOL updatingApplicableCustomClassNames; // @synthesize updatingApplicableCustomClassNames;
@property(nonatomic) BOOL showingProgressIndicator; // @synthesize showingProgressIndicator;
@property(copy) NSArray *applicableCustomClassNames; // @synthesize applicableCustomClassNames;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)primitiveInvalidate;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)propertyViewWillUninstallFromWindow;
- (void)propertyViewDidInstallIntoWindow;
- (void)refresh;
- (void)refreshComboBox;
- (void)refreshComboBoxFromQuickState;
- (void)refreshComboBoxFromIndexState:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (void)revealCustomClassInEditor:(id)arg1;
- (void)cancelQueryingComboBoxDataSource;
- (void)refreshComboBoxDataSource;
- (void)applyValidatedClassName:(id)arg1 toMember:(id)arg2;
- (void)customClassSuggestionsProvider:(id)arg1 didUpdateQueryState:(BOOL)arg2;
- (void)setComboBoxStringValueIsRefreshingFromIndex:(BOOL)arg1;
- (void)updateSpinnerWithNewRefreshingStringValueState:(BOOL)arg1 dataSourceState:(BOOL)arg2;
- (double)baseline;
- (id)inspectedDocumentMembers;
- (BOOL)canMemberChangeCustomClassName:(id)arg1;
- (void)setExternalCustomClassName:(id)arg1 forMember:(id)arg2;
- (id)externalCustomClassNameForMember:(id)arg1;
- (id)runtimeClassNameForMember:(id)arg1;
- (id)effectiveClassNameForMember:(id)arg1;
- (id)nibName;
- (id)nibBundle;
- (id)inspectedDocument;
- (id)inspectorController;
- (id)activeWorkspaceTabController;
- (id)workspaceWindowController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

