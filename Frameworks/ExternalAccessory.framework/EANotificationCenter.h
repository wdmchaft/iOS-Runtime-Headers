/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSLock;

@interface EANotificationCenter : NSObject  {
    int (*_callback)();
    void *_context;
    struct __CFRunLoop { } *_runLoopForNotifications;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_notifications;
    NSLock *_notificationsLock;
}


- (id)init;
- (void)dealloc;
- (void)notificationCallback;
- (void)setCallback:(int (*)())arg1 andContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)_notificationHandler:(id)arg1;

@end
