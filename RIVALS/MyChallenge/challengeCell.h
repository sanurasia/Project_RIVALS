//
//  challengeCell.h
//  RIVALS
//
//  Created by Sanjay Kumar on 03/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface challengeCell : UITableViewCell{
    
}
@property(nonatomic,weak)IBOutlet UIImageView *challenge_Img;
@property(nonatomic,weak)IBOutlet UIImageView *acceptor_Img;
@property(nonatomic,weak)IBOutlet UILabel *challengerName_lbl;
@property(nonatomic,weak)IBOutlet UILabel *acceptorName_lbl;
@property(nonatomic,weak)IBOutlet UILabel *playerOneName_lbl;
@property(nonatomic,weak)IBOutlet UILabel *playerTwoName_lbl;
@property(nonatomic,weak)IBOutlet UIImageView *state_Img;
@property(nonatomic,weak)IBOutlet UILabel *state_lbl;
@property(nonatomic,weak)IBOutlet UILabel *days_lbl;
@property(nonatomic,weak)IBOutlet UILabel *hours_lbl;
@property(nonatomic,weak)IBOutlet UILabel *minutes_lbl;
@property(nonatomic,weak)IBOutlet UIButton *accept_btn;
@property(nonatomic,weak)IBOutlet UIButton *reject_btn;
@property(nonatomic,weak)IBOutlet UILabel *challenge;
@property(nonatomic,weak)IBOutlet UIImageView *Img_player1;
@property(nonatomic,weak)IBOutlet UIImageView *Img_player2;
@end
