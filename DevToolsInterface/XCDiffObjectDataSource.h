/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCDiffDataSource.h"

@interface XCDiffObjectDataSource : XCDiffDataSource
{
    id _objectController;
}

+ (Class)objectControllerClass;
+ (void)initialize;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _XCDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)arrangedContent;
- (void)setContent:(id)arg1;
- (id)objectController;
- (void)setObjectController:(id)arg1;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end

