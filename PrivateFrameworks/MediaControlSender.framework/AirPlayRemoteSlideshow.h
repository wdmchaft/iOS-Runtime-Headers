/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@class MediaControlClient, <AirPlayRemoteSlideshowDelegate>;

@interface AirPlayRemoteSlideshow : NSObject  {
    struct dispatch_queue_s { } *_internalQueue;
    MediaControlClient *_client;
    <AirPlayRemoteSlideshowDelegate> *_delegate;
    struct dispatch_queue_s { } *_userQueue;
    BOOL _started;
    double _startTime;
}

@property <AirPlayRemoteSlideshowDelegate> * delegate;


- (void)setHost:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setPassword:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)stopWithOptions:(id)arg1 completion:(id)arg2;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)_configureEventHandler;

@end
