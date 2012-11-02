//
//  CNAppDelegate.h
//  Moma
//
//  Created by Lenix Liu on 12-11-1.
//  Copyright (c) 2012年 CrushNuts. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Foursquare2.h"

#import "FoursquareWebLogin.h"

@interface CNAppDelegate : UIResponder <UIApplicationDelegate,CNFoursquareLoginDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIViewController *viewController;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

-(void)authorizeWithViewController:(UIViewController*)controller
						  Callback:(Foursquare2Callback)callback;
-(void)setCode:(NSString*)code;
-(void)test_method;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
