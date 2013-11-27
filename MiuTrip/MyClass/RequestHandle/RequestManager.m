//
//  RequestManager.m
//  MiuTrip
//
//  Created by apple on 13-11-27.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "RequestManager.h"
#import "ASIHTTPRequest.h"
#import "SBJson.h"
#import "ASIFormDataRequest.h"
#import "ASINetworkQueue.h"
#import "UserDefaults.h"
#import "Utils.h"

@implementation RequestManager

- (void)logIn:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/login/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              LogIn,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:params userInfo:userInfo];
}

- (void)logOut
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/logout/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              Logout,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getLoginUserInfo:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetLoginUserInfo/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetLoginUserInfo,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getTravelLifeInfo
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetTravelLifeInfo/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetTravelLifeInfo,           @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)changePassword:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/ChangePassword/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              ChangePassword,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getContact:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetContact/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetContact,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)deleteMemberPassenger:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/DeleteMemberPassenger/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              DeleteMemberPassenger,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpServerCardList:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpServerCardList/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpServerCardList,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)searchPassengers:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/SearchPassengers/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              SearchPassengers,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpStaff:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpStaff/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpStaff,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpUserBaseInfo:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpUserBaseInfo/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpUserBaseInfo,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpPolicy:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpPolicy/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpPolicy,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpCost:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpCost/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpCost,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getCorpInfo:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetCorpInfo/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetCorpInfo,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)getMemberDeliverList:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/GetMemberDeliverList/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              GetMemberDeliverList,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)deleteMemberDeliver:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/DeleteMemberDeliver/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              DeleteMemberDeliver,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)deleteDeliver:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/DeleteDeliver/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              DeleteDeliver,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)savePassengerList:(NSDictionary*)params
{
    NSString *urlString = [MiuTripURL stringByAppendingString:@"/account/SavePassengerList/api"];
    NSDictionary *userInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                              SavePassengerList,            @"requestType",
                              nil];
    [self sendRequestWithURL:urlString params:nil userInfo:userInfo];
}

- (void)sendRequestWithURL:(NSString*)URLString params:(NSDictionary*)_params userInfo:(NSDictionary*)userInfo
{
    NSString *requestType = [userInfo objectForKey:@"requestType"];
    ASIFormDataRequest *request = [ASIFormDataRequest requestWithURL:[NSURL URLWithString:URLString]];
    [request setUserInfo:userInfo];
//    NSMutableDictionary *params = [NSMutableDictionary dictionaryWithDictionary:_params];
    NSMutableDictionary *params = nil;
    if (_params) {
        params = [NSMutableDictionary dictionaryWithDictionary:_params];
    }else{
        params = [NSMutableDictionary dictionary];
    }
    [params setObject:deviceId forKey:@"deviceId"];
    [params setObject:@"0" forKey:@"appId"];
    [params setObject:[Utils stringWithDate:[NSDate date] withFormat:@"yyyy-MM-dd HH:mm:ss"] forKey:@"processTime"];
    if ([requestType isEqualToString:LogIn]) {
        if ([UserDefaults shareUserDefault].authTkn) {
            [params setObject:[UserDefaults shareUserDefault].authTkn forKey:@"authTkn"];
        }
    }
    
    [request setPostValue:[params JSONRepresentation] forKey:@"Json"];
    [request setDelegate:self];
    
    [request setTimeOutSeconds:30];
    [request setUseCookiePersistence:NO];
    [request startAsynchronous];
}

- (void)requestFinished:(ASIHTTPRequest *)request
{
    
}

- (void)requestFailed:(ASIHTTPRequest *)request
{
    
}


@end
