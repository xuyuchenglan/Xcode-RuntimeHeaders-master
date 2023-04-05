/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFormatter.h"

@class DVTCompletingTextView, DVTTextFoldInlineTokenAttachmentCell;

@interface DVTTextFoldInlineTokenFormatter : NSFormatter
{
    DVTTextFoldInlineTokenAttachmentCell *_cell;
    DVTCompletingTextView *_textView;
    unsigned long long _charIndex;
}

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)clearContext;
- (void)setContextWithCell:(id)arg1 textView:(id)arg2 characterIndex:(unsigned long long)arg3;

@end

