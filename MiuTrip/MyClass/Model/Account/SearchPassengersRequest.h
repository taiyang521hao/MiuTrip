//
//  SearchPassengersRequest.h
//  MiuTrip
//
//  Created by Y on 13-12-2.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"
#import "BaseResponseModel.h"
///////////////////////////////////////////////////////////////////////////////////

@interface SearchPassengersRequest : BaseRequestModel

@property (strong, nonatomic) NSString      *CorpUID;
@property (strong, nonatomic) NSString      *keys;

@end

