//
//  PSInterstitialDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

@class PSInterstitialView;

#import "PingStartDelegate.h"
#import "PSPresentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Interstitial ad delegate
 */
@protocol PSInterstitialDelegate <PingStartDelegate,PSPresentDelegate>

@optional

/**
 
 Interstitial ad loaded.Now is the best time to present the view
 @param view PSInterstitialView
 */
-(void)psAdViewInterstitialDidLoad:(PSInterstitialView*)view;

@end

NS_ASSUME_NONNULL_END
