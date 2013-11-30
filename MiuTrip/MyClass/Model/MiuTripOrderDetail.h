//
//  MiuTripOrderDetail.h
//  MiuTrip
//
//  Created by apple on 13-11-30.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Miutrip_FltDeliverDTO;

@interface Miutrip_FltOrderDTO : NSObject

@property (strong, nonatomic) NSString      *ID;                //订单ID
@property (strong, nonatomic) NSString      *UID;               //用户ID
@property (strong, nonatomic) NSString      *CorpID;            //企业ID
@property (strong, nonatomic) NSString      *OrderSource;       //预定渠道      "Ctrip --携程 Mango --芒果 TongCheng --同城"
@property (strong, nonatomic) NSString      *SUPOrderID;        //供应商订单号（如同城订单号）
@property (strong, nonatomic) NSString      *SerialId;          //供应商流水号
@property (strong, nonatomic) NSString      *CreateTime;        //订单创建时间
@property (strong, nonatomic) NSString      *OrderClass;        //机票类型      N:国内 I:国际
@property (assign, nonatomic) CGFloat       Amount;             //订单总金额     订单总金额（包含燃油、机建、保险）
@property (assign, nonatomic) CGFloat       Tax;                //机建费
@property (assign, nonatomic) CGFloat       OilFee;             //燃油费
@property (assign, nonatomic) CGFloat       InsuranceFee;       //保险费
@property (strong, nonatomic) NSString      *PayType;           //支付方式
@property (strong, nonatomic) NSString      *PayStatus;         //支付状态
@property (assign, nonatomic) CGFloat       ServerFee;          //服务费
@property (assign, nonatomic) CGFloat       SendTicketFee;      //送票费
@property (strong, nonatomic) NSString      *FlightWay;         //航程类型      "S --单程 D--往返程 M--联程"
@property (assign, nonatomic) NSInteger     Persons;            //乘客人数
@property (strong, nonatomic) NSString      *ServerFrom;        //订单来源IP

//"1--创建待支付 2---出票中 3--已出票 4--驳回  5--已取消"
@property (assign, nonatomic) NSInteger     Status;             //订单状态

@property (strong, nonatomic) NSString      *OperateTime;       //订单操作时间
@property (strong, nonatomic) NSString      *PolicyUID;         //政策执行人UID
@property (assign, nonatomic) NSInteger     PolicyID;           //政策ID
@property (strong, nonatomic) NSString      *ExpensesType;      //费用类型       PUB：因公 OWN：因私
@property (strong, nonatomic) NSString      *PrintTicketTime;   //机票打印时间
@property (strong, nonatomic) NSString      *LimitTime;         //订单过期时间
@property (strong, nonatomic) NSString      *RejectTime;        //订单驳回时间
@property (strong, nonatomic) NSString      *CancelTime;        //订单取消时间

@property (strong, nonatomic) NSMutableArray *FltPassengers;     //订单乘机人      List<Miutrip_FltPassengerDTO>
@property (strong, nonatomic) NSMutableArray *FltInsurances;     //保险           List<Miutrip_FltInsuranceDTO>

@property (strong, nonatomic) Miutrip_FltDeliverDTO *FltDeliver;    //配送方式

@property (strong, nonatomic) NSMutableArray *Flts;             //航班信息          List<Miutrip_FlightInfoDTO>

@end

@interface Miutrip_FltPassengerDTO : NSObject

@property (strong, nonatomic) NSString      *OrderID;           //订单ID
@property (strong, nonatomic) NSString      *PassengerName;     //乘机人
@property (assign, nonatomic) NSInteger     AgeType;            //年龄类型         1:成人 2：小孩 3:婴儿
@property (strong, nonatomic) NSString      *Birthday;          //出生日期
@property (strong, nonatomic) NSString      *Gender;            //性别            0 --女 1--男
@property (strong, nonatomic) NSString      *NationalityCode;   //国籍代码
@property (strong, nonatomic) NSString      *NationalityName;   //国籍名称
@property (strong, nonatomic) NSString      *CardTypeName;      //证件类型
@property (strong, nonatomic) NSString      *CardTypeNumber;    //证件号码
@property (strong, nonatomic) NSString      *CardValid;         //证件有效时间
@property (strong, nonatomic) NSString      *CorpUID;           //企业会员号
@property (strong, nonatomic) NSString      *CustomizeItem1;    //成本中心1
@property (strong, nonatomic) NSString      *CustomizeItem2;    //成本中心2
@property (strong, nonatomic) NSString      *CustomizeItem3;    //成本中心3
@property (strong, nonatomic) NSString      *CustomizeItem4;    //成本中心4
@property (strong, nonatomic) NSString      *TicketNo;          //票号

@end

@interface Miutrip_FltInsuranceDTO : NSObject

@property (strong, nonatomic) NSString      *OrderID;           //订单ID
@property (strong, nonatomic) NSString      *PassengerName;     //乘客姓名
@property (assign, nonatomic) NSInteger     Sequence;           //航程序号      1:第一程 2 ：第二程
@property (strong, nonatomic) NSString      *InsuranceType;     //保险类型
@property (assign, nonatomic) NSInteger     InsuranceCount;     //保险分数
@property (strong, nonatomic) NSString      *InsuranceNo;       //保险单号
@property (strong, nonatomic) NSString      *Sdate;             //保险有效开始时间
@property (strong, nonatomic) NSString      *Edate;             //保险有效结束时间
@property (assign, nonatomic) CGFloat       InsurancPrice;      //保险单价
@property (assign, nonatomic) NSInteger     Status;             //保险状态      0:未购买1:已购买

@end


@interface Miutrip_FltDeliverDTO : NSObject

@property (strong, nonatomic) NSString      *OrderID;           //订单号
@property (strong, nonatomic) NSString      *DeliverTypeName;   //配送方式名称
@property (strong, nonatomic) NSString      *DeliverTime;       //配送时间
@property (strong, nonatomic) NSString      *DeliverAddress;    //配送地址
@property (assign, nonatomic) NSInteger     DeliverCity;        //配送城市ID
@property (assign, nonatomic) NSInteger     DeliverDistricts;   //配送区域ID
@property (strong, nonatomic) NSString      *DeliverPostCode;   //配送邮编
@property (strong, nonatomic) NSString      *ContactName;       //联系人
@property (strong, nonatomic) NSString      *ContactPhone;      //联系人电话
@property (strong, nonatomic) NSString      *ContactMobile;     //联系人手机号
@property (strong, nonatomic) NSString      *ContactEmail;      //联系人Email

@end

@interface Miutrip_FlightInfoDTO : NSObject

@property (strong, nonatomic) NSString      *OrderID;           //订单号
@property (assign, nonatomic) NSInteger     Sequence;           //航程序号      1:第一程 2 ：第二程
@property (assign, nonatomic) NSInteger     AgeType;            //年龄类型      1:成人 2：小孩 3:婴儿
@property (strong, nonatomic) NSString      *Flight;            //航班号
@property (strong, nonatomic) NSString      *AirlineCode;       //航空公司ID
@property (strong, nonatomic) NSString      *AirLineName;       //航空公司名称
@property (strong, nonatomic) NSString      *DCityName;         //出发城市
@property (strong, nonatomic) NSString      *ACityName;         //到达城市
@property (strong, nonatomic) NSString      *DPortCode;         //出发机场CODE


@end





