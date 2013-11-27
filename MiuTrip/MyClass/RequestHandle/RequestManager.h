//
//  RequestManager.h
//  MiuTrip
//
//  Created by apple on 13-11-27.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ASIHTTPRequest;

#define     LogIn                       @"RequestLogin"                             //登录
#define     Logout                      @"RequestLogout"                            //注销
#define     GetLoginUserInfo            @"RequestGetLoginUserInfo"                  //获取登录信息
#define     GetTravelLifeInfo           @"RequestGetTravelLifeInfo"                 //获取商旅生涯数据
#define     ChangePassword              @"RequestChangePassword"                    //修改密码
#define     GetContact                  @"RequestGetContact"                        //获取常用联系人
#define     DeleteMemberPassenger       @"RequestDeleteMemberPassenger"             //删除常用乘客
#define     GetCorpServerCardList       @"RequestGetCorpServerCardList"             //获取招待卡列表
#define     SearchPassengers            @"RequestSearchPassengers"                  //搜索联系人
#define     GetCorpStaff                @"RequestGetCorpStaff"                      //获取员工列表
#define     GetCorpUserBaseInfo         @"RequestGetCorpUserBaseInfo"               //获取公司基本信息
#define     GetCorpPolicy               @"RequestGetCorpPolicy"                     //获取公司政策
#define     GetCorpCost                 @"RequestGetCorpCost"                       //获取企业消费中列表
#define     GetCorpInfo                 @"RequestGetCorpInfo"                       //获取公司信息
#define     GetMemberDeliverList        @"RequestGetMemberDeliverList"              //查询配送列表
#define     DeleteMemberDeliver         @"RequestDeleteMemberDeliver"               //删除配送信息
#define     DeleteDeliver               @"RequestDeleteDeliver"                     //根据UID删除配送信息
#define     SavePassengerList           @"RequestSavePassengerList"                 //保存常用乘机人/常用联系人

@protocol RequestDelegate <NSObject>

@optional
- (void)requestDone:(ASIHTTPRequest*)request;
- (void)requestError:(ASIHTTPRequest*)request;

@end


@interface RequestManager : NSObject

@property (strong, nonatomic) id <RequestDelegate>  delegate;

//登录
- (void)logIn:(NSDictionary*)params;
//参数包含username、password

//注销
- (void)logOut;

//获取登录用户信息
- (void)getLoginUserInfo:(NSDictionary*)params;
//参数包含uid:用户名

//获取商旅生涯数据
- (void)getTravelLifeInfo;

//修改密码
- (void)changePassword:(NSDictionary*)params;
//参数包含oldPassword、password

//获取常用联系人
- (void)getContact:(NSDictionary*)params;
//参数包含CorpID:公司ID

//删除常用旅客
- (void)deleteMemberPassenger:(NSDictionary*)params;
//参数包含passengerID:旅客ID              Int

//获取招待卡列表
- (void)getCorpServerCardList:(NSDictionary*)params;
//参数包含CorpID:公司ID

//接口名称:预订页/政策执行人页更多搜索
- (void)searchPassengers:(NSDictionary*)params;
//参数包含CorpID:公司ID、keys:搜索关键字

//获取员工列表
- (void)getCorpStaff:(NSDictionary*)params;
//参数包含CorpID:企业ID                   Int

//获取公司基本信息
- (void)getCorpUserBaseInfo:(NSDictionary*)params;
//参数包含username:用户ID

//获取公司政策
- (void)getCorpPolicy:(NSDictionary*)params;
//参数包含policyid:差旅规则ID              Int

//获取企业消费中列表
- (void)getCorpCost:(NSDictionary*)params;
//参数包含corpid:企业ID                   Int

//获取公司信息
- (void)getCorpInfo:(NSDictionary*)params;
//参数包含CorpID:公司ID

//查询配送列表
- (void)getMemberDeliverList:(NSDictionary*)params;
/**参数包含
 uid:用户名
 name:配送名称、
 pagingOptions:翻页对象                                   PagingOptions
 FetchRecordCount:是否统计总条数(父元素名称pagingOptions)    BOOL
 PageNumber:页数(父元素名称pagingOptions)                   Int
 PageSize:单页条数(父元素名称pagingOptions)                 Int
 */

//删除配送信息
- (void)deleteMemberDeliver:(NSDictionary*)params;
//参数包含AddID:配送ID        Int

//根据UID删除配送信息
- (void)deleteDeliver:(NSDictionary*)params;
//参数包含AddID:配送ID        Int

//保存常用乘机人/常用联系人
- (void)savePassengerList:(NSDictionary*)params;
/**
 参数包含:
 Passengers:出行人列表--
 PassengerID:旅客ID     Int
 CorpUID:公司用户ID
 IsEmoloyee:是否雇员     BOOL
 IsServer:是否服务       BOOL
 UserName:职员姓名
 LastName:英文姓名
 FirstName:英文姓名
 MiddleName:英文姓名
 Email:邮箱
 Country:国籍
 Birthday:职员生日
 
 IDCardList:身份卡列表--
 UID:用户ID
 CardType:证件类型       Int
 CardNumber:证件号码
 IsDefault:是否默认      T/F
 Telephone:电话号码
 Fax:传真
 ContactConfirmType:联系确认方式
 Mobilephone:手机号
 
 Type:联系人类型          0:常用乘机人 1:常用联系人
 */

@end
