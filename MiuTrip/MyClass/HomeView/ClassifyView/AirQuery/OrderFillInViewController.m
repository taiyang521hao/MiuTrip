//
//  OrderFillInViewController.m
//  MiuTrip
//
//  Created by SuperAdmin on 13-12-2.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "OrderFillInViewController.h"

@interface OrderFillInViewController ()

@property (strong, nonatomic) UILabel               *flightTimeLb;
@property (strong, nonatomic) UILabel               *fromAndToLb;
@property (strong, nonatomic) UILabel               *flightNumLb;
@property (strong, nonatomic) UILabel               *seatTypeLb;
@property (strong, nonatomic) UILabel               *priceLb;

@property (strong, nonatomic) UILabel               *positionLb;
@property (strong, nonatomic) UILabel               *passengerName;

@property (strong, nonatomic) UITextField           *contactName;
@property (strong, nonatomic) UITextField           *contactPhoneNum;

@property (strong, nonatomic) UITextField           *postType;
@property (strong, nonatomic) UITextField           *payType;

@end

@implementation OrderFillInViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (id)init
{
    if (self = [super init]) {
        [self setSubviewFrame];
    }
    return self;
}

#pragma mark - view init
- (void)setSubviewFrame
{
    [self setBackGroundImage:imageNameAndType(@"home_bg", nil)];
    [self setTitle:@"填写订单"];
    [self setTopBarBackGroundImage:imageNameAndType(@"topbar", nil)];
    
    UIButton *returnBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [returnBtn setBackgroundColor:color(clearColor)];
    [returnBtn setImage:imageNameAndType(@"return", nil) forState:UIControlStateNormal];
    [returnBtn setFrame:CGRectMake(0, 0, self.topBar.frame.size.height, self.topBar.frame.size.height)];
    [self setReturnButton:returnBtn];
    [self.view addSubview:returnBtn];
    
    [self setSubjoinViewFrame];
}

- (void)setSubjoinViewFrame
{
    UILabel *baseInfoLabel = [[UILabel alloc]initWithFrame:CGRectMake(20, controlYLength(self.topBar), self.contentView.frame.size.width - 20, 30)];
    [baseInfoLabel setText:@"基本信息"];
    [baseInfoLabel setTextColor:color(darkGrayColor)];
    [baseInfoLabel setFont:[UIFont systemFontOfSize:13]];
    [self.contentView addSubview:baseInfoLabel];
    
    UIView *baseInfoBackgroundView = [[UIView alloc]initWithFrame:CGRectMake(5, controlYLength(baseInfoLabel), self.contentView.frame.size.width - 10, 50)];
    [baseInfoBackgroundView setBackgroundColor:color(whiteColor)];
    [baseInfoBackgroundView setCornerRadius:2.5];
    [baseInfoBackgroundView setShaowColor:baseInfoBackgroundView.backgroundColor offset:CGSizeMake(4, 4) opacity:1 radius:2.5];
    [self.contentView addSubview:baseInfoBackgroundView];
    
    UILabel *airLineInfo = [[UILabel alloc]initWithFrame:CGRectMake(10, 0, baseInfoBackgroundView.frame.size.width - 20, 30)];
    [airLineInfo setText:@"航班信息"];
    [airLineInfo setTextColor:color(grayColor)];
    [airLineInfo setFont:[UIFont systemFontOfSize:12]];
    [self.contentView addSubview:airLineInfo];
    
    UILabel *flightTime = [[UILabel alloc]initWithFrame:CGRectMake(airLineInfo.frame.origin.x, controlYLength(airLineInfo), airLineInfo.frame.size.width/3, airLineInfo.frame.size.height)];
    [flightTime setText:[Utils stringWithDate:[NSDate date] withFormat:@"yyyy-MM-dd"]];
    [self.contentView addSubview:flightTime];
    
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
