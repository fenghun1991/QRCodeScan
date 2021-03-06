//
//  CustomTools.h
//  moneyhll
//
//  Created by 李雪阳 on 16/11/7.
//  Copyright © 2016年 浙江龙之游旅游开发有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CustomTools : NSObject

/**
 自定义Label
 */
+ (UILabel *)labelWithTitle:(NSString *)text Font:(NSInteger)font textColor:(UIColor *)color;


/**
 自定义button
 */
+ (UIButton *)buttonWithTitle:(NSString *)title font:(NSInteger)font titleColor:(UIColor *)color Selector:(SEL)btnSelect Target:(UIViewController *)vc;


/**
 自定义View层上button
 */
+ (UIButton *)buttonFromViewWithTitle:(NSString *)title font:(NSInteger)font titleColor:(UIColor *)color Selector:(SEL)btnSelect Target:(UIView *)vc;


/**
 自定义textfield
 */
+ (UITextField *)textFieldWithPlaceHolder:(NSString *)placeHolder textFont:(NSInteger)font textColor:(UIColor *)color;


+ (void)alertActionWithTitle:(NSString *)title Message:(NSString *)message actionHandler:(void (^ __nullable)(UIAlertAction *action))handler Target:(UIViewController *)viewController;

+ (void)showAlert:(NSString *)message Target:(UIViewController *)viewController;

@end
