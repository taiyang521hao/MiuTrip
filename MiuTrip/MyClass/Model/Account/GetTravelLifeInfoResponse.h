//
//  GetTravelLifeInfoResponse.h
//  MiuTrip
//
//  Created by Y on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseResponseModel.h"


@interface GetTravelLifeInfoResponse : BaseResponseModel


@property (nonatomic,strong) NSString *UID;
@property (nonatomic,strong) NSString *Fli_FlightKM;

@property (nonatomic,strong) NSNumber *Fli_FliCount;
@property (nonatomic,strong) NSNumber *Hot_HotTotalCount;
@property (nonatomic,strong) NSNumber *Hot_HotMostCount;
@property (nonatomic,strong) NSNumber *Hot_HotDayCount;

@property (nonatomic,strong) NSString *Hot_HotName;

@property (nonatomic,assign) NSDecimal Fli_FliTotalPrice;
@property (nonatomic,assign) NSDecimal Fli_FliPrice;

@property (nonatomic,strong) NSString *Fli_FliMostStutes;

@property (nonatomic,assign) NSDecimal Hot_HotTotalPrice;
@property (nonatomic,assign) NSDecimal Hot_HotPrice;

@property (nonatomic,strong) NSString *Hot_HotStars;

@property (nonatomic,strong) NSNumber *Hot_RC_Count;
@property (nonatomic,strong) NSNumber *Fli_province;
@property (nonatomic,strong) NSNumber *Fli_City;

@property (nonatomic,strong) NSString *Fli_HotCityName;

@property (nonatomic,strong) NSNumber *Fli_HotCityCount;

@property (nonatomic,strong) NSString *TimeSpan;



@end