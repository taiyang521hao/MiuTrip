//
//  SubmitFlightOrderResponse.h
//  MiuTrip
//
//  Created by pingguo on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseResponseModel.h"

@interface SubmitFlightOrderResponse : BaseResponseModel

@property(strong, nonatomic) NSString *ReturnID;
@property(assign, nonatomic) BOOL      IsSuccess;
@property(strong, nonatomic) NSString *ErrorMsg;
@property(assign, nonatomic) NSDecimal Amount;
@property(strong, nonatomic) NSString *PaySerialId;
@property(strong, nonatomic) NSNumber *OTAType;
@property(strong, nonatomic)NSDictionary *OrderList;
@end

@interface  MsgPayEntity : BaseResponseModel

@property(strong, nonatomic) NSNumber *OrderId;
@property(strong, nonatomic) NSString *FlightDesc;
@property(strong, nonatomic) NSString *Amount;

@end