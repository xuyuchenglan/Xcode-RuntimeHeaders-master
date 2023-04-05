/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDocument.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTPlistDocumentProtocol-Protocol.h"

@class DVTPlistModel, DVTPlistStructureDefinition, DVTStackBacktrace;

@interface Xcode3InfoEditorPlistDocument : NSDocument <DVTPlistDocumentProtocol, DVTInvalidation>
{
    DVTPlistModel *_model;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)propertyListChanged:(id)arg1;
- (BOOL)isReadOnly;
- (void)revealNode:(id)arg1;
- (BOOL)commitEdits;
- (id)model;
- (id)plist;
- (void)changeStructureDefinitionAction:(id)arg1;
@property(retain) DVTPlistStructureDefinition *plistStructureDefinition;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

