/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIPICKER

#import "TiUIPickerColumnProxy.h"
#import "TiUIPickerRowProxy.h"
#import <TitaniumKit/TiUtils.h>

@implementation TiUIPickerColumnProxy

@synthesize column;

- (void)dealloc
{
  RELEASE_TO_NIL(rows);
  [super dealloc];
}

- (NSString *)apiName
{
  return @"Ti.UI.PickerColumn";
}

- (NSMutableArray *)rows
{
  // return copy so developer can't directly mutate
  return [[rows copy] autorelease];
}

- (NSNumber *)rowCount
{
  return NUMUINTEGER((rows != nil) ? rows.count : 0);
}

- (id)rowAt:(NSUInteger)index
{
  return (index < [rows count]) ? [rows objectAtIndex:index] : nil;
}

- (NSNumber *)addRow:(id)row
{
  ENSURE_SINGLE_ARG(row, TiUIPickerRowProxy);
  if (rows == nil) {
    rows = [[NSMutableArray arrayWithObject:row] retain];
  } else {
    [rows addObject:row];
  }
  return NUMUINTEGER([rows count] - 1);
}

- (void)removeRow:(id)row
{
  ENSURE_SINGLE_ARG(row, TiUIPickerRowProxy);
  if (rows != nil) {
    [rows removeObject:row];
  }
}

@end

#endif
