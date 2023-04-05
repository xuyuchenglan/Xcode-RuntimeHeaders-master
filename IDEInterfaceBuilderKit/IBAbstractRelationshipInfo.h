/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBDocumentArchiving-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IBAbstractRelationshipInfo : NSObject <NSCopying, NSCoding, IBDocumentArchiving>
{
    NSString *name;
    NSString *candidateClassName;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1 relationshipName:(id)arg2 andCandidateClassName:(id)arg3;
+ (Class)relationshipInfoClassForRelationshipType:(long long)arg1;
+ (id)relationshipInfoWithName:(id)arg1;
+ (id)relationshipInfoWithName:(id)arg1 andCandidateClassName:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)relationshipInfoWithCandidateClassName:(id)arg1;
- (id)relationshipInfoWithName:(id)arg1;
@property(readonly) long long relationshipType;
@property(readonly) NSString *candidateClassName;
@property(readonly) NSString *name;
- (long long)compareForArchiving:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andCandidateClassName:(id)arg2;

@end

