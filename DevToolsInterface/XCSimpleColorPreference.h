/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCSyntaxPreference.h>

@class NSColor, NSString;

@interface XCSimpleColorPreference : XCSyntaxPreference
{
    NSColor *_color;
    NSString *_ident;
}

- (id)name;
- (id)identifier;
- (void)setColor:(id)arg1;
- (id)color;
- (BOOL)canChangeColor;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 prefs:(id)arg2;

@end
