/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableAttributedString.h"

@class NSDictionary, NSString;

@interface PBXLogOutputString : NSMutableAttributedString
{
    NSMutableAttributedString *_string;
    NSDictionary *_titleAttrs;
    NSDictionary *_headingAttrs;
    NSDictionary *_subheadingAttrs;
    NSDictionary *_messageTextAttrs;
    NSDictionary *_literalTextAttrs;
    NSDictionary *_warningTextAttrs;
    NSDictionary *_errorTextAttrs;
    NSDictionary *_fullLineAttrs;
    NSDictionary *_halfLineAttrs;
    NSDictionary *_quarterLineAttrs;
    NSString *_pendingConditionalHeading;
    NSString *_pendingConditionalSubheading;
}

- (void)appendNL;
- (void)appendErrorText:(id)arg1;
- (void)appendWarningText:(id)arg1;
- (void)appendLiteralText:(id)arg1;
- (void)appendMessageText:(id)arg1;
- (void)appendBulletText:(id)arg1;
- (void)_appendPendingConditionalSubheading;
- (void)setPendingConditionalSubheading:(id)arg1;
- (void)appendSubheadingNL:(id)arg1;
- (void)_appendPendingConditionalHeading;
- (void)setPendingConditionalHeading:(id)arg1;
- (void)appendHeadingNL:(id)arg1;
- (void)appendTitleNL:(id)arg1;
- (id)errorTextAttributes;
- (id)warningTextAttributes;
- (id)literalTextAttributes;
- (id)messageTextAttributes;
- (id)subheadingAttributes;
- (id)headingAttributes;
- (id)titleAttributes;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)dealloc;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithOwnedMutableAttributedString:(id)arg1;
- (void)_setupDefaultAttributeDictionaries;

@end

