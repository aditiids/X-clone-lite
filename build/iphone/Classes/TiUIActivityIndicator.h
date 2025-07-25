/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIACTIVITYINDICATOR

#import <TitaniumKit/TiUIView.h>

@class WebFont;
@interface TiUIActivityIndicator : TiUIView <LayoutAutosizing> {
  @private
  UIActivityIndicatorView *indicatorView;
  UIActivityIndicatorViewStyle style;

  WebFont *fontDesc;
  UIColor *textColor;
  UIColor *spinnerColor;
  UILabel *messageLabel;

#ifdef TI_USE_AUTOLAYOUT
  UIView *backgroundView;
  BOOL _constraintsAdded;
#endif
}

- (UIActivityIndicatorView *)indicatorView;
- (UILabel *)messageLabel;

@end

#endif
