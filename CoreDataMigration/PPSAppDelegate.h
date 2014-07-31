//
//  PPSAppDelegate.h
//  CoreDataMigration
//
//  Created by Alexander G Edge on 31/07/2014.
//  Copyright (c) 2014 Peeps Media Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PPSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
