/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextAttachmentCell.h"

@class DVTFindPattern, NSColor, NSTextField<DVTFindPatternField>;

@interface DVTFindPatternAttachmentCell : NSTextAttachmentCell
{
    struct {
        unsigned int _selected:1;
        unsigned int _reserved:31;
    } _tacFlags;
    DVTFindPattern *_findPattern;
    NSTextField<DVTFindPatternField> *_field;
    NSColor *_DVTFindPatternForegroundColor;
    NSColor *_DVTFindPatternBackgroundColor;
    NSColor *_DVTFindPatternSelectedBackgroundColor;
    NSColor *_DVTFindPatternRolloverForegroundColor;
    NSColor *_DVTFindPatternRolloverBackgroundColor;
    int cachedGroupID;
}

@property NSTextField<DVTFindPatternField> *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)pullDownRectForBounds:(struct CGRect)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)pullDownImage;
- (id)menu;
- (BOOL)_hasMenu;
- (id)textColor;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (long long)interiorBackgroundStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) DVTFindPattern *findPattern;
- (id)_attributedString;
- (void)_setGroupID:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initTextCell:(id)arg1;

@end

