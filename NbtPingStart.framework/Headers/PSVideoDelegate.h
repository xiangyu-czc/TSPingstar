//
//  PSVideoDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//
@class PSVideoView;

#import "PingStartDelegate.h"
#import "PSPresentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Video ad delegate
 */
@protocol PSVideoDelegate <PingStartDelegate,PSPresentDelegate>

@optional

/**
 The video ad is loaded and ready to play.Now is the best time to present the view

 @param view videoView
 */
-(void)psAdViewVideoDidLoad:(PSVideoView*)view;

/**
 video ad will close

 @param view videoView
 */
-(void)psAdViewVideoWillClosePlaying:(PSVideoView*)view;

/**
 Called when a video ad with a reward is played
 
 @param view baseAdView
 @param reward reward
 */
-(void)psAdView:(PSBaseView*)view didReward:(PSReward*)reward;
@end

NS_ASSUME_NONNULL_END
