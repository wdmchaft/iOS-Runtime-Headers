/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSManagedObjectID, NSManagedObjectContext;

@interface NSManagedObject : NSObject  {
    int _cd_rc;
    unsigned int _cd_stateFlags;
    id _cd_rawData;
    id _cd_entity;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    unsigned int _cd_extraFlags;
    id _cd_observationInfo;
    id *_cd_snapshots;
    unsigned int _cd_lockingInfo;
    id _cd_queueReference;
}

+ (id)retain;
+ (id)alloc;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (BOOL)_hasOverriddenAwake;
+ (BOOL)_isGeneratedClass_1;
+ (struct { int x1; void *x2; unsigned long x3; unsigned char x4; unsigned int x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 26; } x9; }*)_PFMOClassFactoryData;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (id)_PFPlaceHolderSingleton_core;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)_PFPlaceHolderSingleton;
+ (id)alloc_10_4;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (char *)_transientPropertiesChangesMask__;
+ (BOOL)_useFastValidationMethod;
+ (id)allocWithEntity:(id)arg1;
+ (void)_entityDeallocated;
+ (BOOL)_isGeneratedClass;
+ (Class)classForEntity:(id)arg1;
+ (id)_retain_1;
+ (void)_release_1;

- (void)willChangeValueForKey:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (id)managedObjectContext;
- (BOOL)hasChanges;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)retainCount;
- (id)description;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (BOOL)isFault;
- (void)setObservationInfo:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)finalize;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (int (*)())methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)implementsSelector:(SEL)arg1;
- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (void)willRefresh:(BOOL)arg1;
- (void)didRefresh:(BOOL)arg1;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (BOOL)_hasAnyObservers__;
- (BOOL)_hasPendingChanges;
- (void)_clearPendingChanges__;
- (BOOL)_hasUnprocessedChanges__;
- (void)_clearUnprocessedChanges__;
- (void)_clearAllChanges__;
- (BOOL)_isSuppressingChangeNotifications__;
- (BOOL)_isSuppressingKVO__;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (BOOL)_isPendingInsertion__;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (BOOL)_isUnprocessedInsertion__;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (unsigned int)_stateFlags;
- (void)_setLastSnapshot__:(id)arg1;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_changedValuesForCurrentEvent;
- (unsigned int)_versionReference__;
- (void)_setVersionReference__:(unsigned int)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setOriginalSnapshot__:(id)arg1;
- (id)_newChangedValuesForRefresh__;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newSnapshotForUndo__;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newCommittedSnapshotValues;
- (id)_changedTransientProperties__;
- (id)_implicitObservationInfo;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_propagateDelete;
- (void)_prepropagateDeleteForMerge;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (BOOL)isUpdated;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (id)observationInfo;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (BOOL)validateForDelete:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (id)committedValuesForKeys:(id)arg1;
- (id)changedValues;
- (void)setNilValueForKey:(id)arg1;
- (unsigned int)faultingState;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (id)_descriptionValues;
- (BOOL)_isPendingUpdate__;
- (BOOL)_isUnprocessedUpdate__;
- (void)didAccessValueForKey:(id)arg1;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned int)arg4 error:(id*)arg5;
- (BOOL)isDeleted;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (BOOL)_validateForSave:(id*)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (id)_allProperties__;
- (id)_originalSnapshot__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_persistentProperties__;
- (id)_reservedCurrentEventSnapshot;
- (id)changedValuesForCurrentEvent;
- (id)_lastSnapshot__;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (id)_newPropertiesForRetainedTypes:(unsigned int*)arg1 andCopiedTypes:(unsigned int*)arg2 preserveFaults:(BOOL)arg3;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_transientProperties__;
- (BOOL)_isKindOfEntity:(id)arg1;
- (id)primitiveValueForKey:(id)arg1;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned int)arg3 onSet:(id)arg4;
- (void)_propagateDelete:(BOOL)arg1;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (BOOL)_isUnprocessedDeletion__;
- (BOOL)_isPendingDeletion__;
- (BOOL)_hasRetainedStoreResources__;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (void)willFireFault;
- (void)didFireFault;
- (void)awakeFromFetch;
- (BOOL)isInserted;
- (void)willTurnIntoFault;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)didTurnIntoFault;
- (id)mutableSetValueForKey:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)willAccessValueForKey:(id)arg1;
- (BOOL)_isValidRelationshipDestination__;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (int)_batch_release__;
- (id)_referenceQueue__;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (id)entity;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned int)arg1 newValue:(id)arg2;
- (id)_faultHandler__;
- (id)objectID;

@end
