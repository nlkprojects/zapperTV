//
//  ZTVAppDelegate.h
//  zapperTV
//
//  Created by Nkashama Leo Kabeya on 22/01/2014.
//  Copyright (c) 2014 nlkprojects. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZTVAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(void)postNotification:(NSString *)notification forObject:(id)object  withUserInfo:(NSDictionary *)userInfo;

@end