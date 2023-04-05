/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor;

@interface IDEInfiniteLineBox : NSView
{
    NSColor *_lineColor;
    double _fadeLength;
}

@property double fadeLength; // @synthesize fadeLength=_fadeLength;
@property(retain) NSColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (double)_fadeLengthAsPercentOfLength;
@property(readonly) unsigned long long orientation;
- (void)drawRect:(struct CGRect)arg1;
- (void)_ide_infiniteLineBoxCommonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

