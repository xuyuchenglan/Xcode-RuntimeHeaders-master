/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBXWizardProxies-Protocol.h"

@class NSString;

@interface PBXProjectTemplateClonerWizardProxy : NSObject <PBXWizardProxies>
{
    NSString *_templateProjectPath;
    NSString *_templateName;
}

+ (id)proxyWithTemplateProjectPath:(id)arg1 templateName:(id)arg2;
- (id)icon;
- (id)_defaultIcon;
- (id)wizardDescription;
- (id)instantiateWizardWithParent:(id)arg1;
- (id)categorizedWizardNames;
- (void)dealloc;
- (id)initWithTemplateProjectPath:(id)arg1 templateName:(id)arg2;

@end

