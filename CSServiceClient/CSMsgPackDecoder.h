/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CSDecoder-Protocol.h"

@interface CSMsgPackDecoder : NSObject <CSDecoder>
{
}

+ (id)decodeNonNullObject:(id)arg1 remainingMutable:(BOOL)arg2;
+ (id)decodeNonNullObject:(id)arg1;
+ (id)decodeObject:(id)arg1 remainingMutable:(BOOL)arg2;
+ (id)decodeObject:(id)arg1;
- (id)decodeObject:(id)arg1 remainingMutable:(BOOL)arg2;
- (id)decodeObject:(id)arg1;
- (id)decodeMsgPackObject:(struct msgpack_object *)arg1 remainingMutable:(BOOL)arg2;

@end

