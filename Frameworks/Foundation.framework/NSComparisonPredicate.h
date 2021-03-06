/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate  {
    void *_reserved2;
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned int)arg3 type:(unsigned int)arg4 options:(unsigned int)arg5;

- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (SEL)customSelector;
- (void)_acceptExpressions:(id)arg1 flags:(unsigned int)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned int)arg2;
- (id)keyPathExpressionForString:(id)arg1;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)generateMetadataDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned int)arg3 type:(unsigned int)arg4 options:(unsigned int)arg5;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (void)setPredicateOperator:(id)arg1;
- (id)rightExpression;
- (id)leftExpression;
- (unsigned int)comparisonPredicateModifier;
- (unsigned int)predicateOperatorType;
- (id)predicateOperator;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)minimalFormInContext:(id)arg1;
- (BOOL)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;

@end
