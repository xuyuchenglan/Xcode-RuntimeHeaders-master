/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface IBXIBTypeDescription : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_version;
    NSString *_lastSavedInterfaceBuilderVersion;
    long long _kind;
}

+ (id)schemaForXIBType:(id)arg1;
@property(readonly) long long kind; // @synthesize kind=_kind;
@property(readonly) NSString *lastSavedInterfaceBuilderVersion; // @synthesize lastSavedInterfaceBuilderVersion=_lastSavedInterfaceBuilderVersion;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)schema;
- (BOOL)isDeclaredType;
- (id)typeInfoExtension;
- (BOOL)isEqualToTypeDescription:(id)arg1;
- (unsigned long long)hash;
@property(readonly) long long compatibilityVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 version:(id)arg2 kind:(long long)arg3 lastSavedInterfaceBuilderVersion:(id)arg4;

@end

