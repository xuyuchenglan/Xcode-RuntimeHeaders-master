/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCRefactoringTransformationSetUpModule.h>

@class NSButton;

@interface XCRefactoringConvertToObjC2SetUpModule : XCRefactoringTransformationSetUpModule
{
    NSButton *modernizeLoopsCheckbox;
    BOOL _modernizeLoops;
    NSButton *convertToPropertiesCheckbox;
    BOOL _convertToProperties;
}

- (void)addToUserInput:(id)arg1;
- (void)setConvertToProperties:(id)arg1;
- (void)setModernizeLoops:(id)arg1;
- (id)initWithModule:(id)arg1 initialModernizeLoops:(BOOL)arg2 initialConvertToProperties:(BOOL)arg3;
- (void)toggleConvertToProperties:(id)arg1;
- (void)toggleModernizeLoops:(id)arg1;
- (id)localizedMessage;

@end

