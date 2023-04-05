/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextStorage.h"

@class NSMutableAttributedString;

@interface XCETextLayoutTextStorage : NSTextStorage
{
    NSMutableAttributedString *_contents;
}

- (void).cxx_destruct;
- (struct _NSRange)findString:(id)arg1 previousFindRange:(struct _NSRange)arg2 limitRange:(struct _NSRange)arg3 options:(unsigned long long)arg4 matchStyle:(long long)arg5 wrap:(BOOL)arg6;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)init;

@end

