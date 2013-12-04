//
//  GetNormalFlightsResponse.h
//  MiuTrip
//
//  Created by apple on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseResponseModel.h"

@interface GetNormalFlightsResponse : BaseResponseModel

@property (strong, nonatomic) NSMutableArray    *flights;           //List<DomesticFlightDataDTO>

@end

@interface DomesticFlightDataDTO : NSObject

@property (strong, nonatomic) NSNumber          *OTAType;               //产品来源      int
@property (strong, nonatomic) NSString          *AirlineCode;           //航空公司
@property (strong, nonatomic) NSString          *APortBuilding;         //到达机场航站楼
@property (strong, nonatomic) NSString          *APortCode;             //到达机场Code
@property (strong, nonatomic) NSString          *ArriveCityCode;        //到达城市Code 目前和机场三字码一样
@property (strong, nonatomic) NSString          *ArriveDate;            //到达日期
@property (strong, nonatomic) NSString          *ArriveTime;            //到达时间
@property (strong, nonatomic) NSString          *BabyOilFee;            //婴儿燃油费
@property (strong, nonatomic) NSString          *BabyStandardPrice;     //婴儿基准价
@property (strong, nonatomic) NSString          *BabyTax;               //婴儿基建费
@property (strong, nonatomic) NSNumber          *BabyPrice;             //婴儿价格          float
@property (strong, nonatomic) NSNumber          *ChildOilFee;           //儿童燃油费         float
@property (strong, nonatomic) NSNumber          *ChildStandardPrice;    //儿童基准价格       float
@property (strong, nonatomic) NSNumber          *ChildTax;              //儿童基建费         float
@property (strong, nonatomic) NSNumber          *ChildPrice;            //儿童价格          float
@property (strong, nonatomic) NSNumber          *AdultOilFee;           //成人燃油费         float
@property (strong, nonatomic) NSNumber          *AdultTax;              //成人基建费         float
@property (strong, nonatomic) NSNumber          *AdultPrice;            //成人价格          float
@property (strong, nonatomic) NSNumber          *AdultStandardPrice;    //成人基准价         float
@property (strong, nonatomic) NSNumber          *Price;                 //售价              float
@property (strong, nonatomic) NSNumber          *StandardPrice;         //标准价格          float
@property (strong, nonatomic) NSNumber          *OilFee;                //燃油费            float

@end
