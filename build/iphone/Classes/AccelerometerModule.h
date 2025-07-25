/**
 * XLite SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import <TitaniumKit/ObjcModule.h>

#ifdef USE_TI_ACCELEROMETER
#import <CoreMotion/CoreMotion.h>

@interface AccelerometerModule : ObjcModule {
  @private
  CMMotionManager *_motionManager;
  NSOperationQueue *_motionQueue;
  CFAbsoluteTime oldTime;
}

@end

#endif
