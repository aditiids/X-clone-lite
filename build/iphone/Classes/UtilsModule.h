/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UTILS

#import <JavaScriptCore/JavaScriptCore.h>
#import <TitaniumKit/ObjcModule.h>

@class TiBlob;

@protocol UtilsExports <JSExport>

// TODO: Change from JSValue * to id argument once TiFile has been migrated to obj-c proxies
- (TiBlob *)base64decode:(JSValue *)obj;
- (TiBlob *)base64encode:(JSValue *)obj;
- (NSString *)md5HexDigest:(JSValue *)obj;
- (NSString *)sha1:(JSValue *)obj;
- (NSString *)sha256:(JSValue *)obj;

@end

@interface UtilsModule : ObjcModule <UtilsExports>

@end

#endif
