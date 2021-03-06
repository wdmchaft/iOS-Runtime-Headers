/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, MPAVController, UIView, UITabBarItem, IUViewControllerContext, NSMutableArray;

@interface IUiPodViewController : UIViewController <MPAVControllerNode, IUModalContextDelegate, ViewControllerArchiveNode> {
    MPAVController *_player;
    UIView *_backstopView;
    IUViewControllerContext *_context;
    UIView *_loadingView;
    IUModalContext *_modalContext;
    IUModalContext *_presentedModalContext;
    NSMutableArray *_scheduledInvocations;
    int _transitionCount;
    unsigned int _appearanceState;
    UITabBarItem *_cachedTabBarItem;
    BOOL _shouldConfigureNavigationItem;
    unsigned int _deviceOrientationNotificationsEnabled : 1;
    unsigned int _loading : 1;
    unsigned int _reloadOnNextAppear : 1;
    int _playerLockedCount;
}

@property BOOL shouldConfigureNavigationItem;
@property(retain) IUViewControllerContext * context;
@property(getter=isCurrentController,readonly) BOOL currentController;
@property(getter=isLoading) BOOL loading;
@property(retain) IUModalContext * modalContext;
@property(readonly) int modalTransition;
@property(readonly) int navigationTransition;
@property(retain) MPAVController * player;

+ (Class)backstopViewClass;
+ (BOOL)supportsViewControllerStyle:(int)arg1;
+ (id)newViewControllerForContext:(id)arg1 redirectType:(int)arg2 didRedirect:(BOOL*)arg3;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)beginTransition;
- (void)endTransition;
- (void)setLoading:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)isLoading;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (void)applicationSuspendedEventsOnly:(BOOL)arg1;
- (void)addChildViewController:(id)arg1;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarItem;
- (void)removeChildViewController:(id)arg1;
- (void)_setExistingTabBarItem:(id)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (id)_existingTabBarItem;
- (void)viewDidUnload;
- (BOOL)_canReloadView;
- (void)loadView;
- (BOOL)isTransitioning;
- (id)context;
- (void)setContext:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)query;
- (void)reloadData;
- (void)setShouldConfigureNavigationItem:(BOOL)arg1;
- (BOOL)shouldConfigureNavigationItem;
- (BOOL)isAppearingOrAppeared;
- (BOOL)isDisappearingOrDisappeared;
- (BOOL)isWindowRotatable:(id)arg1;
- (id)transitionSafePerformerWithTarget:(id)arg1;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1;
- (BOOL)handleTabBarSelectedViewController:(id)arg1;
- (BOOL)isViewWillAppearReappearingForNavigationPop;
- (BOOL)isViewWillAppearReappearing;
- (void)_deviceOrientationChangedNotification:(id)arg1;
- (void)deviceOrientationChanged:(int)arg1;
- (void)scheduleReloadData;
- (void)_enableDeviceOrientationNotifications;
- (BOOL)shouldShowNowPlayingButton;
- (void)unloadReloadableContextDataIfPossible;
- (void)_delayedPerformScheduledInvocations;
- (void)_reloadForModalContextChange;
- (id)_loadingView;
- (void)_dataSourceInvalidate:(id)arg1;
- (void)reloadDataForDataSourceInvalidation;
- (BOOL)isCurrentController;
- (void)viewControllerDidFinishReloadForDataSourceInvalidation;
- (void)_disableDeviceOrientationNotifications;
- (void)_suspendChangedNotification:(id)arg1;
- (void)_eventsOnlyChangedNotification:(id)arg1;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (int)modalTransition;
- (void)updateForInterfaceOrientation:(int)arg1;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (void)reloadNavigationItem;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
- (int)navigationTransition;
- (void)configureRootNavigationItem:(id)arg1 navigationBar:(id)arg2;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (void)modalContextWillDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)configureNavigationItem:(id)arg1;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)scheduleInvocationAfterTransition:(id)arg1;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)modalContext;

@end
