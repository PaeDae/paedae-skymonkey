//
//  AppDelegate.h
//  tweejump
//
//  Created by Yannick Loriot on 10/07/12.
//  Copyright Yannick Loriot 2012. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PaeDaePrizeSDK.h"

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate, PaeDaeInitDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

- (void) PaeDae_Initialized;
- (void) PaeDae_InitializeFailed;

@end
