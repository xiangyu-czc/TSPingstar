//
//  NbtPingStart.h
//  NbtPingStart
//
//  Created by zhouyehong on 2017/1/4.
//  Copyright © 2017年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_include(<NbtPingStart/NbtPingStart.h>)
//! Project version number for NbtPingStart.
FOUNDATION_EXPORT double NbtPingStartVersionNumber;

//! Project version string for NbtPingStart.
FOUNDATION_EXPORT const unsigned char NbtPingStartVersionString[];

#import <NbtPingStart/PingStart.h>

#import <NbtPingStart/PSVideoView.h>
#import <NbtPingStart/PSBannerView.h>
#import <NbtPingStart/PSNativeView.h>
#import <NbtPingStart/PSMultiNativeView.h>
#import <NbtPingStart/PSInterstitialView.h>

#import <NbtPingStart/PSError.h>
#import <NbtPingStart/PSErrorCode.h>
#import <NbtPingStart/PSReward.h>
#import <NbtPingStart/PSNativeAd.h>

#import <NbtPingStart/PSVideoDelegate.h>
#import <NbtPingStart/PSBannerDelegate.h>
#import <NbtPingStart/PSNativeDelegate.h>
#import <NbtPingStart/PSMultiNativeDelegate.h>
#import <NbtPingStart/PSInterstitialDelegate.h>

#else

#import "PingStart.h"

#import "PSVideoView.h"
#import "PSBannerView.h"
#import "PSNativeView.h"
#import "PSMultiNativeView.h"
#import "PSInterstitialView.h"

#import "PSError.h"
#import "PSErrorCode.h"
#import "PSReward.h"
#import "PSNativeAd.h"

#import "PSVideoDelegate.h"
#import "PSBannerDelegate.h"
#import "PSNativeDelegate.h"
#import "PSMultiNativeDelegate.h"
#import "PSInterstitialDelegate.h"

#endif
