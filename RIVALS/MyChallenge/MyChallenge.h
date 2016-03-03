//
//  MyChallenge.h
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MyChallenge : NSObject
@property(nonatomic,strong)NSString *challenge;
@property(nonatomic,strong) NSString *challengerName;
@property(nonatomic,strong) NSString *acceptorName;
@property(nonatomic,strong) NSString *playerOneName;
@property(nonatomic,strong)NSString *playerTwoName;
@property(nonatomic) int state;
@property(nonatomic,strong) NSString *days;
@property(nonatomic,strong) NSString *hours;
@property(nonatomic,strong) NSString *minutes;
@property(nonatomic) int challengeID;
@property(nonatomic,strong)NSString *Image_Challenger;
@property(nonatomic,strong)NSString *Image_Playerone;
@property(nonatomic,strong)NSString *Image_Playertwo;
-(id)initWithDictionary:(NSDictionary*)node;

@end
