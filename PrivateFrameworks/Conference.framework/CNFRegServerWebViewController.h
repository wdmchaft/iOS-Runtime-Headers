/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, NSMutableDictionary, NSString, NSTimer, CNFRegLoadingView, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    UIWebView *_webView;
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    NSString *_leftButtonAction;
    NSString *_rightButtonAction;
    NSMutableDictionary *_urlHandlers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    NSTimer *_timeoutTimer;
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
        unsigned int timedOut; 
    } _webControllerFlags;
}

@property(readonly) BOOL isLoading;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL timedOut;
@property(retain) CNFRegController * regController;
@property(copy) id alertHandler;
@property(copy) NSString * rightButtonAction;
@property(copy) NSString * leftButtonAction;
@property(retain) UIWebView * webView;


- (id)init;
- (void)dealloc;
- (void)setHeadersForRequest:(id)arg1;
- (void)loadURL:(id)arg1;
- (id)initWithRegController:(id)arg1;
- (void)setWantsWifi:(BOOL)arg1;
- (BOOL)intForServerValue:(id)arg1 value:(int*)arg2 defaultValue:(int)arg3;
- (BOOL)uintForServerValue:(id)arg1 value:(unsigned int*)arg2 defaultValue:(unsigned int)arg3;
- (void)_startTimeoutWithDuration:(double)arg1;
- (BOOL)timedOut;
- (void)setRegController:(id)arg1;
- (void)setupUrlHandlers;
- (void)clearUrlHandlers;
- (void)_clearLeftButtonTarget;
- (void)_clearRightButtonTarget;
- (void)_stopTimeout;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (id)schemeForURL:(id)arg1;
- (BOOL)_shouldLog;
- (SEL)selectorForScheme:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)showSpinner;
- (void)hideSpinner;
- (id)overrideURLForURL:(id)arg1;
- (void)parseNavBarURL:(id)arg1;
- (void)addSelector:(SEL)arg1 forScheme:(id)arg2;
- (void)parseAlertURL:(id)arg1;
- (id)numberForServerValue:(id)arg1;
- (id)functionStringFromCallbackName:(id)arg1;
- (struct OpaqueJSContext { }*)javaScriptExecutionContext;
- (id)javaScriptStringForValue:(struct OpaqueJSValue { }*)arg1;
- (id)executeJavaScript:(id)arg1 error:(id*)arg2;
- (void)handleLeftButtonError:(id)arg1;
- (id)leftButtonAction;
- (void)handleRightButtonError:(id)arg1;
- (id)rightButtonAction;
- (id)queryDictionaryForUrl:(id)arg1;
- (BOOL)boolForServerValue:(id)arg1 value:(BOOL*)arg2 defaultValue:(BOOL)arg3;
- (void)leftButtonTapped:(id)arg1;
- (id)navButtonWithTitle:(id)arg1 action:(SEL)arg2 highlight:(BOOL)arg3;
- (void)setLeftButtonAction:(id)arg1;
- (void)rightButtonTapped:(id)arg1;
- (void)setRightButtonAction:(id)arg1;
- (id)functionStringFromCallbackName:(id)arg1 withStringArgument:(id)arg2;
- (id)executeJavaScript:(id)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_handleTimeout;
- (id)logName;
- (id)regController;
- (void)setAlertHandler:(id)arg1;
- (id)alertHandler;
- (BOOL)isLoaded;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)isLoading;
- (void)setWebView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)webView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationWillSuspend;

@end
