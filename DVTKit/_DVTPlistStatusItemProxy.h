/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCell, NSString;

@interface _DVTPlistStatusItemProxy : NSObject
{
    id _parent;
    NSCell *_buttonCell;
    struct CGRect _frame;
    NSString *_title;
}

+ (id)statusItemProxyWithButtonCell:(id)arg1 parent:(id)arg2 frame:(struct CGRect)arg3 title:(id)arg4;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly) NSCell *buttonCell; // @synthesize buttonCell=_buttonCell;
@property(readonly) id parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)initWithButtonCell:(id)arg1 parent:(id)arg2 frame:(struct CGRect)arg3 title:(id)arg4;

@end

