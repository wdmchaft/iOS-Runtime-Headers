/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class CPExclusiveLock;

@interface IMEmbeddedDistributedLock : IMDistributedLock  {
    CPExclusiveLock *_lock;
}


- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)name;
- (BOOL)tryLock;

@end
