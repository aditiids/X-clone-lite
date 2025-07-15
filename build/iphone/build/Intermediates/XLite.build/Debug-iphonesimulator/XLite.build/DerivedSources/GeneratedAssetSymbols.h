#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The resource bundle ID.
static NSString * const ACBundleID AC_SWIFT_PRIVATE = @"com.aditi.xplore";

/// The "backgroundColor" asset catalog color resource.
static NSString * const ACColorNameBackgroundColor AC_SWIFT_PRIVATE = @"backgroundColor";

/// The "textColor" asset catalog color resource.
static NSString * const ACColorNameTextColor AC_SWIFT_PRIVATE = @"textColor";

/// The "LaunchLogo" asset catalog image resource.
static NSString * const ACImageNameLaunchLogo AC_SWIFT_PRIVATE = @"LaunchLogo";

/// The "assets/images/X_logo" asset catalog image resource.
static NSString * const ACImageNameAssetsImagesXLogo AC_SWIFT_PRIVATE = @"assets/images/X_logo";

/// The "assets/images/X_new" asset catalog image resource.
static NSString * const ACImageNameAssetsImagesXNew AC_SWIFT_PRIVATE = @"assets/images/X_new";

/// The "assets/images/X_neww" asset catalog image resource.
static NSString * const ACImageNameAssetsImagesXNeww AC_SWIFT_PRIVATE = @"assets/images/X_neww";

/// The "assets/images/tab1" asset catalog image resource.
static NSString * const ACImageNameAssetsImagesTab1 AC_SWIFT_PRIVATE = @"assets/images/tab1";

/// The "assets/images/tab2" asset catalog image resource.
static NSString * const ACImageNameAssetsImagesTab2 AC_SWIFT_PRIVATE = @"assets/images/tab2";

#undef AC_SWIFT_PRIVATE
