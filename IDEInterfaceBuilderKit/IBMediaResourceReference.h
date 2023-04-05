/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBResourceValueTransformer, IDEMediaResourceVariantSet;

@interface IBMediaResourceReference : NSObject
{
    IDEMediaResourceVariantSet *_variantSet;
    IBResourceValueTransformer *_transformer;
    id _originalValue;
    id _documentObject;
}

@property(retain) id documentObject; // @synthesize documentObject=_documentObject;
@property(retain) id originalValue; // @synthesize originalValue=_originalValue;
@property(readonly) IBResourceValueTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly) IDEMediaResourceVariantSet *variantSet; // @synthesize variantSet=_variantSet;
- (void).cxx_destruct;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 originalValue:(id)arg3 transformer:(id)arg4;

@end

