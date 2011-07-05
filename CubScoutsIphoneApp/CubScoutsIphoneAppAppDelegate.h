//
//  CubScoutsIphoneAppAppDelegate.h
//  CubScoutsIphoneApp
//
//  Created by Bryan Clauser on 7/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CubScoutsIphoneAppViewController;

@interface CubScoutsIphoneAppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CubScoutsIphoneAppViewController *viewController;

@end
