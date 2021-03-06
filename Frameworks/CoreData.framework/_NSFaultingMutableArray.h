/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPropertyDescription, NSMutableArray, NSManagedObject;

@interface _NSFaultingMutableArray : NSMutableArray  {
    int _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags { 
        unsigned int _isFault : 1; 
        unsigned int _reserved : 31; 
    } _flags;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)retainCount;
- (id)description;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)retain;
- (void)addObject:(id)arg1;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isFault;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)source;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)objectEnumerator;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)turnIntoFault;
- (id)relationship;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (void)willRead;

@end
