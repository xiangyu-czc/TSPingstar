//
//  PSPresentDelegate.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//
#import "PSPresentProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Ad full-screen Present delegate
 */
@protocol PSPresentDelegate <NSObject>

@optional
/**
 Called when the ad view is full screen.Here, you can hide the status bar for a better experience when your ad appears full-screen.
 
 @param view PSPresentProtocol
 */
-(void)psAdViewWillPresentScreen:(id<PSPresentProtocol>)view;

/**
 Called when the dismiss.If the status bar is hidden by the above method, it should be restored
 
 @param view PSPresentProtocol
 */
-(void)psAdViewWillDismissScreen:(id<PSPresentProtocol>)view;

@end

NS_ASSUME_NONNULL_END
