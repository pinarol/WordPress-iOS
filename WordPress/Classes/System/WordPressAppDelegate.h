@class AbstractPost;
@class Blog;
@class BlogListViewController;
@class NotificationsViewController;
@class HockeyManager;
@class Reachability;
@class ReaderPostsViewController;
@class WPUserAgent;
@class WPAppAnalytics;
@class WPCrashlytics;
@class WPLogger;

@import CocoaLumberjack;

@interface WordPressAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, strong, readonly) WPAppAnalytics *analytics;
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong, readonly) WPLogger *logger;
@property (nonatomic, assign, readonly) BOOL runningInBackground;
@property (nonatomic, strong, readonly) WPUserAgent *userAgent;

@property (nonatomic, strong, readwrite) Reachability                   *internetReachability;
@property (nonatomic, assign, readwrite) BOOL connectionAvailable;

+ (WordPressAppDelegate *)sharedInstance;

///-----------
/// @name NUX
///-----------
- (void)showWelcomeScreenIfNeededAnimated:(BOOL)animated;
- (void)showWelcomeScreenAnimated:(BOOL)animated thenEditor:(BOOL)thenEditor;
- (void)trackLogoutIfNeeded;
- (void)customizeAppearanceForTextElements;

+ (void)setLogLevel:(DDLogLevel)logLevel;

@end
