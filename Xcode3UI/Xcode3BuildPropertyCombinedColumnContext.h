/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Xcode3UI/Xcode3BuildPropertyBlueprintColumnContext.h>

@class NSArray;

@interface Xcode3BuildPropertyCombinedColumnContext : Xcode3BuildPropertyBlueprintColumnContext
{
    NSArray *_blueprints;
}

@property(copy, nonatomic) NSArray *blueprints; // @synthesize blueprints=_blueprints;
- (void).cxx_destruct;
- (void)configureForCombinedColumn;
- (void)configureColumnTitleAndImage;
- (id)blueprint;
- (void)setBlueprint:(id)arg1;

@end

