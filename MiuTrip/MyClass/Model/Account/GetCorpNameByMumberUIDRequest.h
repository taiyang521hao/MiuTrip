//
//  GetCorpNameByMumberUIDRequest.h
//  MiuTrip
//
//  Created by Y on 13-12-2.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"
#import "BaseResponseModel.h"

@interface GetCorpNameByMumberUIDRequest : BaseRequestModel

@property (nonatomic , strong) NSString  *UID;
@property (nonatomic , strong) NSString  *ChinaUmsUID;
@property (nonatomic , strong) NSString  *CropName;
@property (nonatomic , strong) NSString  *CityID;
@property (nonatomic , strong) NSString  *Tel;
@property (nonatomic , strong) NSString  *UserName;
@property (nonatomic , strong) NSString  *Email;
@property (nonatomic , strong) NSString  *Mobilephone;
@property (nonatomic , strong) NSString  *LoginPass;
@property (nonatomic , strong) NSString  *SinaWeibUID;
@property (nonatomic , strong) NSString  *SourceID;

@end

