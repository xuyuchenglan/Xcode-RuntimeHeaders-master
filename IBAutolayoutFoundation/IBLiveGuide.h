/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBAutolayoutFoundation/IBLayoutGuide.h>

@class NSObject<IBAutolayoutItem>;

@interface IBLiveGuide : IBLayoutGuide
{
    struct CGPoint start;
    struct CGPoint end;
    NSObject<IBAutolayoutItem> *view;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isVertical;
- (struct CGPoint)endInView:(id)arg1;
- (struct CGPoint)startInView:(id)arg1;
- (id)initWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 inView:(id)arg3;

@end

