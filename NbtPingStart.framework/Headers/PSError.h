//
//  PSError.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSErrorCode.h"

/**
 PingStart error
 */
@interface PSError : NSObject

/*!
 *  Error code
 */
@property (nonatomic) PSErrorCode code;

/*!
 *  Error description
 */
@property (nonatomic, copy) NSString *errorDescription;


/*!
 *  Initialize an error instance
 *
 *  @param aDescription  Error description
 *  @param aCode         Error code
 *
 *  @result Error instance
 */
- (instancetype)initWithDescription:(NSString *)aDescription
                               code:(PSErrorCode)aCode;

/*!
 *  Create a error instance
 *
 *  @param aDescription  Error description
 *  @param aCode         Error code
 *
 *  @result Error instance
 */
+ (instancetype)errorWithDescription:(NSString *)aDescription
                                code:(PSErrorCode)aCode;

@end
