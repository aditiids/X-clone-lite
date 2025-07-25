/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIOPTIONDIALOG

#import <TitaniumKit/TiProxy.h>
@class TiViewProxy;

@interface TiUIOptionDialogProxy : TiProxy <UIPopoverPresentationControllerDelegate> {

  UIAlertController *alertController;
  TiViewProxy *dialogView;
  UIColor *tintColor;
  CGRect dialogRect;
  BOOL animated;
  NSUInteger accumulatedOrientationChanges;
  BOOL showDialog;
  BOOL persistentFlag;
  BOOL forceOpaqueBackground;
  int cancelButtonIndex;
  int destructiveButtonIndex;
}

@property (nonatomic, retain, readwrite) TiViewProxy *dialogView;

@end

#endif
