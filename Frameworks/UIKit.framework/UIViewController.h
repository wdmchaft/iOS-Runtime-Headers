/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSBundle, UINavigationController, IUWildcatVideosViewController, UINavigationItem, NSMutableArray, UIDropShadowView, NSString, UITransitionView, UIDimmingView, UISplitViewController, UITabBarController, UIPopoverController, UIViewController, UISearchDisplayController, UIStoryboard, UIBarButtonItem, GKBackgroundView, UITabBarItem, NSArray, UIResponder, SUStorePageProtocol, IUiPodSegmentedViewController, UIView;

@interface UIViewController : UIResponder <NSCoding, UIAppearanceContainer, GKContentRefresh, GKURLHandling> {
    UIView *_view;
    UITabBarItem *_tabBarItem;
    UINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    NSString *_title;
    NSString *_nibName;
    NSBundle *_nibBundle;
    UIViewController *_parentViewController;
    UIViewController *_childModalViewController;
    UIViewController *_parentModalViewController;
    UIViewController *_previousRootViewController;
    UIView *_modalTransitionView;
    UIResponder *_modalPreservedFirstResponder;
    UIResponder *_defaultFirstResponder;
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    id _currentAction;
    UIStoryboard *_storyboard;
    NSArray *_storyboardSegueTemplates;
    NSDictionary *_externalObjectsTableForViewLoading;
    UIView *_savedHeaderSuperview;
    UIView *_savedFooterSuperview;
    UIBarButtonItem *_editButtonItem;
    UISearchDisplayController *_searchDisplayController;
    int _modalTransitionStyle;
    int _modalPresentationStyle;
    int _lastKnownInterfaceOrientation;
    UIPopoverController *_popoverController;
    UIView *_containerViewInSheet;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSizeForViewInPopover;
    struct CGSize { 
        float width; 
        float height; 
    } _formSheetSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _afterAppearance;

    int _explicitAppearanceTransitionLevel;
    struct { 
        unsigned int appearState : 2; 
        unsigned int isEditing : 1; 
        unsigned int isPerformingModalTransition : 1; 
        unsigned int hidesBottomBarWhenPushed : 1; 
        unsigned int autoresizesArchivedViewToFullSize : 1; 
        unsigned int viewLoadedFromControllerNib : 1; 
        unsigned int isRootViewController : 1; 
        unsigned int isSheet : 1; 
        unsigned int isSuspended : 1; 
        unsigned int wasApplicationFrameAtSuspend : 1; 
        unsigned int wantsFullScreenLayout : 1; 
        unsigned int shouldUseFullScreenLayout : 1; 
        unsigned int allowsAutorotation : 1; 
        unsigned int searchControllerRetained : 1; 
        unsigned int oldModalInPopover : 1; 
        unsigned int isModalInPopover : 1; 
        unsigned int restoreDeepestFirstResponder : 1; 
        unsigned int isInWillRotateCallback : 1; 
        unsigned int disallowMixedOrientationPresentations : 1; 
        unsigned int isFinishingModalTransition : 1; 
        unsigned int definesPresentationContext : 1; 
        unsigned int providesPresentationContextTransitionStyle : 1; 
        unsigned int containmentSupport : 1; 
        unsigned int isSettingAppearState : 1; 
        unsigned int isInAnimatedVCTransition : 1; 
        unsigned int presentationIsChanging : 1; 
        unsigned int containmentIsChanging : 1; 
        unsigned int explicitTransitionIsAppearing : 1; 
        unsigned int disableAppearanceTransitions : 1; 
        unsigned int needsDidMoveCleanup : 1; 
        unsigned int suppressesBottomBar : 1; 
        unsigned int disableRootPromotion : 1; 
        unsigned int interfaceOrientationReentranceGuard : 1; 
        unsigned int isExecutingAfterAppearance : 1; 
    } _viewControllerFlags;
    NSMutableArray *_childViewControllers;
}

@property(readonly) BOOL shouldShowNowPlayingButton;
@property(readonly) int statusBarStyle;
@property(readonly) BOOL isStatusBarHidden;
@property BOOL allowsCustomizing;
@property(readonly) IUWildcatVideosViewController * wildcatVideosViewController;
@property(readonly) IUiPodSegmentedViewController * segmentedViewController;
@property(retain) SUStorePageProtocol * storePageProtocol;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property(getter=isLoaded,readonly) BOOL loaded;
@property(getter=isLoading,readonly) BOOL loading;
@property(readonly) BOOL shouldInvalidateForMemoryPurge;
@property int _gkShadowStyle;
@property(retain) UIView * _gkTopShadowView;
@property(retain) UIView * _gkBottomShadowView;
@property(readonly) GKBackgroundView * _gkBackgroundView;
@property(readonly) UIPopoverController * gkPopoverController;
@property(readonly) BOOL pl_isInPopover;
@property(readonly) NSArray * childViewControllers;
@property(readonly) UINavigationItem * navigationItem;
@property BOOL hidesBottomBarWhenPushed;
@property(readonly) UINavigationController * navigationController;
@property(readonly) UISplitViewController * splitViewController;
@property(retain) UITabBarItem * tabBarItem;
@property(readonly) UITabBarController * tabBarController;
@property(retain) UIView * view;
@property(copy) NSString * nibName;
@property(retain) NSBundle * nibBundle;
@property(retain) UIStoryboard * storyboard;
@property(copy) NSString * title;
@property UIViewController * parentViewController;
@property(readonly) UIViewController * modalViewController;
@property(readonly) UIViewController * presentedViewController;
@property(readonly) UIViewController * presentingViewController;
@property BOOL definesPresentationContext;
@property BOOL providesPresentationContextTransitionStyle;
@property int modalTransitionStyle;
@property int modalPresentationStyle;
@property BOOL wantsFullScreenLayout;
@property int interfaceOrientation;
@property(readonly) NSArray * storyboardSegueTemplates;
@property(retain) UITransitionView * modalTransitionView;
@property(readonly) UIViewController * _parentViewController;
@property(readonly) UIViewController * _parentModalViewController;
@property NSMutableArray * mutableChildViewControllers;
@property(readonly) unsigned int childViewControllersCount;
@property(readonly) UIView * savedHeaderSuperview;
@property(retain) UIViewController * childModalViewController;
@property UIViewController * parentModalViewController;
@property(retain) UISearchDisplayController * searchDisplayController;
@property BOOL searchBarHidNavBar;
@property(retain) UIDropShadowView * dropShadowView;
@property(readonly) BOOL _isModalSheet;
@property(readonly) BOOL _isPresentedModally;
@property(readonly) BOOL _isPresentedFormSheet;
@property(readonly) BOOL _useSheetRotation;
@property(readonly) BOOL _isDimmingBackground;
@property(readonly) BOOL isSettingAppearState;
@property(copy) id afterAppearanceBlock;
@property struct CGSize { float x1; float x2; } contentSizeForViewInPopover;
@property BOOL modalInPopover;
@property(getter=isInWillRotateCallback) BOOL inWillRotateCallback;
@property(getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;
@property(readonly) BOOL inExplicitAppearanceTransition;
@property BOOL appearanceTransitionsAreDisabled;
@property BOOL disableRootPromotion;
@property BOOL needsDidMoveCleanup;
@property(getter=isFinishingModalTransition) BOOL finishingModalTransition;

+ (void)attemptRotationToDeviceOrientation;
+ (double)customTransitionDuration;
+ (void)setCustomTransitionDuration:(double)arg1;
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+ (id)_allDescriptions;
+ (void)removeViewControllerForView:(id)arg1;
+ (void)_disableNestedViewControllerSupport:(BOOL)arg1;
+ (void)_forceLegacyModalViewControllers:(BOOL)arg1;
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;
+ (int)_keyboardDirectionForTransition:(int)arg1 isOrderingIn:(BOOL)arg2;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (BOOL)_shouldUseLegacyModalViewControllers;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ignoreInWindowCheck:(BOOL)arg3;
+ (id)existingNibNameMatchingClassName:(id)arg1 bundle:(id)arg2;
+ (BOOL)doesOverrideViewControllerMethod:(SEL)arg1;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (BOOL)_isNestedViewControllerSupportDisabled;
+ (struct CGSize { float x1; float x2; })defaultFormSheetSize;
+ (double)durationForTransition:(int)arg1;
+ (id)viewControllerForView:(id)arg1;
+ (void)_endAppearanceTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
+ (void)_beginAppearanceTransitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
+ (void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)arg1;
+ (void)_iTunesStoreUI_dequeueTransitionSafeInvocations;
+ (void)_iTunesStoreUI_timeoutTransitionSafety;
+ (void)beginTransitionSafety;
+ (void)endTransitionSafety;
+ (id)transitionSafetyDelegate;
+ (id)transitionSafePerformer:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_setUseTelephonyUI:(BOOL)arg1;
- (BOOL)_displaysFullScreen;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (int)_imagePickerStatusBarStyle;
- (void)attentionClassDumpUser:(id)arg1 yesItsUsAgain:(id)arg2 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg3 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg4 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg5;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 duration:(double)arg3 options:(unsigned int)arg4 animations:(id)arg5 completion:(id)arg6;
- (void)addChildViewController:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)_setSuppressesBottomBar:(BOOL)arg1;
- (BOOL)_suppressesBottomBar;
- (void)setHidesBottomBarWhenPushed:(BOOL)arg1;
- (BOOL)hidesBottomBarWhenPushed;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)editButtonItem;
- (void)_editingAnimationFinished;
- (void)_toggleEditing:(id)arg1;
- (id)splitViewController;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (id)tabBarController;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarItem;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)setModalTransitionStyle:(int)arg1;
- (id)parentModalViewController;
- (void)_setStoryboard:(id)arg1;
- (id)savedHeaderSuperview;
- (id)afterAppearanceBlock;
- (BOOL)isMovingFromParentViewController;
- (BOOL)isMovingToParentViewController;
- (BOOL)isBeingDismissed;
- (BOOL)isBeingPresented;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
- (id)defaultPNGName;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })tranformForScreenOriginRotation:(float)arg1;
- (void)_updateInterfaceOrientationAnimated:(BOOL)arg1;
- (BOOL)_isInterfaceAutorotationDisabled;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (void)_setDisallowMixedOrientationPresentations:(BOOL)arg1;
- (BOOL)_disallowMixedOrientationPresentations;
- (void)setProvidesPresentationContextTransitionStyle:(BOOL)arg1;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dismissModalViewControllerWithTransition:(int)arg1;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)_notifyPopOverThatView:(id)arg1 isTransitioning:(BOOL)arg2;
- (void)userDidCancelPopoverView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_ancestorViewControllerIsInPopover;
- (void)_sheetPresentAnimationDidStop;
- (void)_overlayPresentAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_completionBlock;
- (id)modalViewController;
- (void)setFinishingModalTransition:(BOOL)arg1;
- (BOOL)isFinishingModalTransition;
- (void)setPerformingModalTransition:(BOOL)arg1;
- (void)setWantsFullScreenLayout:(BOOL)arg1;
- (void)_endAppearanceTransitionToViewController:(id)arg1;
- (void)_beginAppearanceTransitionToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setNeedsDidMoveCleanup:(BOOL)arg1;
- (BOOL)needsDidMoveCleanup;
- (void)setAppearanceTransitionsAreDisabled:(BOOL)arg1;
- (BOOL)appearanceTransitionsAreDisabled;
- (void)cancelBeginAppearanceTransition;
- (BOOL)isUsingLegacyContainment;
- (void)setUseLegacyContainment:(BOOL)arg1;
- (BOOL)_hasAppeared;
- (void)_setPreviousRootViewController:(id)arg1;
- (id)_previousRootViewController;
- (BOOL)isViewControllerModallyPresented;
- (void)setMutableChildViewControllers:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)_addChildViewController:(id)arg1 performHierarchyCheck:(BOOL)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (BOOL)_containsFirstResponder;
- (void)setAutoresizesArchivedViewToFullSize:(BOOL)arg1;
- (void)_setExistingTabBarItem:(id)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)contentScrollView;
- (void)unloadView;
- (float)_statusBarHeightForCurrentInterfaceOrientation;
- (void)setDefaultFirstResponder:(id)arg1;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForContentInPopover;
- (BOOL)modalInPopover;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isAppearingOrAppeared;
- (BOOL)searchBarHidNavBar;
- (id)navigationController;
- (void)_setSearchDisplayController:(id)arg1 retain:(BOOL)arg2;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1 forWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForOrientation:(int)arg1;
- (struct CGPoint { float x1; float x2; })_centerForOrientation:(int)arg1;
- (void)window:(id)arg1 resizeFromOrientation:(int)arg2;
- (BOOL)_useSheetRotation;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (void)_enumerateVisibleChildControllers:(BOOL)arg1 includePresentedChildren:(BOOL)arg2 usingBlock:(id)arg3;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (BOOL)forwardRotationMethods;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setInWillRotateCallback:(BOOL)arg1;
- (void)_setInterfaceOrientationOnModalRecursively:(int)arg1;
- (id)rotatingFooterView;
- (id)searchDisplayController;
- (id)rotatingHeaderView;
- (BOOL)_allowsAutorotation;
- (BOOL)_shouldAutoPinInputViewsForModalFormSheet;
- (void)_handleDismiss;
- (void)_legacyModalDismissTransitionDidComplete;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_clearLastKnownInterfaceOrientation;
- (void)_clearDismissButton;
- (void)_endModalPresentationInPopover;
- (void)_legacyDismissModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_resetViewController;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(id)arg3;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id)arg2;
- (void)_didFinishDismissTransition;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(id)arg3;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)_addDismissButton;
- (void)_didFinishPresentTransition;
- (void)_startModalPresentationInPopover;
- (id)_backgroundColorForModalFormSheet;
- (BOOL)_shouldIgnoreTouchesForModalFormSheet;
- (void)setDropShadowView:(id)arg1;
- (void)_legacyPresentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (int)_transitionForModalTransitionStyle:(int)arg1 appearing:(BOOL)arg2;
- (BOOL)providesPresentationContextTransitionStyle;
- (BOOL)isSheet;
- (int)modalTransitionStyle;
- (void)setModalPresentationStyle:(int)arg1;
- (BOOL)_isPresentedFormSheet;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (id)presentingViewController;
- (BOOL)_isDimmingBackground;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)setModalTransitionView:(id)arg1;
- (id)_viewForModalPresentationInPopover;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (id)_rootAncestorViewController;
- (id)currentAction;
- (BOOL)_reallyWantsFullScreenLayout;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (BOOL)_isViewInWindowWithoutParentViewController;
- (id)dropShadowView;
- (id)modalTransitionView;
- (id)_nonModalParentViewController;
- (void)unloadViewIfReloadable;
- (id)existingView;
- (void)purgeMemoryForReason:(int)arg1;
- (id)_descriptionWithChildren:(int)arg1;
- (id)_description;
- (void)setInterfaceOrientation:(int)arg1;
- (BOOL)_isModalSheet;
- (BOOL)_shouldUseFullScreenLayout;
- (BOOL)_skipDefaultAppearStateCallbacks;
- (id)presentedViewController;
- (BOOL)_didSelfOrAncestorBeginAppearanceTransition;
- (BOOL)disableRootPromotion;
- (BOOL)_endAppearanceTransition:(id)arg1;
- (void)__viewDidDisappear:(BOOL)arg1;
- (void)__viewDidAppear:(BOOL)arg1;
- (void)__viewWillDisappear:(BOOL)arg1;
- (void)__viewWillAppear:(BOOL)arg1;
- (void)setAfterAppearanceBlock:(id)arg1;
- (void)_setViewAppearState:(int)arg1 isAnimating:(BOOL)arg2;
- (void)_setAppearState:(int)arg1;
- (id)childViewControllers;
- (unsigned int)childViewControllersCount;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isSettingAppearState;
- (BOOL)containmentSupport;
- (void)setContainmentSupport:(BOOL)arg1;
- (id)_ancestorViewControllerOfClass:(Class)arg1 allowModalParent:(BOOL)arg2;
- (id)_modalPresenter:(int)arg1;
- (id)_nonModalAncestorViewController;
- (id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(BOOL)arg1;
- (BOOL)definesPresentationContext;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_removeChildViewController:(id)arg1;
- (void)_addChildViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)_parentViewController;
- (id)childModalViewController;
- (void)updateTitleForViewController:(id)arg1;
- (id)_existingTabBarItem;
- (id)_existingNavigationItem;
- (id)_segueTemplateWithIdentifier:(id)arg1;
- (id)storyboardSegueTemplates;
- (BOOL)autoresizesArchivedViewToFullSize;
- (id)mutableChildViewControllers;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_visibleView;
- (void)viewDidUnload;
- (void)setSearchDisplayController:(id)arg1;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)viewWillUnload;
- (BOOL)_canReloadView;
- (void)unloadViewForced:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultInitialViewFrame;
- (void)_loadViewFromNibNamed:(id)arg1 bundle:(id)arg2;
- (id)nibName;
- (void)setNibBundle:(id)arg1;
- (void)setNibName:(id)arg1;
- (id)nibBundle;
- (void)loadView;
- (id)storyboard;
- (void)setParentModalViewController:(id)arg1;
- (void)setChildModalViewController:(id)arg1;
- (void)removeFromParentViewController;
- (void)forceUnloadView;
- (void)_resignRootViewController;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)viewDidLoad;
- (BOOL)_doesSelfOrAncestorPassPredicate:(id)arg1;
- (void)autoresizeArchivedView;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDefinesPresentationContext:(BOOL)arg1;
- (BOOL)_isPresentationContextByDefault;
- (void)_doCommonSetup;
- (void)accessibilityLargeTextDidChange;
- (void)applicationWantsViewsToDisappear;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)setFormSheetSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setAllowsAutorotation:(BOOL)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)setIsSheet:(BOOL)arg1;
- (BOOL)isModalInPopover;
- (void)setModalInPopover:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)_popoverController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;
- (double)durationForTransition:(int)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (id)navigationItem;
- (id)title;
- (int)modalPresentationStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (BOOL)endAppearanceTransition;
- (BOOL)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setInAnimatedVCTransition:(BOOL)arg1;
- (BOOL)isPerformingModalTransition;
- (id)_parentModalViewController;
- (BOOL)isInAnimatedVCTransition;
- (BOOL)inExplicitAppearanceTransition;
- (id)_existingView;
- (int)_appearState;
- (id)parentViewController;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)_appearanceContainer;
- (id)_firstResponder;
- (id)rotatingContentViewForWindow:(id)arg1;
- (BOOL)isInWillRotateCallback;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_updateLastKnownInterfaceOrientationOnPresentionStack:(int)arg1;
- (BOOL)_isViewControllerInWindowHierarchy;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (id)viewControllerForRotation;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (BOOL)_isPresentedModally;
- (void)setDisableRootPromotion:(BOOL)arg1;
- (BOOL)isViewLoaded;
- (int)_lastKnownInterfaceOrientation;
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)awakeFromNib;
- (void)_executeAfterAppearanceBlock;
- (id)defaultFirstResponder;
- (void)applicationDidResume;
- (void)setView:(id)arg1;
- (id)view;
- (void)didReceiveMemoryWarning;
- (int)interfaceOrientation;
- (id)nextResponder;
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)arg1;
- (void)applicationWillSuspend;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ab_wantsToPresentModalViewControllerWithoutAnyHelp;
- (int)abViewControllerType;
- (void)presentMoviePlayerViewControllerAnimated:(id)arg1;
- (void)dismissMoviePlayerViewControllerAnimated;
- (BOOL)_hasAncestorViewController:(id)arg1;
- (void)_addChildViewAndViewController:(id)arg1 asSubviewOfView:(id)arg2;
- (void)_addChildViewAndViewController:(id)arg1;
- (void)_addChildViewAndViewController:(id)arg1 asSubviewOfView:(id)arg2 addSubviewBlock:(id)arg3;
- (void)_removeFromParentViewAndViewController;
- (int)uiipc_filterForMediaTypes:(id)arg1;
- (void)revertStatusBarStyle:(int)arg1 currentStatusBarStyle:(int)arg2 animated:(BOOL)arg3;
- (int)setStatusBarStyleForFullScreenViewAnimated:(BOOL)arg1 useTelephonyUI:(BOOL)arg2 canHideStatusBar:(BOOL)arg3 newStatusBarStyle:(int*)arg4;
- (id)uiipc_imagePickerOptions;
- (BOOL)uiipc_useTelephonyUI;
- (id)uiipc_imagePickerController;
- (void)showActionSheet:(id)arg1 animated:(BOOL)arg2;
- (BOOL)pl_isInPopover;
- (id)gkPopoverController;
- (void)gkAdjustBackgroundForSplitPosition;
- (id)_gkBackgroundView;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkResetContents;
- (void)_gkForceNextContentUpdate;
- (void)set_gkBottomShadowView:(id)arg1;
- (void)set_gkTopShadowView:(id)arg1;
- (id)_gkBottomShadowView;
- (int)_gkShadowStyle;
- (id)_gkTopShadowView;
- (void)_gkAdjustShadows;
- (void)set_gkShadowStyle:(int)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (id)section;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (BOOL)isInMoreList;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (BOOL)isDescendantOfViewController:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (id)copyArchivableJetsamContext;
- (BOOL)isRootViewController;
- (BOOL)shouldInvalidateForMemoryPurge;
- (void)resetRestoredContext;
- (id)_sectionForViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3;
- (BOOL)hasDisplayableContent;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)setStorePageProtocol:(id)arg1;
- (void)storePageCleanupBeforeTearDown;
- (id)displayedURL;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)viewIsReady;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptViewController;
- (BOOL)showsBackgroundShadow;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (BOOL)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;
- (BOOL)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (id)overlayViewController;
- (id)scriptWindowContext;
- (id)storeSplitViewController;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (struct CGSize { float x1; float x2; })maximumViewSize;
- (id)navigationItemForScriptInterface;
- (id)iTunesStoreUI_searchFieldController;
- (void)viewWillAppearForRemoteEvent;
- (void)remoteEventMoveDown;
- (void)remoteEventMoveUp;
- (void)remoteEventSelectItem;
- (id)segmentedViewController;
- (id)wildcatVideosViewController;
- (BOOL)rotationDisabled;
- (void)updateInterfaceOrientation;
- (id)player;
- (int)localizedCompare:(id)arg1;
- (BOOL)allowsCustomizing;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (id)context;
- (int)statusBarStyle;
- (BOOL)isStatusBarHidden;
- (id)query;
- (BOOL)shouldShowNowPlayingButton;
- (BOOL)shouldHideContainerNavigationBar;
- (id)rootIdentifier;
- (BOOL)shouldDisableWhileDownloading;
- (BOOL)handlePlaybackDataSource:(id)arg1;
- (id)modalContext;
- (BOOL)shouldBeCustomizableInTabBar;
- (id)_snapshotViewFromBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 antiAliasedEdgeMask:(unsigned long)arg2;
- (void)foldingTransitionViewDidTakeSnapshot;
- (void)foldingTransitionViewWillTakeSnapshot;
- (id)foldingTransitionFaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 antiAliasedEdgeMask:(unsigned long)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })foldingTransitionFrontFaceFrame;
- (id)newSnapshotFaceViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 antiAliasedEdgeMask:(unsigned long)arg2;

@end
