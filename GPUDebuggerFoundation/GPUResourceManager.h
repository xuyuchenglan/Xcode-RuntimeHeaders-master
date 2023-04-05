/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface GPUResourceManager : NSObject
{
    struct unique_ptr<GPUTools::ResourceManager<GPUSMObjectTypes>, std::__1::default_delete<GPUTools::ResourceManager<GPUSMObjectTypes>>> _spResMgr;
}

+ (unsigned int)realFunctionIndexForIndex:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)loadClientDataBufferFromArchive:(id)arg1 offset:(long long)arg2 functionIndex:(unsigned int)arg3;
- (id)updateResource:(id)arg1 sharegroupID:(unsigned long long)arg2;
- (id)loadWireframeRenderbuffer:(id)arg1 functionIndex:(unsigned int)arg2;
- (id)loadResourceWithType:(unsigned int)arg1 contextInfo:(id)arg2 stateMirrorObject:(const void *)arg3 functionIndex:(unsigned int)arg4;
- (void)invalidateDeviceCache;
- (id)initWithCaptureArchive:(id)arg1 resourceStreamer:(id)arg2;

@end

