//
//  VCommonTypes.h
//  VSDK
//
//  Created by V on 5/7/14.
//  Copyright (c) 2016 V Communicate. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef VSDK_CommonTypes_h
#define VSDK_CommonTypes_h

/** Continuous data block used through entire SDK.
 @param data Part of downloaded data  (If data == nil then operation if finished).
 @param result Result object.
 @param isCancelled Boolean value which indicates if operation was cancelled.
 @param error Error if occured or nil.
 */
typedef void (^VContinuousDataBlock)(id data, id result, BOOL isCancelled, NSError *error);

/** Completion block used through entire SDK.
 @param result Result object.
 @param isCancelled Boolean value which indicates if operation was cancelled.
 @param error Error if occured or nil.
 */
typedef void (^VCompletionBlock)(id result, BOOL isCancelled, NSError *error);

typedef void (^VMediaInfoBlock)(NSData *result, int size, BOOL isCancelled, NSError *error);

typedef void (^VMappingBlock)(id originalData, id result);

/** Completion simple block
 @param result Result object.
 */
typedef void (^VSimpleBlock)(id result);

/** Recorder Capture/Recording mode
 */
typedef NS_ENUM(NSInteger, VRecorderCaptureType)
{
    /** Capturing/Recording back camera
     */
    VRecorderCaptureTypeBackCamera = 1,
    
    /** Capturing/Recording front camera
     */
    VRecorderCaptureTypeFrontCamera,
    
    /** Capturing/Recording sound only
     */
    VRecorderCaptureTypeAudioOnly
};

/** Recorder recording state
 */
typedef NS_ENUM(NSInteger, VRecorderState)
{
    /** Recorderding is stopped or not started yet.
     */
    VRecorderStateStopped = 1,
    
    /** Recorderding is in progress.
     */
    VRecorderStateRecording,
    
    /** Recorderding is paused.
     */
    VRecorderStatePaused
};

typedef NS_ENUM(NSInteger, VVideoPlayerViewContentMode)
{
    /** Preserve aspect ratio; fit within layer bounds.
     */
    VVideoPlayerViewContentModeResizeAspect = 1,
    
    /** Preserve aspect ratio; fill layer bounds.
     */
    VVideoPlayerViewContentModeResizeAspectFill,
    
    /** Stretch to fill layer bounds.
     */
    VVideoPlayerViewContentModeResize
};


static NSString *const kVVideoStartedBeingUploadedNotification = @"VKVideoUploadStarted";
static NSString *const kVVideoHasBeenUploadedNotification = @"VKVideoIsUploaded";
static NSString *const kVVideoFailedToUploadNotification = @"VKVideoUploadFailed";
static NSString *const kVVideoUploadingHasBeenCanceledNotification = @"VKVideoUploadCanceled";
static NSString *const kVVideosUploadingStartedNotification = @"kVVideosUploadingStartedNotification";
static NSString *const kVVideosUploadingFinishedNotification = @"kVVideosUploadingFinishedNotification";

static NSString *const kVCurrentBandwidthModeIsChangedNotification = @"kVCurrentBandwidthModeIsChangedNotification";

static NSString *const kVQRCodeScannerPerformedReadingNotification = @"kVQRCodeScannerPerformedReadingNotification";

static NSString *const kVUserStatusUpdateNotification = @"kVUserStatusUpdateNotificationNotification";

static NSString *const kVBandwidthCalculationNotification = @"kVBandwidthCalculationNotification";

static NSString *const kVVideoPlayerViewStatusChangedNotification = @"kVVideoPlayerViewStatusChangedNotification";

static NSString *const kVPlaylistPlayerControllerStatusChangedNotification = @"kVPlaylistPlayerControllerStatusChangedNotification";

static NSString *const kVTokenIsExpiredErrorNotification = @"kVTokenIsExpiredErrorNotification";

#endif
