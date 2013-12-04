//
//  FlightCancelOrderRequest.h
//  MiuTrip
//
//  Created by pingguo on 13-12-3.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"

@interface CancelFlightOrderRequest : BaseRequestModel

@property(strong,nonatomic) NSString *selfOrderID;
@property(strong,nonatomic) NSString *OTAOrderID;
@property(strong,nonatomic) NSString *reason;
@property(strong,nonatomic) NSNumber *oTAType;
 
@end
