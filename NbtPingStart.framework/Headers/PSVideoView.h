//
//  PSVideoView.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSVideoDelegate.h"
#import "PSPresentProtocol.h"

/**
 Video ad view
 */
@interface PSVideoView : PSBaseView<PSPresentProtocol>

/**
 PSVideoDelegate
 */
@property(nonatomic,weak,nullable)id<PSVideoDelegate> delegate;

@end
