//
//  PSNativeDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PingStartDelegate.h"
@class PSNativeView;
@class PSNativeAd;

NS_ASSUME_NONNULL_BEGIN

/**
 Native ad delegate
 */
@protocol PSNativeDelegate <PingStartDelegate>

@optional

/**
 Native is loaded,You can now customize the view to display ad data.
 
 @param view PSNativeView
 */
-(void)psAdViewNativeDidLoad:(PSNativeView*)view;

@end

NS_ASSUME_NONNULL_END
