/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDECodesignResolutionActionContextProvider-Protocol.h"

@interface Xcode3CodesignResolutionActionContextProvider : NSObject <IDECodesignResolutionActionContextProvider>
{
}

+ (id)sharedProvider;
- (id)codesignResolutionActionContextWithError:(id)arg1 window:(id)arg2 blueprint:(id)arg3;
- (id)codesignResolutionActionContextWithError:(id)arg1 window:(id)arg2 workspace:(id)arg3 blueprintIdentifier:(id)arg4;

@end

