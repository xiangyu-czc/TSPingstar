//
//  PSErrorCode.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#ifndef PSErrorCode_h
#define PSErrorCode_h

/**
 PingStart error code
 */
typedef NS_ENUM(NSInteger,PSErrorCode) {
    ///General
    PSErrorGeneral = 1,
    ///Network unavailable
    PSErrorNetworkUnavailable,
    ///Ad data is not available
    PSErrorAdUnavailable,
    ///Corresponding ad is not available by slotId and publisherId
    PSErrorSlotIdOrPublisherIdUnavailable,
    ///File decompression error
    PSErrorUnZip,
    ///Exceeds the upper limit of the daily display of the slot
    PSErrorFrequencyLimit
};

#endif /* PSErrorCode_h */
