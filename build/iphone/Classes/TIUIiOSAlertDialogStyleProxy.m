/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIIOSALERTDIALOGSTYLE

#import "TIUIiOSAlertDialogStyleProxy.h"
#import <TitaniumKit/TiBase.h>

@implementation TIUIiOSAlertDialogStyleProxy

- (NSString *)apiName
{
  return @"Ti.UI.iOS.AlertDialogStyle";
}

MAKE_SYSTEM_PROP(DEFAULT, UIAlertViewStyleDefault);
MAKE_SYSTEM_PROP(PLAIN_TEXT_INPUT, UIAlertViewStylePlainTextInput);
MAKE_SYSTEM_PROP(SECURE_TEXT_INPUT, UIAlertViewStyleSecureTextInput);
MAKE_SYSTEM_PROP(LOGIN_AND_PASSWORD_INPUT, UIAlertViewStyleLoginAndPasswordInput);
@end

#endif
