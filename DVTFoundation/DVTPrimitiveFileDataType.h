/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTFileDataType.h>

@class NSString;

@interface DVTPrimitiveFileDataType : DVTFileDataType
{
    unsigned long long _number;
    NSString *_identifier;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringRepresentation;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)displayName;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 conformingToTypes:(id)arg3;

@end

