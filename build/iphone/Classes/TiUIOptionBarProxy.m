/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_UIOPTIONBAR)
#import "TiUIOptionBarProxy.h"
#import "TiUIButtonBar.h"

@implementation TiUIOptionBarProxy

- (NSArray *)keySequence
{
  static NSArray *optionKeySequence = nil;
  if (optionKeySequence == nil) {
    optionKeySequence = [[NSArray alloc] initWithObjects:@"labels", nil];
  }
  return optionKeySequence;
}

- (NSString *)apiName
{
  return @"Ti.UI.OptionBar";
}

- (TiUIView *)newView
{
  TiUIButtonBar *result = [[TiUIButtonBar alloc] init];
  [result setTabbedBar:YES];
  return result;
}

USE_VIEW_FOR_CONTENT_WIDTH
USE_VIEW_FOR_CONTENT_HEIGHT

#ifndef TI_USE_AUTOLAYOUT
- (TiDimension)defaultAutoWidthBehavior:(id)unused
{
  return TiDimensionAutoSize;
}
- (TiDimension)defaultAutoHeightBehavior:(id)unused
{
  return TiDimensionAutoSize;
}
#endif

@end
#endif
