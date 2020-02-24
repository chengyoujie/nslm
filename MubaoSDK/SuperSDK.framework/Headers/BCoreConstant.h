//
//  BCoreConstant.h
//  SuperSDK
//
//  Created by mengxl on 2017/5/15.
//  Copyright © 2017年 mengxl. All rights reserved.
//

#ifndef BCoreConstant_h
#define BCoreConstant_h

#pragma mark - Init
static NSString *const BCORE_FUNC_INIT            = @"init";// 初始化函数，每个模块都有初始化函数

#pragma mark - Config Keys
static NSString *const BCORE_MODULE_CONFIG        = @"config";      // 配置模块名称
static NSString *const BCORE_FUNC_GET_VALUE       = @"getValue";    // 获取配置方法
static NSString *const BCORE_KEY_YZ_GAME_ID       = @"yz_game_id";  // 游戏游族编号

#pragma mark - Platform Keys
// 登录支付等基本功能
static NSString *const BCORE_MODULE_PLATFORM      = @"platform";    // 登录支付模块名称
static NSString *const BCORE_FUNC_LOGIN           = @"login";       // 登录方法
static NSString *const BCORE_FUNC_LOGOUT          = @"logout";      // 注销方法
static NSString *const BCORE_FUNC_HAS_LOGOUT      = @"hasLogout";   // 渠道是否有注销方法
static NSString *const BCORE_FUNC_PAY             = @"pay";         // 支付方法
static NSString *const BCORE_FUNC_PAY_ORDER_ID    = @"payOrderId";  // 支付订单号

// 额外功能，论坛、用户中心、客服、浮标
static NSString *const BCORE_FUNC_HAS_FORUM            = @"hasForum";   // 渠道是否有论坛功能方法
static NSString *const BCORE_FUNC_OPEN_FORUM           = @"openForum";  // 打开渠道论坛方法
static NSString *const BCORE_FUNC_HAS_USER_CENTER      = @"hasUserCenter";      // 渠道是否有个人中心方法
static NSString *const BCORE_FUNC_OPEN_USER_CENTER     = @"openUserCenter";     // 打开渠道个人中心方法
static NSString *const BCORE_FUNC_HAS_CUSOMER_SERVICE  = @"hasCustomerService"; // 渠道是否有客服方法
static NSString *const BCORE_FUNC_OPEN_CUSOMER_SERVICE = @"openCustomerService";// 打开渠道客服方法
static NSString *const BCORE_FUNC_HAS_FLOAT_WINDOW     = @"hasFloatWindow";     // 渠道是否有悬浮窗方法
static NSString *const BCORE_FUNC_OPEN_FLOAT_WINDOW    = @"openFloatWindow";    // 打开渠道悬浮窗方法
static NSString *const BCORE_FUNC_CLOSE_FLOAT_WINDOW   = @"closeFloatWindow";   // 关闭渠道悬浮窗方法

// 上报数据，三个接口需游戏传角色信息
static NSString *const BCORE_FUNC_ENTER_GAME           = @"enterGame";      // 进入游戏方法
static NSString *const BCORE_FUNC_CREATE_ROLE          = @"createRole";     // 创建角色方法
static NSString *const BCORE_FUNC_LEVEL_UP             = @"levelUp";        // 角色升级方法
static NSString *const BCORE_KEY_ROLE_CREATE_TIME      = @"roleCreateTime"; // 创角时间key
static NSString *const BCORE_KEY_OPSID                 = @"opSid";          // 游戏服务器在某渠道下的唯一标识

// 额外的统计打点，打开登录页、打开游戏主页
static NSString *const BCORE_FUNC_OPEN_LOGIN_PAGE      = @"openLoginPage";  // 打开登录页面方法
static NSString *const BCORE_FUNC_OPEN_HOME_PAGE       = @"openHomePage";   // 进入游戏主界面方法

// 游客接口
static NSString *const BCORE_FUNC_HAS_GUEST            = @"hasGuest";       // 当前账号是否是游客账号方法
static NSString *const BCORE_FUNC_GUEST_UPGRADE        = @"guestUpgrade";   // 游客升级方法

// 扩展接口
static NSString *const BCORE_FUNC_OTHER_FUNCTION       = @"otherFunction";  // 扩展接口方法
static NSString *const BCORE_KEY_OTHER_FUNC_NAME       = @"otherFuncName";  // 扩展方法名称
static NSString *const BCORE_KEY_OTHER_FUNC_PARAMS     = @"otherFuncParams";// 扩展方法名称

#pragma mark - Stats Keys
static NSString *const BCORE_MODULE_STATS              = @"stats";        // 统计模块名称
static NSString *const BCORE_FUNC_REPORT               = @"report";       // 统计数据上报方法
static NSString *const BCORE_FUNC_GET_DEVICE_INFO      = @"getDeviceInfo";// 获取统计模块设备数据信息
static NSString *const BCORE_FUNC_REPORT_DATA          = @"reportCustomData";// 上报自定义数据

#pragma mark - Advert Keys
static NSString *const BCORE_MODULE_ADVERT             = @"advert";     // 广告模块名称
static NSString *const BCORE_FUNC_TRACK                = @"track";      // 触发广告事件方法

#pragma mark - Youzu Keys
static NSString *const BCORE_MODULE_YOUZU              = @"youzu";      // 游族模块名称

#pragma mark - Tools Keys
static NSString *const BCORE_MODULE_TOOLS              = @"tools";              // 工具模块名称
static NSString *const BCORE_FUNC_GET_DEVICEID         = @"getDeviceId";        // 获取设备ID
static NSString *const BCORE_FUNC_GET_NEW_DEVICEID     = @"getNewDeviceId";     // 新方法获取设备ID
static NSString *const BCORE_FUNC_GET_COLLECTIONDATA   = @"getCollectionData";  // 获取设备采集数据
static NSString *const BCORE_FUNC_JailBreak            = @"isJailBreak";    // 设备是否越狱方法
static NSString *const BCORE_FUNC_GET_CLIENT_IP_INFO   = @"getClientIPInfo";// 获取客户端IP信息方法
static NSString *const BCORE_FUNC_GET_LANGUAGE         = @"getLanguage";    // 获取当前设备使用的语言方法
static NSString *const BCORE_FUNC_GET_COUNTRY          = @"getCountry";     // 获取当前设备设置的国家方法
static NSString *const BCORE_FUNC_CopyToClipboard      = @"copyToClipboard";// 复制到剪切板方法
static NSString *const BCORE_FUNC_ALERT                = @"alert";          // 弹原生框方法
static NSString *const BCORE_FUNC_SetScreenLight       = @"setScreenLight"; // 设置屏幕亮度方法
static NSString *const BCORE_FUNC_SAVE_DATA            = @"saveData";       // 写缓存方法
static NSString *const BCORE_FUNC_GET_DATA             = @"getData";        // 读缓存方法
static NSString *const BCORE_FUNC_GET_PACKAGE_NAME     = @"getPackageName"; // 获取应用包名方法
static NSString *const BCORE_FUNC_GET_APP_NAME         = @"getAppName";     // 获取应用名称方法
static NSString *const BCORE_FUNC_GET_SHORT_VERSION    = @"getShortVersion";// 获取short version方法
static NSString *const BCORE_FUNC_GET_BUILD_VERSION    = @"getBuildVersion";// 获取build version方法
static NSString *const BCORE_FUNC_GET_INFO_PLIST_VALUE = @"getInfoPlistValue";// 获取info.plist key对应的字符串数据

static NSString *const BCORE_KEY_TOOLS_KEY             = @"key";            // key
static NSString *const BCORE_KEY_TOOLS_VALUE           = @"value";          // key
static NSString *const BCORE_KEY_TOOLS_TIILE           = @"tools_title";    // alert弹框标题
static NSString *const BCORE_KEY_TOOLS_CONTENT         = @"tools_content";  // alert弹框内容
static NSString *const BCORE_KEY_TOOLS_BUTTON          = @"tools_button";   // alert弹框按钮名称

#pragma mark - BA Keys
static NSString *const BCORE_MODULE_BA                 = @"ba";         // BA模块名称
static NSString *const BCORE_FUNC_BA_ENTERGAME         = @"enterGame";  // 进入游戏
static NSString *const BCORE_FUNC_BA_LOGOUT            = @"logout";     // 账号注销
static NSString *const BCORE_FUNC_BA_LEVEL_UP          = @"levelUp";    // 角色升级
static NSString *const BCORE_FUNC_BA_MISSION_BEGIN     = @"missionBegin";   // 任务开始
static NSString *const BCORE_FUNC_BA_MISSION_END       = @"missionEnd"; // 任务结束
static NSString *const BCORE_FUNC_BA_PAY               = @"pay";        // 支付成功
static NSString *const BCORE_FUNC_BA_PAY_CONSUME       = @"payConsume"; // 虚拟币消耗
static NSString *const BCORE_FUNC_BA_GOODS_CONSUME     = @"goodsConsume";   // 物品消耗
static NSString *const BCORE_FUNC_BA_REWARDS           = @"rewards";    // 额外事件奖励
static NSString *const BCORE_FUNC_BA_CUSTOM            = @"custom";     // 自定义通用事件

#pragma mark - GServer keys
static NSString *const BCORE_MODULE_XSDK               = @"xsdk";            //角色SDK模块名称
static NSString *const BCORE_FUNC_QUERY_SERVER         = @"queryServers";       //查询区服列表
static NSString *const BCORE_FUNC_QUERY_ROLES          = @"queryRoles";         //查询角色列表
static NSString *const BCORE_FUNC_UPDATE_ROLE          = @"updateRole";         //更新角色
static NSString *const BCORE_FUNC_DELETE_ROLE          = @"deleteRole";         //删除角色
static NSString *const BCORE_FUNC_SET_UPDATE_INTERVAL  = @"setUpdateInterval";  //设置更新时间间隔

#pragma mark - 错误码
static int BCORE_SUCCESS = 1;   // 操作成功
static int BCORE_FAILURE = -1;  // 操作失败
static int BCORE_READ_CONFIG_FAILURE = -2;// 读取配置失败


#endif /* BCoreConstant_h */
