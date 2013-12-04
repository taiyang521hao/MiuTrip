//
//  DeleteMemberPassengerRequest.h
//  MiuTrip
//
//  Created by Y on 13-12-2.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"
#import "BaseResponseModel.h"
////////////////////////////////////////////////////////////////////////////////

@interface DeleteMemberPassengerRequest : BaseRequestModel

@property (nonatomic , strong) NSNumber *passengerID;   //旅客ID

@end


