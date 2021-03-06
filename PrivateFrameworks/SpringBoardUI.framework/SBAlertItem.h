/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
}

@property BOOL pendInSetupIfNotAllowed;
@property BOOL allowInSetup;
@property BOOL ignoreIfAlreadyDisplaying;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (id)alertSheet;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)allowAutoUnlock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (BOOL)togglesMediaControls;
- (BOOL)dismissOnModalDisplayActivation;
- (void)playPresentationSound;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)lockLabel;
- (id)shortLockLabel;
- (float)lockLabelFontSize;
- (double)autoDismissInterval;
- (void)performUnlockAction;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (BOOL)preventLockOver;
- (void)setPreventLockOver:(BOOL)arg1;
- (void)willActivate;
- (void)didActivate;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (void)screenWillUndim;
- (void)didFailToActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)didDeactivateForReason:(int)arg1;
- (void)noteVolumeOrLockPressed;
- (int)alertItemNotificationType;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (int)alertPriority;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)allowInSetup;
- (BOOL)ignoreIfAlreadyDisplaying;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (Class)alertSheetClass;
- (void)setAllowInSetup:(BOOL)arg1;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (BOOL)didPlayPresentationSound;
- (void)_playPresentationSound;
- (void)buttonDismissed;
- (void)dismiss;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dismiss:(int)arg1;

@end
