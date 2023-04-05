/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDBase/XDUMLClassImp.h>

#import "XCDiffHashing-Protocol.h"

@class NSData;

@interface XDPMEntity : XDUMLClassImp <XCDiffHashing>
{
    id <XDUMLGeneralization> _deletedInheritanceGeneralization;
    NSData *_versionHash;
}

+ (id)dictionaryOfPropertyPLists:(id)arg1;
+ (id)sharedGenericRecordClass;
- (id)propertyDifferencesRelativeToEntity:(id)arg1 versionHashDiffsOnly:(BOOL)arg2;
- (id)undoManager;
- (id)code_uniquedRelationshipDependencyNames;
- (id)code_relationshipDependencies;
- (id)code_hasAToManyRelationship;
- (id)code_hasParent;
- (id)code_entitySuperClass;
- (id)code_entityFileName;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)plistForDraggingtoIB;
- (BOOL)validateEntityClassName:(id *)arg1 error:(id *)arg2;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (BOOL)_isInvalidEntityClassName:(id)arg1;
- (void)removeFromOwningConfigurations;
- (id)owningConfigurations;
- (void)setFetchRequests:(id)arg1;
- (void)removeObjectFromFetchRequests:(id)arg1;
- (void)addObjectToFetchRequests:(id)arg1;
- (void)_didChangeFetchRequests;
- (void)_willChangeFetchRequests;
- (id)fetchRequests;
- (id)newFetchRequestWithName:(id)arg1;
- (id)_mutableFetchRequests;
- (id)pastePropertiesWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteFetchRequestsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteRelationshipsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)newRelationshipWithName:(id)arg1 toDestination:(id)arg2 isToMany:(BOOL)arg3;
- (id)pasteFetchedPropertiesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)newFetchedPropertyWithName:(id)arg1;
- (id)newAttributeWithName:(id)arg1;
- (id)pasteAttributesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)allEntityRelationships;
- (id)allEntityFetchedProperties;
- (id)allEntityAttributes;
- (id)sortedEntityRelationships;
- (id)entityRelationships;
- (id)sortedEntityFetchedProperties;
- (id)entityFetchedProperties;
- (id)sortedEntityAttributes;
- (id)entityAttributes;
- (id)entityAliases;
- (id)entityPropertiesOfClassType:(Class)arg1;
- (void)removeEntityProperty:(id)arg1;
- (void)addEntityProperty:(id)arg1;
- (id)inheritedPropertyForName:(id)arg1;
- (id)entityPropertyForName:(id)arg1;
- (void)setEntityProperties:(id)arg1;
- (void)removeObjectFromEntityPropertiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inEntityPropertiesAtIndex:(unsigned long long)arg2;
- (void)_didChangeProperties;
- (void)_willChangeProperties;
- (void)addObjectToEntityProperties:(id)arg1;
- (id)allEntityProperties;
- (id)entityProperties;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setElementID:(id)arg1;
- (id)elementID;
- (void)setVersionHashModifier:(id)arg1;
- (id)versionHashModifier;
- (id)versionHash;
- (void)setEntityClassName:(id)arg1;
- (id)entityClassName;
- (id)deletedInheritanceGeneralization;
- (id)singleInheritanceGeneralization;
- (BOOL)isTreeLeaf;
- (id)inheritingEntities;
- (void)setInheritingEntities:(id)arg1;
- (BOOL)isChildOfEntity:(id)arg1;
- (id)possibleParentEntities;
- (void)setParentEntityName:(id)arg1;
- (void)setParentEntity:(id)arg1;
- (id)parentEntityName;
- (id)parentEntity;
- (void)setIsAbstract:(BOOL)arg1;
- (BOOL)isAbstract;
- (void)setUMLClassMapping:(id)arg1;
- (id)umlClassMapping;
- (id)model;
- (void)setName:(id)arg1;
- (void)fillInStateWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)addKeysToDictionary:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)childrenForRefactoring;
- (id)nameForRefactoring;
- (id)children;
- (unsigned long long)diffHashForDataSource:(id)arg1;
- (BOOL)isGroupItem;
- (BOOL)italicFont;
- (BOOL)boldFont;

@end

