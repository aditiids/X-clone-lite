/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_UITABBEDBAR)
#import "TiUITabbedBarProxy.h"
#import "TiUIButtonBar.h"

@implementation TiUITabbedBarProxy

- (NSArray *)keySequence
{
  static NSArray *tabbedKeySequence = nil;
  if (tabbedKeySequence == nil) {
    tabbedKeySequence = [[NSArray alloc] initWithObjects:@"labels", @"style", nil];
  }
  return tabbedKeySequence;
}

- (NSString *)apiName
{
  return @"Ti.UI.TabbedBar";
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
