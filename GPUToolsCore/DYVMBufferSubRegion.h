/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@class DYVMBuffer;

// Not exported
@interface DYVMBufferSubRegion : NSData
{
    DYVMBuffer *_parent;
    struct _NSRange _range;
}

- (id).cxx_construct;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithDYVMBuffer:(id)arg1 range:(struct _NSRange)arg2;

@end

