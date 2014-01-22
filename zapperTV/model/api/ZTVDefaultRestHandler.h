//
// Created by Nkashama Leo Kabeya on 22/01/2014.
// Copyright (c) 2014 nlkprojects. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPRequestOperationManager.h"


@interface ZTVDefaultRestHandler : AFHTTPRequestOperationManager

typedef void (^ZTVDefaultRestHandlerResponse)(id response, NSError *error);

@property (nonatomic, strong) NSString * APIKey;

- (void)performService:(NSString *)service serviceType:(NSString *)restType withParameters:(NSDictionary *)parameters
        andResponseBlock:(ZTVDefaultRestHandlerResponse)block;

#pragma mark - Singleton
+(ZTVDefaultRestHandler *)sharedHandler;

@end