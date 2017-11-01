//
//  UIImage+Common.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-8-4.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>


@interface UIImage (Common)


/**
 颜色换成图片
 */
+(UIImage *)imageWithColor:(UIColor *)aColor;
+(UIImage *)imageWithColor:(UIColor *)aColor withFrame:(CGRect)aFrame;
//对图片尺寸进行压缩--
-(UIImage*)scaledToSize:(CGSize)targetSize;
-(UIImage*)scaledToSize:(CGSize)targetSize highQuality:(BOOL)highQuality;

//对图片尺寸进行缩放
-(UIImage*)scaledToMaxSize:(CGSize )size;

//获取资源图片的高清图
+ (UIImage *)fullResolutionImageFromALAsset:(ALAsset *)asset;
//获取资源图片的全屏图
+ (UIImage *)fullScreenImageALAsset:(ALAsset *)asset;
//获取资源类型从而返回类型图片
+ (UIImage *)imageWithFileType:(NSString *)fileType;

//对图片压缩到固定大小
- (NSData *)dataSmallerThan:(NSUInteger)dataLength;
- (NSData *)dataForCodingUpload;
@end
