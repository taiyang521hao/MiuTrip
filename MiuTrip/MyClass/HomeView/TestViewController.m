//
//  TestViewController.m
//  MiuTrip
//
//  Created by apple on 13-12-5.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "TestViewController.h"
#import "CityPickerViewController.h"

@interface TestViewController ()

@property (strong, nonatomic) CityPickerViewController  *cityPickerView;

@end

@implementation TestViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIButton *testBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [testBtn setBackgroundColor:color(darkGrayColor)];
    [testBtn setFrame:CGRectMake(0, 0, 80, 60)];
    [testBtn setCenter:CGPointMake(self.view.center.x, self.view.frame.size.height * 2/3)];
    [testBtn setTitle:@"Test" forState:UIControlStateNormal];
    [testBtn addTarget:self action:@selector(pressTestBtn:) forControlEvents:UIControlEventTouchUpInside];
    [self.contentView addSubview:testBtn];
	// Do any additional setup after loading the view.
}

- (void)pressTestBtn:(UIButton*)sender
{
    if (!_cityPickerView) {
        _cityPickerView = [[CityPickerViewController alloc]init];
        [self.view addSubview:_cityPickerView.view];
    }
    [_cityPickerView fire];
}

- (void)requestDone:(BaseResponseModel *)response
{
    GetAllCityResponse *allCityResponse = (GetAllCityResponse *)response;
    NSLog(@"count = %u",[allCityResponse.cities count]);
}

- (void)requestFailedWithErrorCode:(NSNumber *)errorCode withErrorMsg:(NSString *)errorMsg
{
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
