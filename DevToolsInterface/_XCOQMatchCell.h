/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCell.h"

@interface _XCOQMatchCell : NSCell
{
}

+ (struct CGRect)_frameForSubTitle:(id)arg1 withImageFrame:(struct CGRect)arg2 titleFrame:(struct CGRect)arg3;
+ (struct CGRect)_frameForTitle:(id)arg1 withImageFrame:(struct CGRect)arg2 cellFrame:(struct CGRect)arg3;
+ (struct CGRect)_imageFrameWithCellFrame:(struct CGRect)arg1;
+ (id)_paragraphStyle;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_attributedSubTitleUsingHighlight:(BOOL)arg1;
- (id)_attributedTitleUsingHighlight:(BOOL)arg1;
- (BOOL)_shouldUseHighlightInView:(id)arg1;
- (id)_subTitle;
- (id)_title;
- (id)_image;
- (id)_match;
- (void)setObjectValue:(id)arg1;

@end

