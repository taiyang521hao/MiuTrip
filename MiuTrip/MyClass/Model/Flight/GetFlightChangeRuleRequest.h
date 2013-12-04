//
//  GetFlightChangeRuleRequest.h
//  MiuTrip
//
//  Created by pingguo on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"

@interface GetFlightChangeRuleRequest : BaseRequestModel

@property(strong, nonatomic) NSString *guid;
@property(strong, nonatomic) NSString *fNo;
@property(strong, nonatomic) NSString *room;
@property(strong, nonatomic) NSNumber *pType;
@property(strong, nonatomic) NSNumber *oTAType;

@end
