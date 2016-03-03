//
//  challengeCell.m
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "challengeCell.h"

@implementation challengeCell
@synthesize challenge_Img,acceptor_Img,challengerName_lbl,acceptorName_lbl,playerOneName_lbl,playerTwoName_lbl,state_Img,state_lbl,days_lbl,hours_lbl,minutes_lbl,accept_btn,reject_btn,challenge,Img_player1,Img_player2;

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
