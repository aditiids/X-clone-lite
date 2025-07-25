/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#import "KrollBridge.h"
#import "TiUIView.h"
#import "TiViewProxy.h"
#import "TiWindowProxy.h"

// TODO: we probably should split this ViewProxy into a separate TiUIView like normal

@interface TiUIWindowProxy : TiWindowProxy {
  @private
  KrollBridge *context;
  BOOL hasToolbar;
  BOOL contextReady;
  BOOL shouldUpdateNavBar;
  UIImageView *barImageView;
  NSURL *oldBaseURL;
  id latch;
  UIEdgeInsets oldSafeAreaInsets;
}

- (void)refreshBackButton;
- (void)updateNavBar;
- (void)boot:(BOOL)timeout args:(id)args;

@property (nonatomic, assign) TiViewProxy *safeAreaViewProxy;
@property (nonatomic) BOOL shouldExtendSafeArea;

@end
