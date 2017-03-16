//
//  PSBannerView.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/23.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSBannerDelegate.h"

/**
 Banner ad view
 */
@interface PSBannerView : PSBaseView

/**
 PSBannerDelegate
 */
@property(nonatomic,weak,nullable)id<PSBannerDelegate> delegate;
@end
