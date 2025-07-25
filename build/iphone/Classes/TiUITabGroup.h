/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UITAB

#import <TitaniumKit/TiUIView.h>

// To handle the more tab, we're a delegate of it.
@class TiUITabProxy;
@interface TiUITabGroup : TiUIView <UITabBarControllerDelegate, UINavigationControllerDelegate> {
  @private
  UITabBarController *controller;
  TiUITabProxy *focusedTabProxy;
  BOOL allowConfiguration;
  NSString *editTitle;

  TiColor *barColor;
  TiColor *navTintColor;
  NSMutableDictionary *theAttributes;

  BOOL isTabBarHidden;
}

- (UITabBarController *)tabController;

- (void)open:(id)args;
- (void)close:(id)args;
- (void)hideTabBar:(BOOL)hidden animated:(BOOL)animated;

- (NSDictionary *)focusEvent;

- (UITabBar *)tabbar;

- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container;
- (void)willTransitionToTraitCollection:(UITraitCollection *)newCollection withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container;

@end

#endif
