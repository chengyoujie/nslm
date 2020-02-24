//
//  SuperSDK.h
//  SuperSDK
//
//  Created by mengxl on 2017/5/15.
//  Copyright © 2017年 mengxl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for SuperSDK.
FOUNDATION_EXPORT double SuperSDKVersionNumber;

//! Project version string for SuperSDK.
FOUNDATION_EXPORT const unsigned char SuperSDKVersionString[];

#import <SuperSDK/BCoreConstant.h>

// 回调block类型，包名模块名称、方法名称、调用结果
typedef void(^SuperSDKCallback)(NSString *moduleName, NSString *funcName, NSString *result);

@interface SuperSDK : NSObject

/**
 *  初始化接口
 *
 *  @param callbackBlock  回调block，invoke_xxx方法也通过此block回调
 */
+ (void)init:(SuperSDKCallback)callbackBlock;

/**
 *  void型方法接口。如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (void)invoke:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  int型方法接口。同步回调、可直接回调；如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (int)invokeInt:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  float型方法接口。同步回调、可直接回调；如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (float)invokeFloat:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  布尔型方法接口。同步回调、可直接回调；如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (BOOL)invokeBool:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  字符串型方法接口。同步回调、可直接回调；如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (NSString *)invokeString:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  id类型方法接口。同步回调、可直接回调；如果有异步回调的话、通过初始化传入的callbackBlock回调
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (id)invokeId:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  禁用模块的使用
 *
 *  @param moduleName   所要禁用模块的名称
 */
+ (void)forbidModule:(NSString *)moduleName;

/**
 *  是否开启日志打印，默认关闭
 *
 *  @param yesOrNot   打开或关闭
 */
+ (void)openLog:(BOOL)yesOrNot;

@end
