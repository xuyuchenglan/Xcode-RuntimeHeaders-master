/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XDUMLClassifier-Protocol.h"
#import "XDUMLRelationship-Protocol.h"

@protocol XDUMLAssociation <XDUMLClassifier, XDUMLRelationship>
- (void)addMemberEnd:(id)arg1;
- (id)ownedEnds;
- (id)memberEnds;
- (BOOL)isDerived;
@end
