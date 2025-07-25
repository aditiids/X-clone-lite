/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIIOSDOCUMENTVIEWER

#import <TitaniumKit/TiProxy.h>

@interface TiUIiOSDocumentViewerProxy : TiProxy <UIDocumentInteractionControllerDelegate> {
  @private
  UIDocumentInteractionController *controller;
}

@property (nonatomic, readwrite, assign) id url;
@property (nonatomic, readonly) id icons;
@property (nonatomic, readonly) id name;

@end

#endif
