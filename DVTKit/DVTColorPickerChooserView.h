/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class DVTColorPickerChooserContentView, NSColor, NSMutableArray;

@interface DVTColorPickerChooserView : NSView
{
    NSMutableArray *colorsArray;
    DVTColorPickerChooserContentView *contentView;
    NSColor *clickedColor;
    id target;
    SEL action;
}

+ (id)defaultLabel;
- (void).cxx_destruct;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)userChooseSwatch:(id)arg1;
- (id)clickedColor;
- (BOOL)isFlipped;
- (id)initWithTitle:(id)arg1 andColors:(id)arg2;
- (id)attributedTitleForTitle:(id)arg1;
- (id)titleAttributes;
- (id)titleFont;

@end

