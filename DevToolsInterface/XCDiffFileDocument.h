/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCEditDocument.h>

@class NSString, PBXFileDocument;

@interface XCDiffFileDocument : XCEditDocument
{
    PBXFileDocument *_leftFileDocument;
    PBXFileDocument *_rightFileDocument;
    NSString *_identifier;
}

+ (Class)defaultFileEditorSubclass;
+ (id)diffFileDocumentForIdentifier:(id)arg1;
+ (void)initialize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) PBXFileDocument *rightFileDocument; // @synthesize rightFileDocument=_rightFileDocument;
@property(retain) PBXFileDocument *leftFileDocument; // @synthesize leftFileDocument=_leftFileDocument;
- (id)bookmarkInProject:(id)arg1;
- (id)fileReferenceInProject:(id)arg1;
- (void)updateDiskStateInfo;
- (int)diskState;
- (void)close;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)managesFileDocument:(id)arg1;
- (BOOL)_shouldFileBeAddedToProject;
- (void)dealloc;
- (id)init;
- (id)initWithLeftFileDocument:(id)arg1 rightFileDocument:(id)arg2;

@end

