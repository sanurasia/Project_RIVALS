//
//  AppDelegate.h
//  RIVALS
//
//  Created by Sanjay Kumar on 02/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    UIView *loaderView;
    UIActivityIndicatorView *activityIndicatorView;
}

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
-(void)showAlertMessage:(NSString *)message tittle:(NSString *) tittle;
-(BOOL) connectedToNetwork;
-(void)startAnimatingIndicatorView;
-(void)stopAnimatingIndicatorView;
-(void)prepareMyChallengeController;

@end
extern AppDelegate *appDelegate;
