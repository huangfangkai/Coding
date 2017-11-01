//
//  AppDelegate.h
//  Coding
//
//  Created by hfk on 2017/11/1.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

- (void)setupTabViewController;
- (void)setupLoginViewController;
- (void)setupIntroductionViewController;

/**
 *  注册推送
 */
- (void)registerPush;

@end

