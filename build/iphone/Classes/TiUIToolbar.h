/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#if defined(USE_TI_UITOOLBAR)
#import <TitaniumKit/TiUIView.h>

@protocol TiToolbarLayoutDelegate
- (NSInteger)positionForBar:(id)bar;
@end

@interface TiUIToolbar : TiUIView <LayoutAutosizing, TiToolbarLayoutDelegate> {
  UIToolbar *toolBar;
  BOOL hideTopBorder;
  BOOL showBottomBorder;
  BOOL extendsBackground;
}

- (UIToolbar *)toolBar;

@end

#endif
