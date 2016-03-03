//
//  ViewController.h
//  RIVALS
//
//  Created by Sanjay Kumar on 02/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import "AppDelegate.h"
@interface LoginViewController : UIViewController<CXConnectionDelegate>{
    
}
-(IBAction)loginFb:(id)sender;

@end

