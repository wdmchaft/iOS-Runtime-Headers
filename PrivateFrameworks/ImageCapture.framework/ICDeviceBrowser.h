/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class <ICDeviceBrowserDelegate>, NSArray;

@interface ICDeviceBrowser : NSObject  {
    id _privateData;
}

@property <ICDeviceBrowserDelegate> * delegate;
@property(getter=isBrowsing,readonly) BOOL browsing;
@property(readonly) NSArray * devices;


- (id)init;
- (void)dealloc;
- (id)devices;
- (BOOL)isBrowsing;
- (id)internalDevices;
- (void)stop;
- (void)finalize;
- (int)start;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
