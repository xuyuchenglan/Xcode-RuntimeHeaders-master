/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCoding-Protocol.h"

@protocol IBGroupDelegate <NSCoding>
- (void)group:(id)arg1 willRemoveIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 willAddIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 didReorderObject:(id)arg2;
- (void)group:(id)arg1 willReorderObject:(id)arg2;
- (void)group:(id)arg1 didRemoveObject:(id)arg2;
- (void)group:(id)arg1 willRemoveObject:(id)arg2;
- (void)group:(id)arg1 didAddObject:(id)arg2;
- (void)group:(id)arg1 willAddObject:(id)arg2;
- (id)group:(id)arg1 objectRecordForObject:(id)arg2;
@end

