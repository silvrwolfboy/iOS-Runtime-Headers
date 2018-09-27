/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUInterstitialAdManager : NSObject {
    <NUPage> * _activePage;
    <NUAdProvider> * _adProvider;
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    <NUInterstitialAdManagerDelegate> * _delegate;
    bool  _enabled;
    <NUAdLayoutOptionsFactory> * _layoutOptionsFactory;
}

@property (nonatomic, retain) <NUPage> *activePage;
@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic) <NUInterstitialAdManagerDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) <NUAdLayoutOptionsFactory> *layoutOptionsFactory;

- (void).cxx_destruct;
- (id)activePage;
- (id)adProvider;
- (id)appConfigurationManager;
- (void)cancelTimer;
- (void)dealloc;
- (id)delegate;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2 layoutOptionsFactory:(id)arg3;
- (bool)isEnabled;
- (id)layoutOptionsFactory;
- (void)loadInterstitial;
- (void)restartTimer;
- (void)setActivePage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)triggerTimerChangesForActivePage:(id)arg1;

@end