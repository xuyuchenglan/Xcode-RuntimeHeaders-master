/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUToolsServices/DYFunctionStreamModifier.h>

@interface DYFunctionStreamModifierRemoveFuncs : DYFunctionStreamModifier
{
    int _currentFileType;
    unsigned int _removedFunctionCount;
}

+ (BOOL)_isAppleInternalContextFunction:(struct Function *)arg1 contextSet:(unordered_set_6cd805f9 *)arg2;
@property(readonly, nonatomic) unsigned int removedFunctionCount; // @synthesize removedFunctionCount=_removedFunctionCount;
- (void)onBeginFileInArchiveModifier:(id)arg1;
- (id)initWithDeltaFilesTextureAndBufferLoadFilter;
- (id)initWithAppleInternalContextFilterWithContextSet:(unordered_set_6cd805f9 *)arg1;
- (id)initWithCaptureFunctions:(id)arg1;
- (id)init;

@end

