//
//  NSString+Common.h
//  Code
//
//  Created by hfk on 2017/5/7.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+Emojize.h"
#import "HtmlMedia.h"

@interface NSString (Common)

//获取APP信息
+ (NSString *)userAgentStr;

//如果说url中存在汉字，或者需要上传图片，那么就得考虑urlEncode（否则会出现网址不对）同样接收到服务器返回的一些信息可能也存在同样问题，这时服务器可能会返回urlEcode,客户端就需要解码urlDecode
- (NSString *)URLEncoding;
- (NSString *)URLDecoding;
- (NSString *)md5Str;
- (NSString*) sha1Str;
//链接处理
- (NSURL *)urlWithCodePath;
- (NSURL *)urlImageWithCodePathResize:(CGFloat)width;
- (NSURL *)urlImageWithCodePathResize:(CGFloat)width crop:(BOOL)needCrop;
- (NSURL *)urlImageWithCodePathResizeToView:(UIView *)view;


- (NSString *)stringByRemoveHtmlTag;
+ (NSString *)handelRef:(NSString *)ref path:(NSString *)path;

//计算字符显示size
- (CGSize)getSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGFloat)getHeightWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGFloat)getWidthWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

//是否包含表情
-(BOOL)containsEmoji;
- (NSString *)emotionMonkeyName;
//获取字符串占内存大小
+ (NSString *)sizeDisplayWithByte:(CGFloat)sizeOfByte;

//\u2028  行分隔符\u2029 段落分隔符 把字符串中,行分隔符,段落分隔符用@""替代
- (NSString *)stringByRemoveSpecailCharacters;
//去掉字符串中空格
- (NSString *)trimWhitespace;
- (BOOL)isEmpty;
- (BOOL)isEmptyOrListening;

//判断是否为整形
- (BOOL)isPureInt;
//判断是否为浮点形
- (BOOL)isPureFloat;
//判断是否是手机号码或者邮箱
- (BOOL)isPhoneNo;
- (BOOL)isEmail;
- (BOOL)isGK;
////特殊字符为标示,获取最左边包含特殊字符时range
- (NSRange)rangeByTrimmingLeftCharactersInSet:(NSCharacterSet *)characterSet;
- (NSRange)rangeByTrimmingRightCharactersInSet:(NSCharacterSet *)characterSet;

- (NSString *)stringByTrimmingLeftCharactersInSet:(NSCharacterSet *)characterSet;
- (NSString *)stringByTrimmingRightCharactersInSet:(NSCharacterSet *)characterSet;

//转换拼音
- (NSString *)transformToPinyin;

//是否包含语音解析的图标
- (BOOL)hasListenChar;

@end
