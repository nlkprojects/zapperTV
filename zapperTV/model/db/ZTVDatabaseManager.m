//
// Created by Nkashama Leo Kabeya on 23/01/2014.
// Copyright (c) 2014 nlkprojects. All rights reserved.
//

#import "ZTVDatabaseManager.h"


@implementation ZTVDatabaseManager {

}

#pragma mark - Singleton

static ZTVDatabaseManager *sharedDBManager = nil;
static dispatch_once_t onceToken;

+(ZTVDatabaseManager*)sharedManager
{
    dispatch_once(&onceToken,^{
        sharedDBManager = [[self alloc] init];
    });
    return sharedDBManager;
}

- (id)init {
    if((self = [super init])){

        return self;
    }
    return nil;
}

@end