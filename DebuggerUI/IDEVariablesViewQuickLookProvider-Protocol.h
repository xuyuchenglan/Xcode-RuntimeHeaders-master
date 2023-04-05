/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSView;

@protocol IDEVariablesViewQuickLookProvider <NSObject>
@property(readonly) NSView *quickLookView;
@property(readonly) int loadedState;
- (void)cancelLoading;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

@optional
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) NSURL *existingURLToOpen;
- (void)writeAtomicallyToTemporaryFile:(id)arg1;
@end

