//
//  PSPresentProtocol.h
//  PingStart-iOS
//
//  Created by zhouyehong on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Ad View A protocol that can be modally displayed
 */
@protocol PSPresentProtocol <NSObject>

@required

/**
 When the AppStore download page is displayed by clicking the action button (such as 'Download', 'View'), whether to dismiss the full-screen ad. The default is YES
 */
@property(nonatomic,assign)BOOL dismissWhenTapActionButton;
/**
 Modal present view
 
 @param rootViewController The controller for which you want to present this view.eg:[UIApplication sharedApplication].keyWindow.rootViewController
 */
-(void)presentToViewController:(UIViewController*)rootViewController;
@end

NS_ASSUME_NONNULL_END
