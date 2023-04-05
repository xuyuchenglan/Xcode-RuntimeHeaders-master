/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface SKTextureCache : NSObject
{
    unsigned int texId;
    int texInternalFormat;
    unsigned int texFormat;
    unsigned int texType;
    struct CGSize size;
    struct CGSize pixelSize;
    BOOL isLoaded;
    BOOL hasAlpha;
    BOOL isPOT;
    char *pixelData;
    unsigned int *alphaMap;
    struct CGSize alphaMapSize;
    int state;
    int lock;
    struct CGImage *collisionMask;
}

@property int state; // @synthesize state;
@property unsigned int texType; // @synthesize texType;
@property unsigned int texFormat; // @synthesize texFormat;
@property int texInternalFormat; // @synthesize texInternalFormat;
@property struct CGSize alphaMapSize; // @synthesize alphaMapSize;
@property unsigned int *alphaMap; // @synthesize alphaMap;
@property struct CGSize pixelSize; // @synthesize pixelSize;
@property char *pixelData; // @synthesize pixelData;
@property BOOL hasAlpha; // @synthesize hasAlpha;
@property BOOL isPOT; // @synthesize isPOT;
@property BOOL isLoaded; // @synthesize isLoaded;
@property struct CGSize size; // @synthesize size;
@property unsigned int texId; // @synthesize texId;
- (id).cxx_construct;
@property(readonly, getter=getLock) int *lock;
- (void)dealloc;
- (id)init;

@end

