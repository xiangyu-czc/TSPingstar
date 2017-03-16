//
//  PingStart.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 PingStart
 */
@interface PingStart : NSObject

/**
 debug mode

 @param debug enable
 */
+(void)enableDebug:(BOOL)debug;

/**
 Ping Start SDK version
 
 @return version
 */
+(NSString*)version;
@end

NS_ASSUME_NONNULL_END


