/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUMediaAlertView : UIAlertView  {
}

+ (id)_willBeginRentalPlaybackAlertWithRentalData:(id)arg1 mediaItem:(id)arg2;
+ (id)_notEnoughRentalTimeRemainingAlertWithMediaItem:(id)arg1;
+ (id)playbackAlertWithRentalMediaItem:(id)arg1 style:(int*)arg2;

- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)show;
- (id)initWithError:(id)arg1;

@end
