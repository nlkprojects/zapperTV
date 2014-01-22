//
// Created by Nkashama Leo Kabeya on 22/01/2014.
// Copyright (c) 2014 nlkprojects. All rights reserved.
//

#import "ZTVDefaultRestHandler.h"


@implementation ZTVDefaultRestHandler

#pragma mark - Singleton

static ZTVDefaultRestHandler *_sharedAPIInstance = nil;
static dispatch_once_t onceToken;

+(ZTVDefaultRestHandler*)sharedHandler
{
    dispatch_once(&onceToken, ^{
        _sharedAPIInstance = [[self alloc] init];
        _sharedAPIInstance.requestSerializer = [AFJSONRequestSerializer new];
    });
    return _sharedAPIInstance;
}

#pragma mark - Public Methods

-(void)performService:(NSString *)service serviceType:(NSString *)callType withParameters:(NSDictionary *)parameters
     andResponseBlock:(ZTVDefaultRestHandlerResponse)block
    {
        NSAssert(self.APIKey != nil, @"Please, add your APIKey");
        NSMutableDictionary *keyParameters = parameters ? [parameters mutableCopy] : [@{} mutableCopy];
        keyParameters[@"api_key"] = self.APIKey;

        if ([service rangeOfString:@"{id}"].location != NSNotFound) {
            NSAssert(keyParameters[@"id"] != nil, @"Please, add the id");
            if (![keyParameters[@"id"] isKindOfClass:[NSString class]])
                keyParameters[@"id"] = [keyParameters[@"id"] stringValue];
            service = [service stringByReplacingOccurrencesOfString:@"{id}" withString:keyParameters[@"id"]];
        }

        if([callType isEqualToString:@"GET"]){
            [self GET:service parameters:keyParameters success:^(AFHTTPRequestOperation *operation, id responseObject) {
                block(responseObject, nil);
            } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
                block(nil, error);
            }];
        }else{
            [self POST:service parameters:keyParameters success:^(AFHTTPRequestOperation *operation, id responseObject) {
                block(responseObject, nil);
            } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
                block(nil, error);
            }];
        }
    }

@end