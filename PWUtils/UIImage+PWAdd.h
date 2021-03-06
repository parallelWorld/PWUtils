//
//  UIImage+PWAdd.h
//  PWUtilsDemo
//
//  Created by Huang Wei on 2017/2/23.
//  Copyright © 2017年 Parallel World. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (PWAdd)

+ (UIImage *)pw_imageWithColor:(UIColor *)color;
+ (UIImage *)pw_imageWithColor:(UIColor *)color size:(CGSize)size;

@end
