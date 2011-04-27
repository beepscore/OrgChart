//
//  OrgChartAppDelegate.h
//  OrgChart
//
//  Created by Steve Baker on 4/26/11.
//  Copyright 2011 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OrgChartViewController;

@interface OrgChartAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet OrgChartViewController *viewController;

@end
