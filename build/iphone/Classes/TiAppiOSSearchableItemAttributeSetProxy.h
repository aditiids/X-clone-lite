/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_APPIOSSEARCHQUERY) || defined(USE_TI_APPIOSSEARCHABLEITEMATTRIBUTESET)

#import <CoreSpotlight/CoreSpotlight.h>
#import <TitaniumKit/TiProxy.h>

@interface TiAppiOSSearchableItemAttributeSetProxy : TiProxy {
  @private
  NSArray *dateFieldTypes;
  NSArray *urlFieldTypes;
  NSArray *unsupportedFieldTypes;
}

- (id)initWithItemContentType:(NSString *)itemContentType withProps:(NSDictionary *)props;

- (id)initWithItemAttributeSet:(CSSearchableItemAttributeSet *)attributeSet;

@property (nonatomic, retain) CSSearchableItemAttributeSet *attributes;

@end
#endif
