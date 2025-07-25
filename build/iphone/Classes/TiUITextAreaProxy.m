/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UITEXTAREA

#import "TiUITextAreaProxy.h"
#import "TiUITextArea.h"

@implementation TiUITextAreaProxy

#pragma mark Defaults

DEFINE_DEF_PROP(value, @"");
DEFINE_DEF_PROP(scrollsToTop, [NSNumber numberWithBool:YES]);
DEFINE_DEF_INT_PROP(maxLength, -1);

- (NSString *)apiName
{
  return @"Ti.UI.TextArea";
}

- (void)_initWithProperties:(NSDictionary *)props
{
  if ([props valueForKey:@"showUndoRedoActions"]) {

    TiThreadPerformOnMainThread(
        ^{
          TiUITextArea *textArea = (TiUITextArea *)[self view];
          [textArea setShowUndoRedoActions:[props valueForKey:@"showUndoRedoActions"]];
        },
        NO);
  }

  [super _initWithProperties:props];
}

@end

#endif
