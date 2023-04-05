/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCLibraryGroupProtocol-Protocol.h"

@class NSArray, XCSDKPackage;

@interface XCSDKLibraryGroup : NSObject <XCLibraryGroupProtocol>
{
    NSArray *_libraries;
    XCSDKPackage *_sdkPackage;
}

@property(copy) XCSDKPackage *sdkPackage; // @synthesize sdkPackage=_sdkPackage;
- (id)librariesForType:(id)arg1;
- (id)objectfiles;
- (id)dylibs;
- (id)frameworks;
- (id)libraries;
- (void)setLibraries:(id)arg1;
- (int)libraryCount;
- (id)displayName;
- (void)dealloc;
- (id)initWithSDKPackage:(id)arg1;
- (BOOL)isLeaf;

@end

