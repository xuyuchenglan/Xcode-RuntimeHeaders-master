/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCRefactoringTransformationSetUpRow2Module.h>

@class NSArray, NSMatrix, NSMutableIndexSet, NSScrollView, XCRefactoringColoredView;

@interface XCRefactoringMoveDownSetUpRow2Module : XCRefactoringTransformationSetUpRow2Module
{
    NSScrollView *scrollView;
    XCRefactoringColoredView *checkboxView;
    NSMatrix *checkboxMatrix;
    NSArray *_subclassNames;
    NSMutableIndexSet *_chosenSubclassIndexes;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)addToUserInput:(id)arg1;
- (void)setChosenSubclassIndexes:(id)arg1;
- (id)localizedMessage;
- (void)checkboxMatrixChanged:(id)arg1;
- (void)setSubclassNames:(id)arg1;

@end

