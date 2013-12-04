//
//  GetAllCityResponse.m
//  MiuTrip
//
//  Created by apple on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "GetAllCityResponse.h"
#import "UserDefaults.h"

@implementation GetAllCityResponse

- (void)parshJsonToResponse:(NSDictionary *)jsonData
{
    [super parshJsonToResponse:jsonData];
    [UserDefaults shareUserDefault].allCity = self.cities;
}

@end
