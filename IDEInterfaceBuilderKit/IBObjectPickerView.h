/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

#import "IBObjectPickerElementViewDelegate-Protocol.h"

@class DVTStackView_ML, IBImageButton, IBObjectPickerElementView, NSArray, NSString, NSTextFieldCell;

@interface IBObjectPickerView : DVTLayoutView_ML <IBObjectPickerElementViewDelegate>
{
    NSTextFieldCell *backgroundCell;
    IBImageButton *dragWellButton;
    NSArray *pickedObjects;
    DVTStackView_ML *pickedObjectsStackView;
    NSString *placeholderString;
    IBObjectPickerElementView *lastRolledOverView;
    BOOL viewsAreInvalid;
    BOOL allowsEmptyRelation;
    id <IBObjectPickerViewDelegate> _delegate;
}

@property __weak id <IBObjectPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowsEmptyRelation; // @synthesize allowsEmptyRelation;
@property(copy, nonatomic) NSString *placeholderString; // @synthesize placeholderString;
@property(copy, nonatomic) NSArray *pickedObjects; // @synthesize pickedObjects;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundCell;
- (void)objectPickerElementViewUserDidDelete:(id)arg1;
- (void)objectPickerElementView:(id)arg1 rolloverStateChanged:(BOOL)arg2;
- (void)dragWellButtonDragged:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (double)minimumHeight;
- (CDStruct_c519178c)textInset;
- (CDStruct_c519178c)stackInset;
- (BOOL)isFlipped;
- (id)effectivePlaceholderString;
@property(getter=isEnabled) BOOL enabled;
- (id)initWithFrame:(struct CGRect)arg1;

@end

