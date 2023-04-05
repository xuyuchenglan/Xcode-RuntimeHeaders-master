/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTSourceCodeSymbolKind, NSAttributedString, NSString;

@interface IDEIndexCompletionItem : NSObject
{
    void *_completionResult;
    NSString *_displayText;
    NSString *_displayType;
    NSString *_completionText;
    NSAttributedString *_descriptionText;
    NSString *_parentText;
    DVTSourceCodeSymbolKind *_symbolKind;
    double _priority;
    NSString *_name;
    BOOL _notRecommended;
}

@property double priority; // @synthesize priority=_priority;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) BOOL notRecommended;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSAttributedString *descriptionText;
@property(readonly) NSString *parentText;
@property(readonly) NSString *completionText;
@property(readonly) NSString *displayType;
@property(readonly) NSString *displayText;
- (void)_fillInTheRest;
- (id)description;
- (id)initWithCompletionResult:(void *)arg1;

@end

