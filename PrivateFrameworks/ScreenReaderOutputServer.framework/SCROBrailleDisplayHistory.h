/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayHistory : NSObject  {
    struct __CFArray { } *_announcements;
    struct __CFArray { } *_unreadSnapshot;
    long _currentIndex;
    long _unreadCount;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)moveToMostRecent;
- (BOOL)isOnMostRecent;
- (BOOL)moveToPrevious;
- (BOOL)moveToNext;
- (id)currentString;
- (BOOL)hasUnread;
- (void)markSnapshotAsRead;
- (void)snapshotUnread;
- (void)addString:(id)arg1;
- (BOOL)_moveIndexBy:(long)arg1;

@end
