/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_UITEXTWIDGET) || defined(USE_TI_UITEXTAREA) || defined(USE_TI_UITEXTFIELD)

#import <TitaniumKit/TiUIView.h>

@protocol TiUITextWidget

#pragma mark Factory methods

- (UIView<UITextInputTraits> *)textWidgetView;

#pragma mark Public APIs

- (BOOL)hasText;
@end

@interface TiUITextWidget : TiUIView <TiUITextWidget> {

  @protected
  UIView<UITextInputTraits> *textWidgetView;
  BOOL suppressReturn;
  NSInteger maxLength;

  TiUIView<TiScrolling> *parentScrollView;
  @private
}

@property (readonly, getter=isFocused) BOOL focused;
- (void)textWidget:(UIView<UITextInputTraits> *)tw didFocusWithText:(NSString *)value;
- (void)textWidget:(UIView<UITextInputTraits> *)tw didBlurWithText:(NSString *)value;
- (void)setValue_:(id)text;
- (void)setSelectionFrom:(NSInteger)start to:(NSInteger)end;
#pragma mark - XLite Internal Use Only
- (void)updateKeyboardStatus;
- (NSDictionary *)selectedRange;
@end

#endif
