/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBICCatalogItemObserver <NSObject>

@optional
- (void)imageCatalogItemDiskContentsDidChange:(id)arg1;
- (void)imageCatalogItemDidChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItemWillChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)imageCatalogItem:(id)arg1 willChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
@end

