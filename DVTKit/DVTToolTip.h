/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DVTToolTip : NSObject
{
}

+ (id)boldToolTipFont;
+ (id)toolTipFont;
+ (id)attributedToolTipStringForString:(id)arg1;
+ (struct CGPoint)toolTipPositionForMouseLocation:(struct CGPoint)arg1;
+ (void)orderOutToolTip;
+ (void)fadeOut:(id)arg1;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3 maximumWidth:(double)arg4;
+ (id)scheduledTimerWithInterval:(double)arg1;

@end

