//
//  PSInterstitialView.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSInterstitialDelegate.h"
#import "PSPresentProtocol.h"

/**
 Interstitial ad
 */
@interface PSInterstitialView : PSBaseView<PSPresentProtocol>

/**
 PSInterstitialDelegate
 */
@property(nonatomic,weak,nullable)id<PSInterstitialDelegate> delegate;
@end
