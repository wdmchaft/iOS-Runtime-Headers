/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPortraitInfoOverlay, MPPortraitTransportControls, UINavigationBar;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    MPPortraitInfoOverlay *_overlayView;
    UINavigationBar *_navigationBar;
    MPPortraitTransportControls *_transportControls;
    unsigned int _ownsTransportControls : 1;
    unsigned int _waitingToShowOverlay : 1;
}

@property(readonly) BOOL ownsTransportControls;
@property(retain) UINavigationBar * navigationBar;

+ (BOOL)supportsFullscreenDisplay;

- (id)init;
- (void)dealloc;
- (void)transportControlsDidResize:(id)arg1;
- (BOOL)ownsTransportControls;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (id)newOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showOverlayView;
- (void)_handleSwipeRight;
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)arg1;
- (void)_showOverlayView:(BOOL)arg1;
- (void)_removeOverlayView;
- (id)_overlayView;
- (id)videoOverlayViewIfLoaded;
- (void)showChaptersController;
- (BOOL)allowsDetailScrubbing;
- (id)createChapterFlipTransition;
- (void)stopTicking;
- (void)startTicking;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (void)displayVideoViewOnScreen;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (id)newAlternateTracksTransition;
- (void)setDisabledParts:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundViewSnapshotFrame;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (id)initWithTransportControls:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (id)videoOverlayView;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (int)statusBarStyle;
- (BOOL)isStatusBarHidden;
- (void)setItem:(id)arg1;

@end
