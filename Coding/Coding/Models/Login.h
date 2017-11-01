//
//  Login.h
//  Code
//
//  Created by hfk on 2017/5/5.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
@interface Login : NSObject
//请求
@property (readwrite, nonatomic, strong) NSString *email, *password, *j_captcha;
@property (readwrite, nonatomic, strong) NSNumber *remember_me;
//登陆项判断
- (NSString *)goToLoginTipWithCaptcha:(BOOL)needCaptcha;
//登陆接口
- (NSString *)toPath;
//登陆参数
- (NSDictionary *)toParams;
//判断是否已经登陆
+ (BOOL) isLogin;
//登陆完成数据处理
+ (void) doLogin:(NSDictionary *)loginData;
//退出登陆
+ (void) doLogout;
//存email
+ (void)setPreUserEmail:(NSString *)emailStr;
//取email
+ (NSString *)preUserEmail;
//判断用户数据返回是否有误
+ (User *)curLoginUser;
//设置推送配置
+ (void)setXGAccountWithCurUser;
//通过GlobaykeyOrEmail获取用户缓存的数据
+ (User *)userWithGlobaykeyOrEmail:(NSString *)textStr;
+ (NSMutableDictionary *)readLoginDataList;
//判断global_key是否与存的一样
+(BOOL)isLoginUserGlobalKey:(NSString *)global_key;

@end
