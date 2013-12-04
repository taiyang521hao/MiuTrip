//
//  LoginRequest.m
//  MiuTrip
//
//  Created by stevencheng on 13-11-30.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "LoginRequest.h"

@implementation LoginRequest

- (BaseRequestModel *)initWidthBusinessType:(BusinessType)bussinessType methodName:(NSString *)methodName
{
    if (self = [super initWidthBusinessType:bussinessType methodName:methodName]) {
        _rememberMe = [NSNumber numberWithBool:[UserDefaults shareUserDefault].autoLogin];
    }
    return self;
}

@end
