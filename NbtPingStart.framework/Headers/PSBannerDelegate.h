//
//  PSBannerDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/21.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PingStartDelegate.h"
@class PSBannerView;

NS_ASSUME_NONNULL_BEGIN

/**
 Banner ad delegate
 */
@protocol PSBannerDelegate <PingStartDelegate>

@optional

/**
 Banner is loaded, Now is the best time to display or update its frame

 @param view PSBannerView
 @param height The actual height of the banner,You should modify the height of the banner based on the height returned.
 */
-(void)psAdViewBanner:(PSBannerView*)view didLoadWithHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
