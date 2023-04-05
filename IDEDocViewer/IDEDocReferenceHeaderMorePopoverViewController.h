/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "NSTextViewDelegate-Protocol.h"

@class NSAttributedString, NSTextView, NSTrackingArea;

@interface IDEDocReferenceHeaderMorePopoverViewController : DVTViewController <NSTextViewDelegate>
{
    NSAttributedString *_inheritsFromAttString;
    NSAttributedString *_conformsToAttString;
    NSTextView *_textView;
    NSTrackingArea *_textViewMouseTracker;
    struct CGSize _renderedTextViewSize;
    struct _NSRange _currentUnderlineRange;
}

@property struct _NSRange currentUnderlineRange; // @synthesize currentUnderlineRange=_currentUnderlineRange;
@property(retain) NSTrackingArea *textViewMouseTracker; // @synthesize textViewMouseTracker=_textViewMouseTracker;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property struct CGSize renderedTextViewSize; // @synthesize renderedTextViewSize=_renderedTextViewSize;
@property(copy) NSAttributedString *conformsToAttString; // @synthesize conformsToAttString=_conformsToAttString;
@property(copy) NSAttributedString *inheritsFromAttString; // @synthesize inheritsFromAttString=_inheritsFromAttString;
- (void).cxx_destruct;
- (void)updateWithToken:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)removeUnderlineLinkInTextStorage:(id)arg1;
- (void)underlineLinkUnderEvent:(id)arg1;
- (void)addMouseTracker;
- (void)clearMouseTracker;
- (id)groupFont;
- (id)nonGroupFont;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)primitiveInvalidate;
- (void)loadView;

@end

