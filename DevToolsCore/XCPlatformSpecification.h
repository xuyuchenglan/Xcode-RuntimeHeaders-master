/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSpecification.h>

@class DTDeveloperPaths, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PBXBuildSettingsDictionary, XCSDKPackage;

@interface XCPlatformSpecification : XCSpecification
{
    NSString *_name;
    NSArray *_alternateNames;
    NSString *_directoryName;
    NSString *_path;
    NSString *_iconPath;
    NSString *_userDescription;
    DTDeveloperPaths *_developerPaths;
    DTDeveloperPaths *_pluginDeveloperPaths;
    NSMutableArray *_projectTemplatePaths;
    NSMutableArray *_targetTemplatePaths;
    NSMutableArray *_fileTemplatePaths;
    PBXBuildSettingsDictionary *_defaultProperties;
    PBXBuildSettingsDictionary *_overrideProperties;
    NSDictionary *_deviceProperties;
    NSMutableArray *_SDKs;
    XCSDKPackage *_defaultSDK;
    NSString *_familyName;
    NSString *_familyIdentifier;
    NSString *_runtimeSystemSpecification;
    NSDictionary *_validationDict;
    NSMutableDictionary *_debuggerSettings;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)platformForExpansionContext:(id)arg1;
+ (id)platformForPath:(id)arg1;
+ (id)platformForDomain:(id)arg1;
+ (id)platformForName:(id)arg1;
+ (id)allPlatforms;
+ (void)loadAllPlatforms;
+ (void)_loadPlatformAtPath:(id)arg1 andSpecificationsAndPlugins:(BOOL)arg2;
+ (void)registerSpecificationOrProxy:(id)arg1;
+ (void)_mapPlatformName:(id)arg1 toSpecificationOrProxy:(id)arg2 isAlias:(BOOL)arg3;
+ (id)defaultPlatform;
+ (id)_propertyDictionaryForPlatformAtPath:(id)arg1;
+ (void)initialize;
- (id)dataformattersBundleStyle;
- (id)dataformattersLocationPath;
- (BOOL)providesAttachList;
- (BOOL)debuggerCanUseGuardMalloc;
- (BOOL)debuggerCanRestart;
- (BOOL)runInDebugger;
- (BOOL)deviceIsRequiredForLaunch;
- (BOOL)_debuggerSettingIsEnabledForKey:(id)arg1;
- (id)_debuggerSettingForKey:(id)arg1;
- (id)debuggerSettings;
- (id)overridingRuntimeSystemSpecification;
- (id)fileTemplateSearchPaths;
- (id)targetTemplateSearchPaths;
- (id)projectTemplateSearchPaths;
- (id)defaultSDK;
- (void)addSDK:(id)arg1;
- (id)SDKs;
- (id)deviceProperties;
- (id)overrideProperties;
- (id)defaultProperties;
- (id)_computedProperties:(id)arg1;
- (id)pluginDeveloperPaths;
- (id)developerPaths;
- (id)userDescription;
- (id)iconPath;
- (id)familyIdentifier;
- (id)familyName;
- (id)platformDomain;
- (id)path;
- (id)directoryName;
- (id)alternateNames;
- (id)name;
- (BOOL)isPlatformFullyLoaded;
- (void)loadSpecificationsAndPlugins;
- (void)_prependPlatformPathToSearchPathsIfNecessary:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithPropertyListDictionary:(id)arg1 path:(id)arg2 inDomain:(id)arg3;

@end

