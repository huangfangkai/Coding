//
//  NSObject+Common.h
//  Code
//
//  Created by hfk on 2017/5/5.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Common)

#pragma mark Tip M
//处理错误信息
+ (NSString *)tipFromError:(NSError *)error;
//中央显示错误信息提示
+ (BOOL)showError:(NSError *)error;
//中央显示提示只有文字
+ (void)showHudTipStr:(NSString *)tipStr;
//中央显示提示文字和加载图
+ (instancetype)showHUDQueryStr:(NSString *)titleStr;
//提示隐藏
+ (NSUInteger)hideHUDQuery;

//在状态栏显示提示
+ (void)showStatusBarQueryStr:(NSString *)tipStr;
//在状态栏显示提示成功
+ (void)showStatusBarSuccessStr:(NSString *)tipStr;
//在状态栏显示提示失败
+ (void)showStatusBarErrorStr:(NSString *)errorStr;
+ (void)showStatusBarError:(NSError *)error;

#pragma mark BaseURL
//获得baseUrl
+ (NSString *)baseURLStr;
//baseUrl是否生成
+ (BOOL)baseURLStrIsProduction;
//改变baseUrl
+ (void)changeBaseURLStrTo:(NSString *)baseURLStr;

#pragma mark File M
//获取fileName的完整地址
+ (NSString* )pathInCacheDirectory:(NSString *)fileName;
//创建缓存文件夹
+ (BOOL)createDirInCache:(NSString *)dirName;

//图片
// 图片缓存到本地
+ (BOOL)saveImage:(UIImage *)image imageName:(NSString *)imageName inFolder:(NSString *)folderName;
// 获取缓存图片
+ (NSData*)loadImageDataWithName:( NSString *)imageName inFolder:(NSString *)folderName;
// 删除图片缓存
+ (BOOL)deleteImageCacheInFolder:(NSString *)folderName;

//网络请求
+ (BOOL)saveResponseData:(NSDictionary *)data toPath:(NSString *)requestPath;//缓存请求回来的json对象
+ (id)loadResponseWithPath:(NSString *)requestPath;//返回一个NSDictionary类型的json数据
+ (BOOL)deleteResponseCacheForPath:(NSString *)requestPath;//删除缓存的一个json
+ (BOOL)deleteResponseCache;//清除缓存
+ (NSUInteger)getResponseCacheSize;

#pragma mark NetError
-(id)handleResponse:(id)responseJSON;
-(id)handleResponse:(id)responseJSON autoShowError:(BOOL)autoShowError;
+ (void)showCaptchaViewParams:(NSMutableDictionary *)params;

@end
