/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DVTCodesignResolver : NSObject
{
}

+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 withError:(id *)arg4;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 withError:(id *)arg5;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 withError:(id *)arg6;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 platform:(id)arg4 destinationDevice:(id)arg5 withError:(id *)arg6;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 platform:(id)arg6 destinationDevice:(id)arg7 withError:(id *)arg8;
+ (id)parametersForIdentity:(id)arg1 profileUUID:(id)arg2 andBundleIdentifier:(id)arg3 requiringProfile:(_Bool)arg4 platform:(id)arg5 destinationDevice:(id)arg6 withError:(id *)arg7;
+ (id)parametersForIdentity:(id)arg1 bundleIdentifier:(id)arg2 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg3 withError:(id *)arg4;
+ (id)_identityCertificatesInArray:(id)arg1 matchingIdentityString:(id)arg2 withError:(id *)arg3;
+ (id)parametersForTeamID:(id)arg1 bundleIdentifier:(id)arg2 entitlements:(id)arg3 requiredFeatures:(id)arg4 limitSearchToKeychain:(struct OpaqueSecKeychainRef *)arg5 platform:(id)arg6 destinationDevice:(id)arg7 withError:(id *)arg8;
+ (id)parametersForAdHocSigning;
+ (id)parametersForNullSigning;

@end

