/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#if defined(USE_TI_XML) || defined(USE_TI_NETWORK)

#import "GDataXMLNode.h"
#import "TiDOMNodeProxy.h"
#import <TitaniumKit/TiProxy.h>

@interface TiDOMElementProxy : TiDOMNodeProxy {
  @private
  GDataXMLElement *element;
}

@property (nonatomic, readonly) id tagName;

- (id)getAttributeNode:(id)args;
- (id)getAttributeNodeNS:(id)args;
- (id)setAttributeNode:(id)args;
- (id)setAttributeNodeNS:(id)args;
- (id)removeAttributeNode:(id)args;

- (void)setElement:(GDataXMLElement *)element;

@end

#endif
