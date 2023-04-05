/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTClickableLayer <NSObject>
@property BOOL disableClickHandler;
@property BOOL showsClickedState;
@property(copy) id clickHandlerBlock;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;
- (void)fireClickHandler;
@end

