/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Container, NSArray, ML3Predicate;

@interface ML3ContainerQuery : ML3Query  {
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
}

@property(readonly) NSArray * limitedPersistentIDs;
@property(readonly) ML3Container * container;

+ (id)directionalityArrayForCount:(unsigned int)arg1 isDescending:(BOOL)arg2;

- (void)dealloc;
- (id)container;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)limitedPersistentIDs;
- (BOOL)requiresSmartLimiting;
- (id)selectLimitingSQL;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingProperties:(id)arg4;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;

@end
