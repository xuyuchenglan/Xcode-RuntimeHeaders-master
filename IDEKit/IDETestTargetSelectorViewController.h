/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSString;

@interface IDETestTargetSelectorViewController : IDEViewController
{
    id <IDEBlueprint> _unitTestBlueprint;
    NSString *_blueprintIdentifierToTest;
    NSPopUpButton *_testHostPopUp;
}

@property(retain) NSPopUpButton *testHostPopUp; // @synthesize testHostPopUp=_testHostPopUp;
@property(retain, nonatomic) NSString *blueprintIdentifierToTest; // @synthesize blueprintIdentifierToTest=_blueprintIdentifierToTest;
@property(retain, nonatomic) id <IDEBlueprint> unitTestBlueprint; // @synthesize unitTestBlueprint=_unitTestBlueprint;
- (void).cxx_destruct;
- (void)_rebuildTestHostPopUp;
- (id)filteredBlueprints;
- (id)selectedBlueprint;
- (id)blueprintForMenuItem:(id)arg1;
- (void)selectBlueprint:(id)arg1;
- (void)syncTestHostPopUp;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithUnitTestBlueprint:(id)arg1;

@end

