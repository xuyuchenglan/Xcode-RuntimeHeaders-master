/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCBreakpointActionModule.h>

@class NSButton, NSButtonCell, NSTextField, NSTextView;

@interface XCBreakpointLogActionModule : XCBreakpointActionModule
{
    NSTextView *_messageView;
    NSButtonCell *_logButton;
    NSButtonCell *_speakButton;
    NSButton *_appendToFileButton;
    NSTextField *_fileView;
    NSTextField *_instructions;
}

- (void)prepareFocus;
- (void)updateBreakpointAction:(id)arg1;
- (void)setupBreakpointAction:(id)arg1;

@end

