/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURotationController, SUViewControllerFactory, SUViewControllerScriptProperties, NSMutableArray, SUNavigationItem, SUViewControllerContext, NSString, UIViewController;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    BOOL _excludeFromNavigationHistory;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    int _transitionSafetyCount;
}

@property(getter=isLoading) BOOL loading;
@property(readonly) UIViewController * footerViewController;
@property(retain) UIViewController * inputAccessoryViewController;
@property BOOL shouldExcludeFromNavigationHistory;
@property BOOL shouldInvalidateForMemoryPurge;
@property(getter=isVisible,readonly) BOOL visible;
@property(getter=isVisibleAndFrontmost,readonly) BOOL visibleAndFrontmost;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString * defaultPNGName;
@property(readonly) SUNavigationItem * navigationItem;
@property(readonly) SUViewControllerFactory * viewControllerFactory;


- (id)init;
- (void)dealloc;
- (void)applicationWillEnterForeground;
- (void)setLoading:(BOOL)arg1;
- (BOOL)isLoading;
- (BOOL)isVisible;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)defaultPNGName;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (id)_existingNavigationItem;
- (BOOL)_canReloadView;
- (void)loadView;
- (id)inputAccessoryView;
- (id)navigationItem;
- (BOOL)canBecomeFirstResponder;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)becomeFirstResponder;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)arg1;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)applicationDidResume;
- (int)interfaceOrientation;
- (void)applicationWillSuspend;
- (void)invalidate;
- (void)reload;
- (void)setTitle:(id)arg1;
- (void)setShouldInvalidateForMemoryPurge:(BOOL)arg1;
- (id)inputAccessoryViewController;
- (id)footerViewController;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)dismissAfterDialogs;
- (double)defaultPNGExpirationTime;
- (void)cancelOperations;
- (void)operationFinished:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (void)applicationDidEnterBackground;
- (BOOL)isVisibleAndFrontmost;
- (void)_performScheduledRotation:(id)arg1;
- (id)newRotationController;
- (id)_rotationController;
- (void)storePageProtocolDidChange;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (void)invalidateForMemoryPurge;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (BOOL)shouldExcludeFromNavigationHistory;
- (BOOL)shouldInvalidateForMemoryPurge;
- (void)_presentFooterAnimationDidStop;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)resetRestoredContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (id)initWithSection:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)viewControllerFactory;
- (void)setSection:(id)arg1;
- (id)copyArchivableContext;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end
