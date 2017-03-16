//
//  PSNativeAd.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Native ad object
 */
@interface PSNativeAd : NSObject

/**
 ad description
 */
@property(nonatomic,copy)NSString *desc;

/**
 ad title
 */
@property(nonatomic,copy)NSString *title;

/**
 The image url of the icon
 */
@property(nonatomic,copy)NSString *iconUrl;

/**
 The title of the download button
 */
@property(nonatomic,copy)NSString *calltoaction;

/**
 The image url of the cover
 */
@property(nonatomic,copy)NSString *coverimageUrl;

/**
 The ad of the AdMob
 */
@property(nonatomic,strong)NSObject *admobAd;

/**
 The ad of the facebook
 */
@property(nonatomic,strong)NSObject *facebookAd;

/**
 This is a method to associate a PSNativeAd with the UIView you will use to display the native ads.
 
 - Parameter view: The UIView you created to render all the native ads data elements.
 - Parameter viewController: The UIViewController that will be used to present SKStoreProductViewController
 (iTunes Store product information) or the in-app browser. If nil is passed, the top view controller currently shown will be used.
 
 
 The whole area of the UIView will be clickable.
 */
- (void)registerViewForInteraction:(UIView *)view
                withViewController:(nullable UIViewController *)viewController;

/**
 This is a method to disconnect a FBNativeAd with the UIView you used to display the native ads.
 */
- (void)unregisterView;

@end

NS_ASSUME_NONNULL_END
