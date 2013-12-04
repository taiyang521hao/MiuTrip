//
//  GetNormalFlightsResponse.h
//  MiuTrip
//
//  Created by pingguo on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseResponseModel.h"

@interface GetNormalFlightsResponse : BaseResponseModel

@property (strong, nonatomic) NSMutableArray    *flights;           //List<DomesticFlightDataDTO>

@end

@interface DomesticFlightDataDTO : BaseResponseModel

@property (strong, nonatomic) NSNumber          *OTAType;               //产品来源      int
@property (strong, nonatomic) NSString          *AirlineCode;           //航空公司
@property (strong, nonatomic) NSString          *APortBuilding;         //到达机场航站楼
@property (strong, nonatomic) NSString          *APortCode;             //到达机场Code
@property (strong, nonatomic) NSString          *ArriveCityCode;        //到达城市Code 目前和机场三字码一样
@property (strong, nonatomic) NSString          *ArriveDate;            //到达日期
@property (strong, nonatomic) NSString          *ArriveTime;            //到达时间
@property (strong, nonatomic) NSNumber          *BabyOilFee;            //婴儿燃油费     float
@property (strong, nonatomic) NSNumber          *BabyStandardPrice;     //婴儿基准价     float
@property (strong, nonatomic) NSNumber          *BabyTax;               //婴儿基建费     float

@property (strong, nonatomic) NSNumber          *ChildOilFee;           //婴儿价格       float
@property (strong, nonatomic) NSNumber          *ChildStandardPrice;    //儿童燃油费
@property (strong, nonatomic) NSNumber          *ChildTax;              //儿童基准价格
@property (strong, nonatomic) NSNumber          *ChildPrice;            //儿童基建费
@property (strong, nonatomic) NSNumber          *AdultTax;              //儿童价格
@property (strong, nonatomic) NSNumber          *AdultPrice;            //成人燃油费
@property (strong, nonatomic) NSNumber          *AdultStandardPrice;    //成人基建费
@property (assign, nonatomic) NSDecimal         Price;
@property (assign, nonatomic) NSDecimal         StandardPrice;
@property (assign, nonatomic) NSDecimal         OilFee;
@property (assign, nonatomic) NSDecimal         Tax;
@property (assign, nonatomic) NSDecimal Rate;
@property (strong, nonatomic) NSString  *Class;
@property (strong, nonatomic) NSString  *DepartCityCode;
@property (strong, nonatomic) NSString  *CraftType;
@property (strong, nonatomic) NSString  *DPortBuilding;
@property (strong, nonatomic) NSString  *DportCode;
@property (assign, nonatomic) BOOL      IsLowestPrice;
@property (strong, nonatomic) NSString  *Flight;
@property (strong, nonatomic) NSString  *MealType;
@property (strong, nonatomic) NSString  *ProductSource;
@property (strong, nonatomic) NSNumber  *Quantity;
@property (strong, nonatomic) NSString  *Remarks;
@property (strong, nonatomic) NSNumber  *RouteIndex;
@property (strong, nonatomic) NSNumber  *StopTimes;
@property (strong, nonatomic) NSString  *SubClass;
@property (strong, nonatomic) NSString  *TakePffTime;
@property (strong, nonatomic) NSString  *TakeOffDate;
@property (strong, nonatomic) NSString  *Airline;
@property (strong, nonatomic) NSString  *Dairport;
@property (strong, nonatomic) NSString  *Aairport;
@property (strong, nonatomic) NSString  *HashMoreBase;
@property (assign, nonatomic) BOOL      HasMoreFlight;
@property (strong, nonatomic) NSDictionary *MoreFlights;
@property (assign, nonatomic) BOOL       IsShowMore;
@property (strong, nonatomic) NSString  *FlyTime;
@property (strong, nonatomic) NSString  *Guid;
@property (strong, nonatomic) NSString  *PassengerType;
@end

@interface AirlineDTO : BaseResponseModel

@property(strong, nonatomic) NSString *AirLine;
@property(strong, nonatomic) NSString *AirLineCode;
@property(strong, nonatomic) NSString *AirLineName;
@property(strong, nonatomic) NSString *ShortName;
@property(strong, nonatomic) NSString *Airport;
@property(strong, nonatomic) NSString *AirportName;
@property(strong, nonatomic) NSNumber *City;
@property(strong, nonatomic) NSString *AirportShortName;
@property(strong, nonatomic) NSString *AirportEnName;
@property(strong, nonatomic) NSString *CityName;

@end
@interface GetNormalFlightsResponse : BaseResponseModel

@property (strong, nonatomic) NSMutableArray    *flights;           //List<DomesticFlightDataDTO>

@end

@interface DomesticFlightDataDTO : NSObject

@property (strong, nonatomic) NSNumber          *OTAType;           //产品来源      int
@property (strong, nonatomic) NSString          *AirlineCode;       //航空公司
@property (strong, nonatomic) NSString          *APortBuilding;     //到达机场航站楼
@property (strong, nonatomic) NSString          *APortCode;         //到达机场Code
@property (strong, nonatomic) NSString          *ArriveCityCode;    //到达城市Code 目前和机场三字码一样
@property (strong, nonatomic) NSString          *ArriveDate;        //到达日期
@property (strong, nonatomic) NSString          *ArriveTime;        //到达时间
@property (strong, nonatomic) NSString          *BabyOilFee;        //婴儿燃油费
@property (strong, nonatomic) NSString          *BabyStandardPrice; //婴儿基准价
@property (strong, nonatomic) NSString          *BabyTax;           //婴儿基建费

@end
