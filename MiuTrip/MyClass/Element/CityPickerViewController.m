//
//  CityPickerViewController.m
//  MiuTrip
//
//  Created by apple on 13-11-30.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "CityPickerViewController.h"
#import "UserDefaults.h"
#import "Model.h"

#define     CityPickerViewCellHeight        40.0f

@interface CityPickerViewController ()

@property (strong, nonatomic) UILabel               *letterLb;
@property (strong, nonatomic) UITableView           *theTableView;
@property (strong, nonatomic) NSMutableDictionary   *dataSource;
@property (strong, nonatomic) NSMutableArray        *keyArray;

@property (strong, nonatomic) RequestManager    *requestManager;

@end

@implementation CityPickerViewController

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
        _requestManager = [[RequestManager alloc]init];
        [_requestManager setDelegate:self];
        [self setSubviewFrame];
    }
    return self;
}
- (void)fire
{
    if ([[UserDefaults shareUserDefault].allCity count] != 0) {
        if ([self.dataSource count] == 0) {
            self.dataSource = [self parshCityData:[UserDefaults shareUserDefault].allCity];
        }
        [_theTableView setFrame:CGRectMake(_theTableView.frame.origin.x, _theTableView.frame.origin.y, _theTableView.frame.size.width, 0)];
        [_letterLb setFrame:CGRectMake(_letterLb.frame.origin.x, _letterLb.frame.origin.y, _letterLb.frame.size.width, _theTableView.frame.size.height)];
        [self.view setHidden:NO];
        [self.view setAlpha:1];
        [UIView animateWithDuration:0.25
                         animations:^{
                             [_theTableView setFrame:CGRectMake(_theTableView.frame.origin.x, _theTableView.frame.origin.y, _theTableView.frame.size.width, self.view.frame.size.height - 100)];
                             [_letterLb setFrame:CGRectMake(_letterLb.frame.origin.x, _letterLb.frame.origin.y, _letterLb.frame.size.width, _theTableView.frame.size.height)];
                         }completion:^(BOOL finished){
                             [self reloadData];
                         }];
    }else{
        [self getAllCity];
    }
    
}

- (void)reloadData
{
    [self.theTableView reloadData];
    NSString *str = [_keyArray componentsJoinedByString:@"\n"];
    [_letterLb setText:str];
}

- (void)getAllCity
{
    GetAllCityRequest *request = [[GetAllCityRequest alloc]initWidthBusinessType:BUSINESS_COMMON methodName:@"GetAllCity"];
    [[Model shareModel] setUserInteractionEnabled:NO];
    [self.requestManager sendRequest:request];
}

- (void)requestDone:(BaseResponseModel *)response
{
    [[Model shareModel] setUserInteractionEnabled:YES];
    if ([response isKindOfClass:[GetAllCityResponse class]]) {
        [self getAllCityDone:(GetAllCityResponse*)response];
    }
}

- (void)getAllCityDone:(GetAllCityResponse*)response
{
    [UserDefaults shareUserDefault].allCity = response.cities;
    [self fire];
}

- (NSMutableDictionary*)parshCityData:(NSArray*)data
{
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    for (CityDTO *city in data) {
        if (![Utils textIsEmpty:city.CityCode]) {
            NSMutableArray *array = [dict objectForKey:city.CityCode];
            if (array == nil) {
                array = [NSMutableArray array];
                [dict setObject:array forKey:city.CityCode];
            }
            [array addObject:city];
        }
    }
    
    _keyArray = [NSMutableArray arrayWithArray:[dict allKeys]];
    [_keyArray sortUsingComparator:^(NSString *str1, NSString *str2){
        if ([[str1 uppercaseString]  characterAtIndex:0] < [[str2 uppercaseString]  characterAtIndex:0]) {
            return NSOrderedAscending;
        }else if ([[str1 uppercaseString]  characterAtIndex:0] > [[str2 uppercaseString]  characterAtIndex:0]){
            return NSOrderedDescending;
        }else{
            return NSOrderedSame;
        }
    }];
    
    for (NSString *key in _keyArray) {
        NSMutableArray *array = [dict objectForKey:key];
        [array sortedArrayUsingComparator:^NSComparisonResult(CityDTO *city1, CityDTO *city2){
            if ([[city1.CityCode uppercaseString] characterAtIndex:0] < [[city2.CityCode uppercaseString] characterAtIndex:0]) {
                return NSOrderedAscending;
            }else if ([[city1.CityCode uppercaseString] characterAtIndex:0] > [[city2.CityCode uppercaseString] characterAtIndex:0]){
                return NSOrderedDescending;
            }else{
                return NSOrderedSame;
            }
        }];
    }
    return dict;
}

- (void)requestFailedWithErrorCode:(NSNumber *)errorCode withErrorMsg:(NSString *)errorMsg
{
    [[Model shareModel] setUserInteractionEnabled:YES];
}


#pragma mark - the tableview handle
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return CityPickerViewCellHeight;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    NSArray *array = [_dataSource objectForKey:[_keyArray objectAtIndex:section]];
    return [array count];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return [_keyArray count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *identifierStr = @"cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifierStr];
    if (cell == nil) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifierStr];
    }

    NSArray *array = [_dataSource objectForKey:[_keyArray objectAtIndex:indexPath.section]];
    CityDTO *city = [array objectAtIndex:indexPath.row];
    
    [cell.textLabel setText:city.CityName];
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
     NSArray *array = [_dataSource objectForKey:[_keyArray objectAtIndex:indexPath.section]];
    [self cityPickerFinished:[array objectAtIndex:indexPath.row]];
}

#pragma mark - view init
- (void)setSubviewFrame
{
    UIImageView *backGroundImageView = [[UIImageView alloc]initWithFrame:self.view.bounds];
    [backGroundImageView setBackgroundColor:color(blackColor)];
    [backGroundImageView setAlpha:0.35];
    [self.view addSubview:backGroundImageView];
    
    _theTableView = [[UITableView alloc]initWithFrame:CGRectMake(30, 50, self.view.frame.size.width - 60, self.view.frame.size.height - 100)];
    [_theTableView setDelegate:self];
    [_theTableView setDataSource:self];
//    [_theTableView setSeparatorStyle:UITableViewCellSeparatorStyleSingleLine];
    [self.view.layer setBorderColor:color(darkGrayColor).CGColor];
    [self.view.layer setBorderWidth:0.5];
    [self.view.layer setShadowColor:color(darkGrayColor).CGColor];
    [self.view.layer setShadowOffset:CGSizeMake(4, 4)];
    [self.view.layer setShadowOpacity:1];
    [self.view.layer setShadowRadius:2.5];
    [self.view addSubview:_theTableView];
    
    _letterLb = [[UILabel alloc]initWithFrame:CGRectMake(controlXLength(_theTableView), _theTableView.frame.origin.y, self.view.frame.size.width - controlXLength(_theTableView), _theTableView.frame.size.height)];
    [_letterLb setNumberOfLines:0];
    [_letterLb setLineBreakMode:NSLineBreakByWordWrapping];
    [_letterLb setTextAlignment:NSTextAlignmentCenter];
    [_letterLb setFont:[UIFont systemFontOfSize:15]];
    [_letterLb setAdjustsFontSizeToFitWidth:YES];
    [_letterLb setAdjustsLetterSpacingToFitWidth:YES];
    [_letterLb setMinimumScaleFactor:0.3];
    [_letterLb setBaselineAdjustment:UIBaselineAdjustmentAlignCenters];
    [self.view addSubview:_letterLb];
    
    [self.view setHidden:YES];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
{
    [super touchesEnded:touches withEvent:event];
    [self pickerCancel];
}

- (void)cityPickerFinished:(CityDTO*)city
{
    [UIView animateWithDuration:0.25
                     animations:^{
                         [self.view setAlpha:0.0];
                     }completion:^(BOOL finished){
                         [self.view setHidden:YES];
                         [self.delegate cityPickerFinished:city];
                     }];
}

- (void)pickerCancel
{
    [UIView animateWithDuration:0.25
                     animations:^{
                         [self.view setAlpha:0.0];
                     }completion:^(BOOL finished){
                         [self.view setHidden:YES];
                         [self.delegate pickerCancel];
                     }];
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
