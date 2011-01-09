/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray, NSString;



@interface ML3SearchStringPredicate : ML3Predicate 
{
    NSArray *_properties;
    NSString *_searchString;
}

@property(copy) NSString *searchString;
@property(copy) NSArray *properties;

+ (id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;

- (id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (id)searchString;
- (void)setSearchString:(id)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;

@end