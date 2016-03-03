//
//  MyChallengeViewController.h
//  RIVALS
//
//  Created by Sanjay Kumar on 02/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface MyChallengeViewController : UIViewController<CXConnectionDelegate,UITableViewDataSource,UITabBarDelegate>{
    
    IBOutlet UITableView *challengeTableView;
}

@end
