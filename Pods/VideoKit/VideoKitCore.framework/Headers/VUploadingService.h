//
//  UploadingManager.h
//  VSDK
//
//  Created by Andrey Toropchin on 09.04.14.
//  Copyright (c) 2016 V Communicate. All rights reserved.
//

#import <Foundation/Foundation.h>
// #import <UIKit/UIKit.h>

#import "VCommonTypes.h"

@class VKVideo;

@interface VUploadingService : NSObject

+ (VUploadingService*)getInstance;

- (void)uploadVideoID:(NSString *)videoID;
- (VKVideo *)uploadVideoFile:(NSURL *)url withTitle: (NSString *)title withTags:(NSSet<NSString *> *)tags withMetadata:(NSDictionary *)metadata;

- (void)cancelUploadingVideoID:(NSString *)videoID;
- (void)confirmUploadingVideoID:(NSString *)videoID;
- (void)startNonCompletedUploadingsAgain;

- (NSUInteger)queuedVideoCount;

@end
