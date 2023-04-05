/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDESceneKitEditor/SKEDocumentMemberWrapper.h>

@class NSArray, NSString;

@interface SKEDocumentObjectMemberWrapper : SKEDocumentMemberWrapper
{
    NSString *_identifierInLibrary;
    NSArray *_childWrappers;
}

+ (id)keyPathsForValuesAffectingName;
+ (Class)validClassForMember:(id)arg1;
+ (id)validMemberClasses;
@property(readonly) NSString *identifierInLibrary; // @synthesize identifierInLibrary=_identifierInLibrary;
- (void).cxx_destruct;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;
- (void)document:(id)arg1 didReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 didRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildMember:(id)arg2 toMember:(id)arg3;
- (id)childWrappers;
- (void)setChildWrappers:(id)arg1;
- (void)rebuildChildWrappers;
- (id)navigableDocumentLocation;
- (id)image;
- (id)name;
- (id)identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMember:(id)arg1 document:(id)arg2;
- (id)initWithMember:(id)arg1 document:(id)arg2 libraryIdentifier:(id)arg3;

@end

