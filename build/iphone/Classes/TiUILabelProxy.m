/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UILABEL

#import "TiUILabelProxy.h"
#import "TiUILabel.h"
#import <TitaniumKit/TiUtils.h>

@implementation TiUILabelProxy

USE_VIEW_FOR_CONTENT_WIDTH
USE_VIEW_FOR_CONTENT_HEIGHT

- (NSString *)apiName
{
  return @"Ti.UI.Label";
}

- (void)_initWithProperties:(NSDictionary *)properties
{
  [super _initWithProperties:properties];
}

- (CGFloat)verifyWidth:(CGFloat)suggestedWidth
{
  int width = ceil(suggestedWidth);
  if (width & 0x01) {
    width++;
  }
  return width;
}

- (CGFloat)verifyHeight:(CGFloat)suggestedHeight
{
  int height = ceil(suggestedHeight);
  if ([self viewInitialized]) {
    int minHeight = ceil([[[(TiUILabel *)view label] font] lineHeight]);
    if (height < minHeight) {
      height = minHeight;
    }
  }

  if (height & 0x01) {
    height++;
  }
  return height;
}

- (NSArray *)keySequence
{
  static NSArray *labelKeySequence = nil;
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    labelKeySequence = [[NSArray arrayWithObjects:@"font", nil] retain];
  });
  return labelKeySequence;
}

- (NSMutableDictionary *)langConversionTable
{
  return [NSMutableDictionary dictionaryWithObject:@"text" forKey:@"textid"];
}

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

- (UIView *)parentViewForChild:(TiViewProxy *)child
{
  return [[(TiUILabel *)[self view] label] superview];
}

- (NSNumber *)ellipsize
{
  return NUMINTEGER([[(TiUILabel *)[self view] label] lineBreakMode]);
}

- (NSNumber *)lineCount
{
  UILabel *label = [(TiUILabel *)[self view] label];

  CGSize maxSize = CGSizeMake(label.frame.size.width, MAXFLOAT);
  NSString *text = label.text ?: @"";
  CGFloat textHeight = [text boundingRectWithSize:maxSize
                                          options:NSStringDrawingUsesLineFragmentOrigin
                                       attributes:@{ NSFontAttributeName : label.font }
                                          context:nil]
                           .size.height;
  CGFloat lineHeight = label.font.lineHeight;
  NSNumber *lineCount = NUMINT(ceil(textHeight / lineHeight));

  return lineCount;
}

@end

#endif
