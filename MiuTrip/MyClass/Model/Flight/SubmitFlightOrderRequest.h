//
//  SubmitFlightOrderRequest.h
//  MiuTrip
//
//  Created by pingguo on 13-12-4.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseRequestModel.h"

@interface SubmitFlightOrderRequest : BaseRequestModel

@property(strong, nonatomic) NSString *onlineOrder;
@property(strong, nonatomic) NSString *Flights;
@end

@interface SearchFlightDTO : BaseRequestModel

@property(strong, nonatomic) NSDictionary *DepartCity1;
@property(strong, nonatomic) NSDictionary *ArriveCity1;
@property(strong, nonatomic) NSString     *DepartDate1;
@property(strong, nonatomic) NSString     *DepartCity2;
@property(strong, nonatomic) NSDictionary *ArriveCity2;
@property(strong, nonatomic) NSDictionary *DepartDate2;
@property(strong, nonatomic) NSString     *ClassType;
@property(strong, nonatomic) NSString     *PassengerQuantity;
@property(strong, nonatomic) NSNumber     *FeeType;
@property(strong, nonatomic) NSString     *BookingType;
@property(strong, nonatomic) NSDictionary *SendTicket;
@property(strong, nonatomic) NSString     *Airline;
@property(strong, nonatomic) NSString     *PassengerType;
@property(strong, nonatomic) NSNumber     *Routeindex;
@property(strong, nonatomic) NSString     *SearchType;
@property(strong, nonatomic) NSString     *FirstRoute;
@property(strong, nonatomic) NSString     *SecondRoute;

@end

@interface RouteEntity : BaseRequestModel

@property(strong, nonatomic) NSDictionary *SendTicket;
@property(strong, nonatomic) NSString     *RCofDays;
@property(strong, nonatomic) NSString     *RCofdaysCode;
@property(strong, nonatomic) NSString     *RCofPrice;
@property(strong, nonatomic) NSString     *RofPriceCode;
@property(assign, nonatomic) NSDecimal    *LowestPrice;
@property(strong, nonatomic) NSString     *Flight;

@end

@interface DomesticFlightDataDTO : BaseRequestModel

@property(strong, nonatomic) NSNumber     *OTAType;
@property(strong, nonatomic) NSString     *AirlineCode;
@property(strong, nonatomic) NSString     *APortBuilding;
@property(strong, nonatomic) NSString     *APortCode;
@property(strong, nonatomic) NSString     *ArriveCityCode;
@property(strong, nonatomic) NSString     *ArriveDate;
@property(strong, nonatomic) NSString     *ArriveTime;
@property(assign, nonatomic) NSDecimal     BabyOilFee;
@property(assign, nonatomic) NSDecimal     BabyStandardPrice;
@property(assign, nonatomic) NSDecimal     BabyTax;
@property(assign, nonatomic) NSDecimal     BabyPrice;
@property(assign, nonatomic) NSDecimal     ChildOilFee;
@property(assign, nonatomic) NSDecimal     ChildStandardPrice;
@property(assign, nonatomic) NSDecimal     ChildTax;
@property(assign, nonatomic) NSDecimal     Childprice;
@property(assign, nonatomic) NSDecimal     AdultoilFee;
@property(assign, nonatomic) NSDecimal     AdultTax;
@property(assign, nonatomic) NSDecimal     AdultPrice;
@property(assign, nonatomic) NSDecimal     AdultStandardPrice;
@property(assign, nonatomic) NSDecimal     Price;
@property(assign, nonatomic) NSDecimal     StandardPrice;
@property(assign, nonatomic) NSDecimal     OilFee;
@property(assign, nonatomic) NSDecimal     Tax;
@property(assign, nonatomic) NSDecimal     Rate;
@property(strong, nonatomic) NSString     *Class;
@property(strong, nonatomic) NSString    *CraftType;
@property(strong, nonatomic) NSString    *DepartCityCode;
@property(strong, nonatomic) NSString    *DPortBuilding;
@property(strong, nonatomic) NSString    *DPortCode;
@property(strong, nonatomic) NSString    *Flight;
@property(assign, nonatomic) BOOL         IsLowestPrice;
@property(strong, nonatomic) NSString    *MealType;
@property(strong, nonatomic) NSString    *ProductSource;
@property(strong, nonatomic) NSNumber    *Quantity;
@property(strong, nonatomic) NSString    *Remarks;
@property(strong, nonatomic) NSNumber    *RouteIndex;
@property(strong, nonatomic) NSNumber    *StopTimes;
@property(strong, nonatomic) NSString    *SubClass;
@property(strong, nonatomic) NSString    *TakeOffTime;
@property(strong, nonatomic) NSString    *TakeOffDate;
@property(strong, nonatomic) NSString    *Airline;
@property(strong, nonatomic) NSString    *Dairport;
@property(strong, nonatomic) NSString    *Aairport;
@property(strong, nonatomic) NSString    *Airport;
@property(strong, nonatomic) NSString    *HashMoreBase;
@property(assign, nonatomic) BOOL         HasMoreFlight;
@property(strong, nonatomic) NSDictionary*MoreFlight;
@property(assign, nonatomic) BOOL        IsShowMore;
@property(strong, nonatomic) NSString    *FlyTime;
@property(strong, nonatomic) NSString    *Guid;
@property(strong, nonatomic) NSString    *PassengerType;

@end


@interface AirlineDTO : BaseRequestModel

@property(strong, nonatomic) NSString    *Airline;
@property(strong, nonatomic) NSString    *AirLine;
@property(strong, nonatomic) NSString    *AirLineName;
@property(strong, nonatomic) NSString    *AieLineCode;
@property(strong, nonatomic) NSString    *ShortName;

@end

@interface AirportDTO : BaseRequestModel

@property(strong, nonatomic) NSString    *AirportName;
@property(strong, nonatomic) NSNumber    *City;
@property(strong, nonatomic) NSString    *AirportShortName;
@property(strong, nonatomic) NSString    *AirportEnName;
@property(strong, nonatomic) NSString    *CityName;
@property(strong, nonatomic) NSString    *Airport;

@end

@interface SOSubmitDTO : BaseRequestModel

@property(strong, nonatomic) NSString *payType;
@property(strong, nonatomic) NSString *DeliveryType;
@property(strong, nonatomic) NSDictionary *Passengers;
@property(strong, nonatomic) NSString *Addtion;
@property(strong, nonatomic) NSString *Contacts;
@property(strong, nonatomic) NSString *UID;
@property(strong, nonatomic) NSString *CorpID;
@property(strong, nonatomic) NSString *PolicyID;
@property(strong, nonatomic) NSString *PolicyUID;
@property(strong, nonatomic) NSString *ServerFrom;
@property(strong, nonatomic) NSNumber *MailCode;

@end

@interface DeliveryType : BaseRequestModel

@property(strong, nonatomic) NSString *IsNeed;
@property(strong, nonatomic) NSNumber *Province;
@property(strong, nonatomic) NSNumber *City;
@property(strong, nonatomic) NSNumber *Canton;
@property(strong, nonatomic) NSString *Address;
@property(strong, nonatomic) NSString *ZipCode;
@property(strong, nonatomic) NSString *RecippienName;
@property(strong, nonatomic) NSNumber *AddID;
@property(strong, nonatomic) NSString *Tel;
@end

@interface OnlinePassengersDTO : BaseRequestModel

@property(strong, nonatomic) NSNumber *PassengerID;
@property(strong, nonatomic) NSString *Name;
@property(strong, nonatomic) NSNumber *AgeType;
@property(strong, nonatomic) NSDate   *BirthDatel;
@property(strong, nonatomic) NSNumber *Gender;
@property(strong, nonatomic) NSNumber *CardType;
@property(strong, nonatomic) NSString *CardNumber;
@property(strong, nonatomic) NSNumber *InsuranceType;
@property(strong, nonatomic) NSNumber *InsuranceNum;
@property(strong, nonatomic) NSString *InsurfanceUnitPrice;
@property(strong, nonatomic) NSString *NationalityName;
@property(strong, nonatomic) NSString *NationalityCode;
@property(strong, nonatomic) NSString *CorpUID;
@property(strong, nonatomic) NSDictionary *CostCenters;


@end

@interface CostCenteritem : BaseRequestModel

@property(strong, nonatomic) NSString *CcID;
@property(strong, nonatomic) NSString *CcValue;
@property(strong, nonatomic) NSNumber *CcIndex;

@end

@interface OnlineContactDTO : BaseRequestModel

@property(strong, nonatomic) NSNumber *ContactID;
@property(strong, nonatomic) NSString *UserName;
@property(strong, nonatomic) NSString *Mobilephone;
@property(strong, nonatomic) NSString *Fax;
@property(strong, nonatomic) NSString *Email;
@property(strong, nonatomic) NSNumber *ConfirmType;

@end