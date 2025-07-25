/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiViewProxy.h"

// marker interface for toolbars

/**
 Protocol for toolbar classes.
 */
@protocol TiToolbar <NSObject>
@required

/**
 Returns the underlying toolbar.
 @return The toolbar.
 */
- (UIToolbar *)toolbar;

@end
