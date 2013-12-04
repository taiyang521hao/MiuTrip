//
//  GetFlightorderListResponse.h
//  MiuTrip
//
//  Created by pingguo on 13-12-3.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "BaseResponseModel.h"

@interface GetFlightorderListResponse : BaseResponseModel

@property(strong, nonatomic) NSString *ID;
@property(strong, nonatomic) NSString *UID;
@property(strong, nonatomic) NSString *CorpID;
@property(strong, nonatomic) NSString *OrderSource;
@property(strong, nonatomic) NSString *SUPOrderID;
@property(strong, nonatomic) NSString *SerialId;
@property(strong, nonatomic) NSDate   *CreateTime;
@property(strong, nonatomic) NSString *OrderClass;
@property(assign, nonatomic) NSDecimal Amount;
@property(assign, nonatomic) NSDecimal Tax;
@property(assign, nonatomic) NSDecimal OilFee;
@property(assign, nonatomic) NSDecimal InsuranceFee;
@property(strong, nonatomic) NSString *PayType;
@property(strong, nonatomic) NSString *PayStatus;
@property(assign, nonatomic) NSDecimal *ServerFee;
@property(assign, nonatomic) NSDecimal SendticketFee;
@property(strong, nonatomic) NSString *FlightWay;
@property(strong, nonatomic) NSNumber *Persons;
@property(strong, nonatomic) NSString *ServerFrom;
@property(strong, nonatomic) NSNumber *Status;
@property(strong, nonatomic) NSDate   *OperateTime;
@property(strong, nonatomic) NSString *PolicyUID;
@property(strong, nonatomic) NSNumber *PolicyID;
@property(strong, nonatomic) NSString *ExpensesType;
@property(strong, nonatomic) NSDate   *PrintTicketTime;
@property(strong, nonatomic) NSDate   *LimitTime;
@property(strong, nonatomic) NSDate   *RejectTime;
@property(strong, nonatomic) NSDate   *CancelTime;
@property(strong, nonatomic) NSDictionary *FltPassengers;
@property(strong, nonatomic) NSDictionary *FltInsurance;
@property(strong, nonatomic) NSString *FltDeliver;
@property(strong, nonatomic) NSDictionary *Flts;
@property(strong, nonatomic) NSString *Contact;
@property(strong, nonatomic) NSString *MailCode;
@property(strong, nonatomic) NSString *OrderDetailRefund;
@end

@interface Miutrip_FltPassengerDTO : BaseResponseModel

@property(strong, nonatomic) NSString *OrderID;
@property(strong, nonatomic) NSString *Passengers;
@property(strong, nonatomic) NSNumber *AgeType;
@property(strong, nonatomic) NSDate   *Birthday;
@property(strong, nonatomic) NSString *Gender;
@property(strong, nonatomic) NSString *NationalityCode;
@property(strong, nonatomic) NSString *NationalityName;
@property(strong, nonatomic) NSString *CardTypename;
@property(strong, nonatomic) NSString *CardTypeNumber;
@property(strong, nonatomic) NSDate   *CardValid;
@property(strong, nonatomic) NSString *CorpUID;
@property(strong, nonatomic) NSString *CustomizeItem1;
@property(strong, nonatomic) NSString *CustomizeItem2;
@property(strong, nonatomic) NSString *CustomizeItem3;
@property(strong, nonatomic) NSString *CustomozeItem4;
@property(strong, nonatomic) NSString *TicketNo;

@end

@interface MIutrip_FltInsuranceDTO : BaseResponseModel

@property(strong, nonatomic) NSString *OrderID;
@property(strong, nonatomic) NSString *PassengerName;
@property(strong, nonatomic) NSNumber *Sequence;
@property(strong, nonatomic) NSString *InsuranceType;
@property(strong, nonatomic) NSNumber *InsuranceCount;
@property(strong, nonatomic) NSString *InsuranceNo;
@property(strong, nonatomic) NSDate   *Sdate;
@property(strong, nonatomic) NSDate   *Edate;
@property(assign, nonatomic) NSDecimal InsurancePrice;
@property(strong, nonatomic) NSNumber *Status;

@end


@interface MiuTrip_FltDeliverDTO : BaseResponseModel

@property(strong, nonatomic) NSString *OrderID;
@property(strong, nonatomic) NSString *DeliverTypeName;
@property(strong, nonatomic) NSDate   *DeliverTime;
@property(strong, nonatomic) NSString *DeliverAddress;
@property(strong, nonatomic) NSNumber *DeliverCity;
@property(strong, nonatomic) NSNumber *DeliverDistricts;
@property(strong, nonatomic) NSString *DeliverPostCode;
@property(strong, nonatomic) NSString *ContactName;
@property(strong, nonatomic) NSString *ContactPhone;
@property(strong, nonatomic) NSString *ContactMobile;
@property(strong, nonatomic) NSString *ContactEmail;

@end

@interface Miutrip_FltOrderDTO : BaseResponseModel

@property(strong, nonatomic) NSString *OrderID;
@property(strong, nonatomic) NSNumber *Sequence;
@property(strong, nonatomic) NSNumber *AgeType;
@property(strong, nonatomic) NSString *Flight;
@property(strong, nonatomic) NSString *Airlinecode;
@property(strong, nonatomic) NSString *AirlineName;
@property(strong, nonatomic) NSString *DCityName;
@property(strong, nonatomic) NSString *ACityName;
@property(strong, nonatomic) NSString *DPortName;
@property(strong, nonatomic) NSString *APortName;
@property(strong, nonatomic) NSDate *TakeOffTime;
@property(strong, nonatomic) NSDate *ArrivalTime;
@property(strong, nonatomic) NSString *Class;
@property(assign, nonatomic) NSDecimal Price;
@property(assign, nonatomic) NSDecimal Tax;
@property(assign, nonatomic) NSDecimal OilFee;
@property(assign, nonatomic) NSDecimal PriceRate;
@property(assign, nonatomic) NSDecimal StandardPrice;
@property(strong, nonatomic) NSString *CraftType;
@property(assign, nonatomic) NSDecimal ServerFee;
@property(strong, nonatomic) NSNumber *RCofDays;
@property(strong, nonatomic) NSNumber *RCofPrice;
@property(assign, nonatomic) NSDecimal LowestPrice;
@property(strong, nonatomic) NSString *SubClass;
@property(strong, nonatomic) NSString *DepartAirportBuilding;
@property(strong, nonatomic) NSString *ArriveAirportBuilding;
@property(strong, nonatomic) NSString *RCofPriceCcode;
@property(strong, nonatomic) NSString *TotalPrice;
@property(strong, nonatomic) NSNumber *IsStop;
@property(strong, nonatomic) NSString *FlightGuid;
@property(assign, nonatomic) BOOL     IsNeedMail;
@property(assign, nonatomic) NSDecimal ChildPrice;
@property(assign, nonatomic) NSDecimal ADUPrice;
@property(strong, nonatomic) NSString *RelationID;
@end

@interface OnlineContactDTO : BaseResponseModel

@property(strong, nonatomic) NSNumber *Contact;
@property(strong, nonatomic) NSString *UserName;
@property(strong, nonatomic) NSString *Mobilephone;
@property(strong, nonatomic) NSString *Fax;
@property(strong, nonatomic) NSString *Email;
@property(strong, nonatomic) NSString *ConfirmType;


@end

@interface OnlineRefundDTO : BaseResponseModel

@property(strong, nonatomic) NSString *RefundStatus;
@property(strong, nonatomic) NSNumber *ShouldRecAnt;
@property(strong, nonatomic) NSNumber *RealRetAmt;

@end
