/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEFileNavigableItem.h>

@class DVTFileDataType, NSColor, NSString, NSURL;

@interface IDEFileReferenceNavigableItem : IDEFileNavigableItem
{
    NSURL *_fileURL;
    DVTFileDataType *_fileDataType;
    NSString *_name;
    NSString *_scmCurrentRevision;
    NSString *_scmLocalStatus;
    NSString *_scmServerStatus;
    struct {
        unsigned int _needUpdateForFileURL:1;
        unsigned int _reserved:31;
    } _ideFileRefNavItemflags;
}

+ (id)keyPathsForValuesAffectingToolTip;
+ (id)keyPathsForValuesAffectingFileReference;
+ (id)_createExtraInfoObject;
+ (void)_editorDocumentDirtyStatusDidChange:(id)arg1;
+ (void)_anyEditorDocumentDirtyStatusWillClose:(id)arg1;
+ (void)_anyEditorDocumentDirtyStatusDidChange:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (id)sourceControlCurrentRevision;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (id)toolTip;
@property(readonly) NSColor *textColor;
- (id)newImage;
- (id)name;
- (id)documentType;
- (id)fileURL;
- (id)contentDocumentLocation;
- (void)updateChildRepresentedObjects;
- (void)updateAttributes;
- (id)fileReference;
- (id)initWithRepresentedObject:(id)arg1;

@end

