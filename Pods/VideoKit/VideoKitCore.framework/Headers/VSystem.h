//
//  VSystem.h
//  VSDK
//
//  Created by V Communicate on 6/5/14.
//  Copyright (c) 2016 V Communicate. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VPreferences.h"

@interface VSystem : NSObject

+ (void)registerAPNTokenString:(NSString *)token fromObject:(id) object;

+ (void)setAppID:(NSString *)appID fromObject:(id) object;

+ (NSString *)appID:(id) object;

+ (void)launch:(id) object;

+ (void)resetCurrentState:(id) object;

+ (VPreferences *)preferences;

@end
