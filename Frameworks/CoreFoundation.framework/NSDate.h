/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSDate : NSObject <NSCopying, NSCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantPast;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)distantFuture;
+ (double)timeIntervalSinceReferenceDate;
+ (id)date;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (int)daysSince1970;
+ (id)dateForDaysSince1970:(int)arg1;
+ (id)_mapkit_dateWithAbsoluteTime:(double)arg1;
+ (id)mf_copyDateInCommonFormatsWithString:(id)arg1;
+ (id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkServerTimestamp;
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1;
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)arg1;
+ (id)dateWithActiveSyncString:(id)arg1;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)dateWithWordDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)addTimeInterval:(double)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (BOOL)isNSDate__;
- (unsigned long)_cfTypeID;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceDate:(id)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)earlierDate:(id)arg1;
- (id)laterDate:(id)arg1;
- (BOOL)isEqualToDate:(id)arg1;
- (int)compare:(id)arg1;
- (double)timeIntervalSince1970;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (double)timeIntervalSinceReferenceDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_web_isToday;
- (id)_web_RFC1123DateString;
- (int)_web_compareDay:(id)arg1;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)dateForEndOfDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForDayInTimeZone:(id)arg1;
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1 withSpacer:(BOOL)arg2;
- (id)_gkServerTimestamp;
- (id)activeSyncStringForYearMonthDay;
- (id)activeSyncStringWithoutSeparators;
- (id)activeSyncString;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)nearestMidnight;
- (id)tzDateToDateInGMT:(id)arg1;
- (void)copyToWordDate:(struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

@end
