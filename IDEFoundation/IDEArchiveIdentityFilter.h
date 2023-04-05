/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSet, NSString;

@interface IDEArchiveIdentityFilter : NSObject
{
    NSString *_identifier;
}

+ (id)filterWithIdentifier:(id)arg1;
+ (id)filterWithExtension:(id)arg1;
+ (id)allFilters;
+ (id)_createFilterFromExtension:(id)arg1;
+ (id)_identifiersToFiltersMapping;
+ (id)_extensionLock;
+ (id)_extensionPoint;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSSet *allowedCertificateTypes;
- (id)identityComparator;
- (_Bool)shouldIncludeIdentity:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end

