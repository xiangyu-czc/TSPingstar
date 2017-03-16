//
//  PSReward.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Ad View the reward object
 */
@interface PSReward : NSObject

/**
 reward state
 */
@property(nonatomic,assign) BOOL success;

/**
 reward amount
 */
@property(nonatomic,assign) float amount;

/**
 currency name
 */
@property(nonatomic,copy) NSString *currencyName;
@end

NS_ASSUME_NONNULL_END
