/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDERunDestination, NSString;

@interface IDERunDestinationWithName : NSObject
{
    IDERunDestination *_runDestination;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
- (void).cxx_destruct;
- (id)navigableItem_name;
- (id)description;
- (id)initWithRunDestination:(id)arg1 name:(id)arg2;

@end

