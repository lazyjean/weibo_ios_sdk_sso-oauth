//
//  SNAppDelegate.h
//  sinaweibo_ios_sdk_demo
//
//  Created by Wade Cheng on 4/23/12.
//  Copyright (c) 2012 SINA. All rights reserved.
//

#import <UIKit/UIKit.h>

/**将下面注释取消，并定义自己的app key，app secret以及授权跳转地址uri
 此demo即可编译运行**/

#define kAppKey             @"3018973784"
#define kAppSecret          @"f00e83a6c27ceb482c4b510fcbc655fc"
#define kAppRedirectURI     @"http://www.qq.com"
#ifndef kAppKey
#error
#endif

#ifndef kAppSecret
#error
#endif

#ifndef kAppRedirectURI
#error
#endif

@class SinaWeibo;
@class SNViewController;

@interface SNAppDelegate : UIResponder <UIApplicationDelegate>
{
    SinaWeibo *sinaweibo;
}

@property (readonly, nonatomic) SinaWeibo *sinaweibo;
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SNViewController *viewController;

@end
