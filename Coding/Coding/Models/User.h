//
//  User.h
//  Code
//
//  Created by hfk on 2017/5/5.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject
@property (readwrite, nonatomic, strong) NSString *avatar, *name, *global_key, *path, *slogan, *company, *tags_str, *tags, *location, *job_str, *job, *email, *birthday, *pinyinName;

@property (readwrite, nonatomic, strong) NSString *curPassword, *resetPassword, *resetPasswordConfirm, *phone, *introduction, *phone_country_code, *country;

@property (readwrite, nonatomic, strong) NSNumber *id, *sex, *follow, *followed, *fans_count, *follows_count, *tweets_count, *status, *points_left, *email_validation, *is_phone_validated;

@property (readwrite, nonatomic, strong) NSDate *created_at, *last_logined_at, *last_activity_at, *updated_at;

+ (User *)userWithGlobalKey:(NSString *)global_key;

- (BOOL)isSameToUser:(User *)user;
//用户信息地址
- (NSString *)toUserInfoPath;

//重置密码
- (NSString *)toResetPasswordPath;
- (NSDictionary *)toResetPasswordParams;

- (NSString *)toFllowedOrNotPath;
- (NSDictionary *)toFllowedOrNotParams;

//更新用户信息
- (NSString *)toUpdateInfoPath;
- (NSDictionary *)toUpdateInfoParams;

- (NSString *)toDeleteConversationPath;

- (NSString *)localFriendsPath;

- (NSString *)changePasswordTips;
@end
