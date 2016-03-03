//
//  challenge m
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "challengeCell.h"
#import "AppDelegate.h"

@implementation challengeCell
@synthesize challenge_Img,acceptor_Img,challengerName_lbl,acceptorName_lbl,playerOneName_lbl,playerTwoName_lbl,state_Img,state_lbl,days_lbl,hours_lbl,minutes_lbl,accept_btn,reject_btn,challenge,Img_player1,Img_player2;

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
-(void)setElement:(MyChallenge*)challengeObj{
    self.contentView.backgroundColor=[UIColor colorWithRed:219.0/255.0 green:220.0/255.0 blue:222.0/255.0 alpha:0.5];
    challengerName_lbl.text=challengeObj.challengerName;
    NSString *path1 =[NSString stringWithFormat:@"http://localhost/xampp/demo/Admin/uploads/%@",challengeObj.Image_Challenger];
    challenge_Img.image=[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path1]]];
     self.challenge.text=challengeObj.challenge;
     playerOneName_lbl.text=challengeObj.playerOneName;
     playerTwoName_lbl.text=challengeObj.playerTwoName;
     acceptorName_lbl.text=challengeObj.acceptorName;
     challengerName_lbl.text=challengeObj.challengerName;
     days_lbl.text=challengeObj.days;
     hours_lbl.text=challengeObj.hours;
     minutes_lbl.text=challengeObj.minutes;
    NSString *path2 =[NSString stringWithFormat:@"http://localhost/xampp/demo/%@",challengeObj.Image_Playerone];
     Img_player1.image=[appDelegate imageByScalingAndCroppingForSize:[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path2]]] : Img_player1.frame.size];
    NSString *path3 =[NSString stringWithFormat:@"http://localhost/xampp/demo/%@",challengeObj.Image_Playertwo];
     Img_player2.image=[appDelegate imageByScalingAndCroppingForSize:[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path3]]] : Img_player2.frame.size];
    if (challengeObj.state==1)
         state_lbl.text=@"Active";
    else
         state_lbl.text=@"InActive";
    
     Img_player1.layer.cornerRadius = 40;
     Img_player1.layer.masksToBounds = YES;
     Img_player2.layer.cornerRadius = 40;
     Img_player2.layer.masksToBounds = YES;
     challenge_Img.layer.cornerRadius = 25;
     challenge_Img.layer.masksToBounds = YES;
    [ challenge_Img.layer setBorderColor: [[UIColor colorWithRed:0.905 green:0.0 blue:0.552 alpha:1.0] CGColor]];
    [ challenge_Img.layer setBorderWidth: 5.0];
   
    
    
    
}

@end
