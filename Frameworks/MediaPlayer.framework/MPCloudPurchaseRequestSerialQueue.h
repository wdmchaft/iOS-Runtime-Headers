/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPCloudPurchaseRequestSerialQueue : NSObject  {
    NSMutableArray *_requestsToRun;
    struct dispatch_queue_s { } *_requestsQueue;
    struct dispatch_queue_s { } *_serviceQueue;
}

+ (id)mainQueue;

- (id)init;
- (void)dealloc;
- (void)serviceOne;
- (void)prioritizeRequests:(id)arg1 beforeRequest:(id)arg2;
- (void)enqueueRequests:(id)arg1 runBlock:(id)arg2;
- (void)dequeueRequests:(id)arg1;

@end
