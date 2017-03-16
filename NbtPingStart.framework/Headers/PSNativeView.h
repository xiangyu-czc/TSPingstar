//
//  PSNativeView.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSNativeDelegate.h"

/**
 Native ad View
 */
@interface PSNativeView : PSBaseView

/**
 PSNativeDelegate
 */
@property(nonatomic,weak,nullable)id<PSNativeDelegate> delegate;
@end
