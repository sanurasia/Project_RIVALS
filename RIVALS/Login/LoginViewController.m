//
//  ViewController.m
//  RIVALS
//
//  Created by Sanjay Kumar on 02/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "LoginViewController.h"

@interface LoginViewController (){
        
}

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    // Do any additional setup after loading the view, typically from a nib.
}

#pragma mark button action
-(IBAction)loginFb:(id)sender{
    
    FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    
    if ([FBSDKAccessToken currentAccessToken])
    {
        NSLog(@"Token is available : %@",[[FBSDKAccessToken currentAccessToken]tokenString]);
        [self fetchUserInfo];
    }
    else
    {
        [login logInWithReadPermissions:@[@"email",@"public_profile"] fromViewController:self handler:^(FBSDKLoginManagerLoginResult *result, NSError *error)
         {
             if (error)
             {
                 NSLog(@"Login process error");
             }
             else if (result.isCancelled)
             {
                 NSLog(@"User cancelled login");
             }
             else
             {
                 NSLog(@"Login Success");
                 
                 if ([result.grantedPermissions containsObject:@"email"])
                 {
                     NSLog(@"result is:%@",result);
                     [self fetchUserInfo];
                 }
                 else
                 {
                     
                     
                 }
             }
         }];
    }
    
    //remove mes
}
-(void)fetchUserInfo
{
    if ([FBSDKAccessToken currentAccessToken])
    {
        NSLog(@"Token is available : %@",[[FBSDKAccessToken currentAccessToken]tokenString]);
        
        [[[FBSDKGraphRequest alloc] initWithGraphPath:@"me" parameters:@{@"fields": @"id, name, email"}]
         startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
             if (!error)
             {
                 NSLog(@"results:%@",result);
                 
                 NSString *email = [result objectForKey:@"email"];
                 NSString *userId = [result objectForKey:@"id"];
                 NSString *name=[result objectForKey:@"name"];
                 NSMutableDictionary *dictSignUP = [[NSMutableDictionary alloc] init];
                 [dictSignUP setValue:userId forKey:@"FacebookID"];
                 [dictSignUP setValue:email forKey:@"Email"];
                 [dictSignUP setValue:name forKey:@"Name"];
                 [dictSignUP setValue:@"" forKey:@"Mobile"];
                 
                 NSString *deviceToken= [[NSUserDefaults standardUserDefaults]objectForKey:KDEVICETOKEN];
                 if (deviceToken!=nil) {
                     deviceToken=[deviceToken stringByAppendingString:@","];
                 }
                 else{
                     
                     deviceToken=@"1234567890ABCDEFGHO";
                 }
                 
                 [dictSignUP setValue:deviceToken forKey:@"IOSUDID"];
                 [dictSignUP setValue:@"" forKey:@"AndroidUDID"];
                 [appDelegate startAnimatingIndicatorView];
                 CLXURLConnection* temp = [[CLXURLConnection alloc] init];
                 temp.delegate = self;
                 
                 [temp postParseInfoWithUrlPath:KFacebookLogin WithSelector:nil callerClass:nil parameterDic:dictSignUP showloader:NO];
                 if (email.length >0 )
                 {
                     //Start you app Todo
                 }
                 else
                 {
                     NSLog(@"Facebook email is not verified");
                 }
             }
             else
             {
                 NSLog(@"Error %@",error);
             }
         }];
    }
    //remove me
}
#pragma mark - CLXURLConnection Delegate

-(void)didReceiveCLXURLResponse:(id)object methodName:(NSString*)methodName;
{
    
    [appDelegate stopAnimatingIndicatorView];
    
    NSLog(@" Show the updates %@",[object valueForKey:@"Status"]);
    
    
    if ([[object valueForKey:@"Status"] boolValue])
    {
        NSDictionary *Dict =[NSDictionary dictionaryWithDictionary:object];
        [[NSUserDefaults standardUserDefaults] setBool:YES forKey:KISLOGIN];
        [[NSUserDefaults standardUserDefaults] setObject:[NSKeyedArchiver archivedDataWithRootObject:Dict] forKey:KUSERDATA];
        [[NSUserDefaults standardUserDefaults] synchronize];
        
        if ([methodName isEqualToString:@"FacebookLogin"]) {
            [appDelegate prepareMyChallengeController];
        }
      
       
    }
    else{
        [appDelegate showAlertMessage:[object valueForKey:@"Message"] tittle:nil];
    }
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
