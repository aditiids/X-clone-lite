/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import <JavaScriptCore/JavaScriptCore.h>
#import <TitaniumKit/ObjcModule.h>

@protocol LocaleExports <JSExport>

// Properties (and accessors)
READONLY_PROPERTY(NSString *, currentCountry, CurrentCountry);
READONLY_PROPERTY(NSString *, currentLanguage, CurrentLanguage);
READONLY_PROPERTY(NSString *, currentLocale, CurrentLocale);

// Methods
- (NSString *)getCurrencyCode:(NSString *)locale;
- (NSString *)getCurrencySymbol:(NSString *)currencyCode;
- (NSString *)getLocaleCurrencySymbol:(NSString *)locale;
JSExportAs(getString,
           -(NSString *)getString
           : (NSString *)key withHint
           : (id)hint);
JSExportAs(parseDecimal,
           -(NSNumber *)parseDecimal
           : (NSString *)text withLocaleId
           : (id)localeId);
- (void)setLanguage:(NSString *)language;

@end

@interface LocaleModule : ObjcModule <LocaleExports>

@end
