/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXTextView.h>

@class XCBuildResultsTextLayout, XCEConfigurableDataNode;

@interface XCTranscriptTextView : PBXTextView
{
    XCBuildResultsTextLayout *_textLayout;
    XCEConfigurableDataNode *_dataNode;
    struct CGRect _cellFrame;
}

@property(nonatomic) struct CGRect cellFrame; // @synthesize cellFrame=_cellFrame;
@property(nonatomic) XCEConfigurableDataNode *dataNode; // @synthesize dataNode=_dataNode;
@property(nonatomic) XCBuildResultsTextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void)dealloc;
- (void)mouseDown:(id)arg1;
- (BOOL)singleTranscriptFindText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;
- (BOOL)findText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;

@end

