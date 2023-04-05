/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CSDateTime, NSArray, NSNumber, NSString;

@interface CSEntityComment : NSObject
{
    NSString *guid;
    NSArray *parentGUIDs;
    NSString *entityGUID;
    NSString *entityLongName;
    NSString *entityShortName;
    NSString *entityType;
    NSString *title;
    NSString *body;
    NSString *authorUserGUID;
    NSString *authorUserLongName;
    NSString *authorUserLogin;
    NSString *authorUserAvatarGUID;
    NSNumber *isApproved;
    NSString *approvedByUserGUID;
    NSString *approvedByUserLongName;
    NSString *approvedByUserLogin;
    CSDateTime *approvalTime;
    CSDateTime *createTime;
    NSNumber *isRead;
}

+ (void)initialize;
@property(retain) NSNumber *isRead; // @synthesize isRead;
@property(retain) CSDateTime *createTime; // @synthesize createTime;
@property(retain) CSDateTime *approvalTime; // @synthesize approvalTime;
@property(retain) NSString *approvedByUserLogin; // @synthesize approvedByUserLogin;
@property(retain) NSString *approvedByUserLongName; // @synthesize approvedByUserLongName;
@property(retain) NSString *approvedByUserGUID; // @synthesize approvedByUserGUID;
@property(retain) NSNumber *isApproved; // @synthesize isApproved;
@property(retain) NSString *authorUserAvatarGUID; // @synthesize authorUserAvatarGUID;
@property(retain) NSString *authorUserLogin; // @synthesize authorUserLogin;
@property(retain) NSString *authorUserLongName; // @synthesize authorUserLongName;
@property(retain) NSString *authorUserGUID; // @synthesize authorUserGUID;
@property(retain) NSString *body; // @synthesize body;
@property(retain) NSString *title; // @synthesize title;
@property(retain) NSString *entityType; // @synthesize entityType;
@property(retain) NSString *entityShortName; // @synthesize entityShortName;
@property(retain) NSString *entityLongName; // @synthesize entityLongName;
@property(retain) NSString *entityGUID; // @synthesize entityGUID;
@property(retain) NSArray *parentGUIDs; // @synthesize parentGUIDs;
@property(retain) NSString *guid; // @synthesize guid;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

