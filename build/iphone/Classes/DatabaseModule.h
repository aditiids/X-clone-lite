/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_DATABASE
@import JavaScriptCore;
@import TitaniumKit.ObjcModule;

typedef enum {
  FieldTypeUnknown = -1,
  FieldTypeString,
  FieldTypeInt,
  FieldTypeFloat,
  FieldTypeDouble
} DatabaseFieldType;

@class TiDatabaseProxy; // forward declare

@protocol DatabaseModuleExports <JSExport>

// Constants
CONSTANT(DatabaseFieldType, FIELD_TYPE_DOUBLE);
CONSTANT(DatabaseFieldType, FIELD_TYPE_FLOAT);
CONSTANT(DatabaseFieldType, FIELD_TYPE_INT);
CONSTANT(DatabaseFieldType, FIELD_TYPE_STRING);

// Methods
JSExportAs(install,
           -(TiDatabaseProxy *)install
           : (NSString *)path withName
           : (NSString *)dbName);
- (TiDatabaseProxy *)open:(NSString *)dbName;

@end

@interface DatabaseModule : ObjcModule <DatabaseModuleExports>
@end

#endif
