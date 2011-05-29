//
//  OrgChartAppDelegate.h
//  OrgChart
//
//  Created by Steve Baker on 4/26/11.
//  Copyright 2011 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreData/CoreData.h"

@class OrgChartViewController;

@interface OrgChartAppDelegate : NSObject <UIApplicationDelegate> {
    
@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet OrgChartViewController *viewController;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

//Returns the URL to the application's Documents directory.
- (NSURL *)applicationDocumentsDirectory;

@end
