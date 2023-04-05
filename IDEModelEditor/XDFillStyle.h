/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEModelEditor/XDDrawingStyle.h>

@class NSColor;

@interface XDFillStyle : XDDrawingStyle
{
    NSColor *_fillColor;
    double _gradientAngle;
    NSColor *_gradientColor;
    struct _XDFillStyleFlags _fsFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
- (void)drawGraphic:(id)arg1 inView:(id)arg2 usingFillType:(int)arg3;
- (id)gradientColor;
- (void)setGradientColor:(id)arg1;
- (double)gradientAngle;
- (void)setGradientAngle:(double)arg1;
- (int)fillType;
- (void)setFillType:(int)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (BOOL)drawsFill;
- (void)setDrawsFill:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1;

@end

