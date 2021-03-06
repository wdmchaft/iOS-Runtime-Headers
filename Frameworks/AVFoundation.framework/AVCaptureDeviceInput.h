/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput  {
    AVCaptureDeviceInputInternal *_internal;
}

@property(readonly) AVCaptureDevice * device;

+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)ports;
- (void)willStartForSession:(id)arg1;
- (void)_setDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)notReadyError;
- (void)didStartForSession:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)setSession:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDevice:(id)arg1;
- (id)device;

@end
