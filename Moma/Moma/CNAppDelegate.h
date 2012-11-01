//
//  CNAppDelegate.h
//  Moma
//
//  Created by Lenix Liu on 12-11-1.
//  Copyright (c) 2012年 CrushNuts. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
