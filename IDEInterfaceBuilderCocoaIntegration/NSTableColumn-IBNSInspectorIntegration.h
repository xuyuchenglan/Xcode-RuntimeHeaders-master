/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableColumn.h"

@interface NSTableColumn (IBNSInspectorIntegration)
+ (id)keyPathsForValuesAffectingIbQualifyingInfoForDefaultLabel;
+ (id)keyPathsForValuesAffectingIbInspectedToolTip;
+ (id)ibDefaultPrototypeTextCellView;
+ (id)keyPathsForValuesAffectingIbInspectedSortDescriptorAscending;
+ (id)keyPathsForValuesAffectingIbInspectedSortDescriptorSelector;
+ (id)keyPathsForValuesAffectingIbInspectedSortDescriptorKey;
- (id)ibSuperviewOfView:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsChildViewResizable:(id)arg1 whenSizingToFitDescendantView:(id)arg2;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (id)ibWarningForSubNibOutlet:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)ibWarningForSubNibAction:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)ibCompiledNibFileIdentifierForChild:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIdentifierPropertyCanConflictsWithObject:(id)arg1;
- (BOOL)ibCanSupportIdentifierProperty;
- (id)ibSuggestUserInterfaceItemIdentifierForObject:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (void)constrainWidthToMax;
- (void)constrainWidthToMin;
- (id)ibDefaultFontKeyPath;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (struct CGRect)ibTitleRectForEditingInView:(id)arg1;
- (double)ibPreferredWidth;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (id)ibInspectedToolTip;
- (void)setIbInspectedToolTip:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (id)ibPasteboardTypes;
- (Class)ibEditorClass;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibSetSubviewControlSizes:(unsigned long long)arg1;
- (void)setIbExternalIsInViewBasedMode:(BOOL)arg1;
- (BOOL)ibExternalIsInViewBasedMode;
- (void)setIbExternalPrototypeCellViews:(id)arg1;
- (id)ibExternalPrototypeCellViews;
- (BOOL)ibIsContainedPrototypeCellView:(id)arg1;
- (void)ibFinishArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)ibBeginArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (void)setIbExternalUserInterfaceItemIdentifier:(id)arg1;
- (id)ibExternalUserInterfaceItemIdentifier;
- (BOOL)ibInspectedSortDescriptorAscending;
- (void)setIbInspectedSortDescriptorAscending:(BOOL)arg1;
- (id)ibInspectedSortDescriptorSelector;
- (void)setIbInspectedSortDescriptorSelector:(id)arg1;
- (id)ibInspectedSortDescriptorKey;
- (void)setIbInspectedSortDescriptorKey:(id)arg1;
@end

