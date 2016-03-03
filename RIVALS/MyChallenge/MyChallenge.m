//
//  MyChallenge.m
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "MyChallenge.h"

@implementation MyChallenge
- (id) init
{
    if(self = [super init])
    {
        self.challenge = nil;
        self.challengerName = nil;
        self.acceptorName = nil;
        self.playerOneName = nil;
        self.playerTwoName = nil;
        self.state = 0;
        self.days = nil;
        self.hours = nil;
        self.minutes = nil;
        self.challengeID = 0;
        self.Image_Playerone = nil;
        self.Image_Playerone = nil;
        self.Image_Playertwo = nil;
        
    }
    return self;
}

#define kdays @"Days"
#define Khours @"Hours"
#define Kminutes @"Minutes"
#define kplayerOneName @"Playerone"
#define kplayerTwoName @"Playertwo"
#define kacceptorName @"acceptorName"
#define KchallengeId @"challendID"
#define kchallenge @"challenger_text"
#define kstate @"isActive"
#define kchallengerName @"challengerName"
#define kImage_Challenger @"Image_Challenger"
#define kImage_Playerone @"Image_Playerone"
#define kImage_Playertwo @"Image_Playertwo"

-(id)initWithDictionary:(NSDictionary*)node
{
    if ([node valueForKey:kdays])
        self.days = [node valueForKey:kdays];
    
    if ([node valueForKey:Khours])
        self.hours = [node valueForKey:Khours];
    
    if ([node valueForKey:Kminutes])
        self.minutes = [node valueForKey:Kminutes];
    
    if ([node valueForKey:kplayerOneName])
        self.playerOneName = [node valueForKey:kplayerOneName];
    
    if ([node valueForKey:kplayerTwoName])
        self.playerTwoName = [node valueForKey:kplayerTwoName];
    
    if ([node valueForKey:kacceptorName])
        self.acceptorName = [node valueForKey:kacceptorName];
    
    if ([node valueForKey:KchallengeId]){
      
       self.challengeID = [[node objectForKey:KchallengeId] intValue];
 
    }
    
    if ([node valueForKey:kchallenge])
        self.challenge = [node valueForKey:kchallenge];
    
    if ([node valueForKey:kstate]){
      self.state = [[node objectForKey:kstate] intValue];
    }
    
    
    if ([node valueForKey:kchallengerName])
        self.challengerName = [node valueForKey:kchallengerName];
    
    if ([node valueForKey:kImage_Challenger])
    {
        if (![[node valueForKey:kImage_Challenger]isEqualToString:@""]) {
            self.Image_Challenger = [node valueForKey:kImage_Challenger];
        }
        else{
            self.Image_Challenger =@"";
        }
        
    }
    if ([node valueForKey:kImage_Playerone])
    {
        if (![[node valueForKey:kImage_Playerone]isEqualToString:@""]) {
            self.Image_Playerone = [node valueForKey:kImage_Playerone];
        }
        else{
            self.Image_Playerone =@"";
        }
        
    }
    if ([node valueForKey:kImage_Playertwo])
    {
        if (![[node valueForKey:kImage_Playertwo]isEqualToString:@""]) {
            self.Image_Playertwo = [node valueForKey:kImage_Playertwo];
        }
        else{
            self.Image_Playertwo =@"";
        }
        
    }
    
    return self;
    
    
}


@end
