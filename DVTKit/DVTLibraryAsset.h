/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTExtension, DVTHashTable, DVTLibrary, NSArray, NSAttributedString, NSDate, NSImage, NSSet, NSString;

@interface DVTLibraryAsset : NSObject
{
    DVTHashTable *_knownGroups;
    DVTExtension *_extension;
    BOOL _selected;
    id _representedObject;
    NSImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_badgeString;
    NSAttributedString *_fullDescription;
    NSArray *_detailControllerIdentifiers;
    DVTLibrary *_library;
    NSString *_identifier;
    NSDate *_lastUsedDate;
}

@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) DVTLibrary *library; // @synthesize library=_library;
@property(copy) NSArray *detailControllerIdentifiers; // @synthesize detailControllerIdentifiers=_detailControllerIdentifiers;
@property(copy) NSAttributedString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(copy) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(copy) NSString *summary; // @synthesize summary=_summary;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) DVTExtension *representedExtension; // @synthesize representedExtension=_extension;
- (void).cxx_destruct;
- (id)description;
- (void)removeKnownGroup:(id)arg1;
- (void)addKnownGroup:(id)arg1;
- (id)searchTerms;
@property(readonly) double timeIntervalSinceUsed;
@property(readonly) NSSet *knownGroups;
- (void)loadDetailControllerIdentifiersFromExtension;
- (id)initWithExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

