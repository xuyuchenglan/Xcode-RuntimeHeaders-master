/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBMediaResourceReference.h>

@class CIFilter, NSString;

@interface IBCIFilterCIImageMediaResourceReference : IBMediaResourceReference
{
    CIFilter *_filter;
    NSString *_keyPath;
}

- (void).cxx_destruct;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 filter:(id)arg3 originalValue:(id)arg4 keyPath:(id)arg5 transformer:(id)arg6;

@end

