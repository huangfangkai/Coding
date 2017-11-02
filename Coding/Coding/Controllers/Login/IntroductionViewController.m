//
//  IntroductionViewController.m
//  Coding
//
//  Created by hfk on 2017/11/2.
//  Copyright © 2017年 hfk. All rights reserved.
//

#import "IntroductionViewController.h"
#import "SMPageControl.h"

@interface IntroductionViewController ()
@property (strong, nonatomic) UIButton *registerBtn, *loginBtn;
@property (strong, nonatomic) SMPageControl *pageControl;

@property (strong, nonatomic) NSMutableDictionary *iconsDict, *tipsDict;

@end

@implementation IntroductionViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
