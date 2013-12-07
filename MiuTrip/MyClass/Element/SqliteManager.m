//
//  SqliteManager.m
//  MiuTrip
//
//  Created by apple on 13-12-7.
//  Copyright (c) 2013年 michael. All rights reserved.
//

#import "SqliteManager.h"

static  SqliteManager   *shareSqliteManager;

@interface SqliteManager ()

@property (strong, nonatomic) FMDatabase    *database;

@end

@implementation SqliteManager

+ (SqliteManager*)shareSqliteManager
{
    @synchronized(self){
        if (shareSqliteManager == nil) {
            shareSqliteManager = [[SqliteManager alloc]init];
        }
    }
    return shareSqliteManager;
}

- (id)init
{
    self = [super init];
    if (self) {
        _database = [[FMDatabase alloc]initWithPath:PATH_DATABASE_SOUCE];
    }
    return self;
}

+ (BOOL)isExistDatabase
{
    BOOL exist = NO;
    if ([SandboxFile IsFileExists:PATH_DATABASE_SOUCE]) {
        exist = YES;
    }
    return exist;
}

- (BOOL)openDatabase
{
    BOOL openDone = NO;
    if ([SqliteManager isExistDatabase]) {
        openDone = [_database open];
    }
    return openDone;
}

- (NSArray*)mappingCityInfo
{
    NSMutableArray *array = [NSMutableArray array];
    if ([self openDatabase]) {
        [_database beginTransaction];
        FMResultSet *resultSet = [_database executeQuery:@"SELECT * FROM wineshopcity"];
        [_database commit];
        NSLog(@"result = %@",resultSet.statement);
    }
    return array;
}

@end
