/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIIOSMENUPOPUP
#import <TitaniumKit/TiViewProxy.h>

@interface TiUIiOSMenuPopupProxy : TiViewProxy

/**
 The menu items to be presented inside the menu.
 */
@property (nonatomic, retain) NSMutableArray *menuItems;

/**
 Shows the menu popup.
 */
- (void)show:(id)args;

/**
 Hides the menu popup.
 */
- (void)hide:(id)args;

/*
 Sets the items of the menu.
 */
- (void)setItems:(id)args;

/*
 Determines if the menu is currenty visible.
 */
- (NSNumber *)isVisible:(id)unused;

@end
#endif
