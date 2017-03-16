//
//  PSMultiNativeDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PingStartDelegate.h"
@class PSMultiNativeView;
@class PSNativeAd;

NS_ASSUME_NONNULL_BEGIN

/**
 Multiple native ad delegate
 */
@protocol PSMultiNativeDelegate <PingStartDelegate>

@optional

/**
 Multiple native is loaded,You can now customize the view to display ad data list.
 
 @param view PSMultiNativeView
 @param nativeAds list of PSNativeAd
 */
-(void)psAdViewMultiNative:(PSMultiNativeView*)view didLoadWithNativeAds:(NSArray<PSNativeAd*>*)nativeAds;

@end

NS_ASSUME_NONNULL_END
