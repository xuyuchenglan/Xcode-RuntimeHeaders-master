/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXFileDocument, PBXProjectModule, _XCOQMatchContext;

@interface _XCOQSearchContext : NSObject
{
    PBXProjectModule *_projectModule;
    PBXFileDocument *_editorDocument;
    NSString *_editorDocumentPath;
    NSString *_projectFolderPath;
    NSString *_rawInput;
    NSString *_trimmedInput;
    NSString *_line;
    BOOL _isInclude;
    BOOL _isQuote;
    _XCOQMatchContext *_matchContext;
}

+ (id)_trimIputString:(id)arg1;
+ (id)_selectedStringIsInInclude:(char *)arg1 inQuotes:(char *)arg2;
+ (struct _NSRange)_selectionRangeInTextView:(id)arg1 inInclude:(char *)arg2 inQuotes:(char *)arg3;
+ (id)context;
+ (id)_currentProjectModule;
@property(retain) _XCOQMatchContext *matchContext; // @synthesize matchContext=_matchContext;
@property BOOL isQuote; // @synthesize isQuote=_isQuote;
@property BOOL isInclude; // @synthesize isInclude=_isInclude;
@property(copy) NSString *line; // @synthesize line=_line;
@property(copy) NSString *trimmedInput; // @synthesize trimmedInput=_trimmedInput;
@property(copy) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(copy) NSString *projectFolderPath; // @synthesize projectFolderPath=_projectFolderPath;
@property(copy) NSString *editorDocumentPath; // @synthesize editorDocumentPath=_editorDocumentPath;
@property(retain) PBXFileDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(retain) PBXProjectModule *projectModule; // @synthesize projectModule=_projectModule;
- (id)_matchContextWithTrimmedInput:(id)arg1 line:(id)arg2;
- (void)takeInputFromCurrentSelection;
- (id)description;
- (void)dealloc;
- (id)init;

@end

