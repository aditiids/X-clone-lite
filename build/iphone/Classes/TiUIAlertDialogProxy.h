/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import <TitaniumKit/TiViewProxy.h>

@interface TiUIAlertDialogProxy : TiViewProxy {
  @private
  UIAlertController *alertController;
  BOOL persistentFlag;
  int cancelIndex;
  int destructiveIndex;
  int preferredIndex;
  int style;
}

- (void)show:(id)unused;
- (void)hide:(id)args;

@end
