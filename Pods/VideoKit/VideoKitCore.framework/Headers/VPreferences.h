//
//  VPreferences.h
//  VSDK
//
//  Created by V Communicate on 31/08/15.
//  Copyright (c) 2016 V Communicate. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VPreferences : NSObject


- (NSNumber *)localStorageSizeB:(id)object;

- (void)setLocalStorageSizeB:(NSNumber *)localStorageSizeB fromObject:(id)object;

- (NSNumber *)videoBitrate:(id)object;

- (void)setVideoBitrate:videoBitrate fromObject:(id)object;


- (NSNumber *)maxVideoBitrate:(id)object;

- (void)setMaxVideoBitrate:(NSNumber *)maxVideoBitrate fromObject:(id)object;


- (BOOL)autoVideoBitrateMode:(id)object;

- (void)setAutoVideoBitrateMode:(BOOL)autoVideoBitrateMode fromObject:(id)object;


- (BOOL)forceMP4loading:(id)object;

- (void)setForceMP4loading:(BOOL)forceMP4loading fromObject:(id)object;

- (BOOL)cacheVideo:(id)object;

- (void)setCacheVideo:(BOOL)cacheVideo fromObject:(id)object;


- (NSString *)cacheVideoDirectoryPath:(id)object;

- (void)setCacheVideoDirectoryPath:(NSString *)cacheVideoDirectoryPath fromObject:(id)object;

@end
