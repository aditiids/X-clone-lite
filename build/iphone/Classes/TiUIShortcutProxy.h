/**
 * XLite SDK
 * Copyright (c) 2009-2025 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#if defined(USE_TI_UISHORTCUT) || defined(USE_TI_UISHORTCUTITEM)

#import <TitaniumKit/ObjcProxy.h>

@class TiUIShortcutItemProxy;

NS_ASSUME_NONNULL_BEGIN

@protocol TiUIShortcutProxyExports <JSExport>
READONLY_PROPERTY(NSArray<TiUIShortcutItemProxy *> *, items, Items);
READONLY_PROPERTY(NSArray<TiUIShortcutItemProxy *> *, staticItems, StaticItems);

- (TiUIShortcutItemProxy *_Nullable)getById:(NSString *)identifier;

- (void)remove:(TiUIShortcutItemProxy *)shortcut;

- (void)removeAll;
- (void)add:(TiUIShortcutItemProxy *)shortcut;

@end

@interface TiUIShortcutProxy : ObjcProxy <TiUIShortcutProxyExports>

@end

NS_ASSUME_NONNULL_END
#endif
