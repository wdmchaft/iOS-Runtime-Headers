/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet, NSString, <CoreDAVTaskGroupDelegate>, NSSet, NSURL;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSURL *_calendarURL;
    NSString *_summary;
    NSMutableSet *_invalidSharees;
}

@property(retain) NSMutableSet * invalidSharees;
@property(retain) NSString * summary;
@property(retain) NSURL * calendarURL;
@property(retain) NSSet * shareesToSet;
@property(retain) NSSet * shareesToRemove;
@property <CoreDAVTaskGroupDelegate> * delegate;


- (id)description;
- (void)dealloc;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)summary;
- (void)setSummary:(id)arg1;
- (void)setCalendarURL:(id)arg1;
- (id)calendarURL;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (void)setShareesToRemove:(id)arg1;
- (void)setShareesToSet:(id)arg1;
- (void)setInvalidSharees:(id)arg1;
- (id)generateModificationMessageBody;
- (id)shareesToSet;
- (id)shareesToRemove;
- (id)invalidSharees;

@end
