/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"

@class TiHost;

/**
 The default JavaScriptCore <-> XLite bridge. Inherited by the XHRBridge and the KrollBridge.
 It expects the "app.js" to be the entry point of the application.
 */
@interface Bridge : NSObject {
  @private
  id callback;
  NSString *basename;
  @protected
  NSURL *url;
  TiHost *host;
}

- (id)initWithHost:(TiHost *)host;

- (void)boot:(id)callback url:(NSURL *)url preload:(NSDictionary *)preload;

- (void)booted;

- (void)shutdown:(NSCondition *)condition;

- (void)gc;

- (TiHost *)host;

- (NSString *)basename;

@end
