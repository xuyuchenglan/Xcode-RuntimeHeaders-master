/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextContainer.h"

@interface XDGraphicTextContainer : NSTextContainer
{
    id _delegate;
    struct _XDGraphicTextContainerFlags _gtcFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)isSimpleRectangularTextContainer;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

