//
//  AirListViewController.m
//  MiuTrip
//
//  Created by apple on 13-11-26.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "AirListViewController.h"

@interface AirListViewController ()

@property (strong, nonatomic) UILabel               *titleLabel;
@property (strong, nonatomic) UILabel               *detailLabel;
@property (strong, nonatomic) UILabel               *dateLabel;

@end

@implementation AirListViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        [self setSubviewFrame];
    }
    return self;
}

#pragma mark - view init
- (void)setSubviewFrame
{
    [self setBackGroundImage:imageNameAndType(@"home_bg", nil)];
    
    [self setTopBarBackGroundImage:imageNameAndType(@"topbar", nil)];
    
    UIButton *returnBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [returnBtn setBackgroundColor:color(clearColor)];
    [returnBtn setImage:imageNameAndType(@"return", nil) forState:UIControlStateNormal];
    [returnBtn setFrame:CGRectMake(0, 0, self.topBar.frame.size.height, self.topBar.frame.size.height)];
    [self setReturnButton:returnBtn];
    [self.view addSubview:returnBtn];
    
    _titleLabel = [[UILabel alloc]initWithFrame:CGRectMake(controlXLength(returnBtn) + 10, 0, self.topBar.frame.size.width/2 - 10 - controlXLength(returnBtn), self.topBar.frame.size.height/2)];
    [_titleLabel setText:@"上海 - 北京"];
    [_titleLabel setAutoSize:YES];
    [_titleLabel setTextColor:color(whiteColor)];
    [_titleLabel setFont:[UIFont systemFontOfSize:13]];
    [self.view addSubview:_titleLabel];
    
    _detailLabel = [[UILabel alloc]initWithFrame:CGRectMake(_titleLabel.frame.origin.x, controlYLength(_titleLabel), _titleLabel.frame.size.width, _titleLabel.frame.size.height)];
    [_detailLabel setFont:[UIFont systemFontOfSize:13]];
    [_detailLabel setAutoSize:YES];
    [_detailLabel setTextColor:color(whiteColor)];
    [_detailLabel setText:@"12个航班"];
    [self.view addSubview:_detailLabel];
    
    UIImageView *dateLabelBackImage = [self createLineWithParam:color(colorWithRed:80.0/255.0 green:160.0/255.0 blue:230.0/255.0 alpha:1) frame:CGRectMake(controlXLength(_titleLabel) + 10, 7.5, (self.topBar.frame.size.width/2 - 20), self.topBar.frame.size.height - 15)];
    [dateLabelBackImage setCornerRadius:2.5];
    [dateLabelBackImage setShaowColor:dateLabelBackImage.backgroundColor offset:CGSizeMake(4, 4) opacity:1 radius:5];
    [self.view addSubview:dateLabelBackImage];
//    
//    UIButton *prevBtn = [UIButton buttonWithType:UIButtonTypeCustom];
//    [prevBtn setTitle:@"prev" forState:UIControlStateNormal];
//    [prevBtn.titleLabel setAutoSize:YES];
//    [prevBtn setCornerRadius:2.5];
//    [prevBtn setBackgroundColor:color(colorWithRed:80.0/255.0 green:160.0/255.0 blue:230.0/255.0 alpha:1)];
//    [prevBtn setContentEdgeInsets:UIEdgeInsetsMake(0, 0, 6.5, 0)];
//    [prevBtn setShaowColor:prevBtn.backgroundColor offset:CGSizeMake(4, 4) opacity:1 radius:5];
//    [prevBtn setFrame:CGRectMake(controlXLength(_titleLabel) + 5, 7.5, (self.topBar.frame.size.width/2 - 10)/5, self.topBar.frame.size.height - 15)];
//    [self.view addSubview:prevBtn];
//    
//    [self.view createLineWithParam:color(darkGrayColor) frame:CGRectMake(controlXLength(prevBtn), prevBtn.frame.origin.y + 2.5, 1, prevBtn.frame.size.height - 5)];
//    
//    _dateLabel = [[UILabel alloc]initWithFrame:CGRectMake(controlXLength(prevBtn), prevBtn.frame.origin.y, prevBtn.frame.size.width * 3, prevBtn.frame.size.height)];
//    [_dateLabel setBackgroundColor:prevBtn.backgroundColor];
//    [_dateLabel setCornerRadius:2.5];
//    [_dateLabel setShaowColor:_dateLabel.backgroundColor offset:CGSizeMake(4, 4) opacity:1 radius:5];
//    [_dateLabel setFont:[UIFont systemFontOfSize:13]];
//    [_dateLabel setAutoSize:YES];
//    [_dateLabel setTextAlignment:NSTextAlignmentCenter];
//    [_dateLabel setTextColor:color(whiteColor)];
//    [_dateLabel setText:@"11月22日"];
//    [self.view addSubview:_dateLabel];
//    
//    [self.view createLineWithParam:color(blackColor) frame:CGRectMake(controlXLength(_dateLabel), prevBtn.frame.origin.y + 2.5, 1, prevBtn.frame.size.height - 5)];
//    
//    UIButton *nextBtn = [UIButton buttonWithType:UIButtonTypeCustom];
//    [nextBtn setTitle:@"next" forState:UIControlStateNormal  ];
//    [nextBtn.titleLabel setAutoSize:YES];
//    [nextBtn setBackgroundColor:prevBtn.backgroundColor];
//    [nextBtn setCornerRadius:2.5];
//    [nextBtn setContentEdgeInsets:UIEdgeInsetsMake(0, 0, 6.5, 0)];
//    [nextBtn setShaowColor:nextBtn.backgroundColor offset:CGSizeMake(4, 4) opacity:1 radius:5];
//    [nextBtn setFrame:CGRectMake(controlXLength(_dateLabel), prevBtn.frame.origin.y, prevBtn.frame.size.width, prevBtn.frame.size.height)];
//    [self.view addSubview:nextBtn];
    
    [self setSubjoinViewFrame];
}

- (void)setSubjoinViewFrame
{
    
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
