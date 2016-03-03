//
//  MyChallengeViewController.m
//  RIVALS
//
//  Created by Sanjay Kumar on 02/03/16.
//  Copyright © 2016 Sanjay Kumar. All rights reserved.
//

#import "MyChallengeViewController.h"
#import "challengeCell.h"
#import "MyChallenge.h"
@interface MyChallengeViewController (){
    UIView *sliderView;
    challengeCell *cell;
    NSMutableArray *dataArray;
}

@end

@implementation MyChallengeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setLeftNavigationButtons];
    [self setSlider];
    dataArray = [[NSMutableArray alloc]init];
    // Do any additional setup after loading the view.
}
-(void)viewWillAppear:(BOOL)animated{
    [self getChallenges];
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *cellIdentifier = @"challengeIdentifier";
    cell = (challengeCell*)[challengeTableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (cell == nil)
    {
        [[NSBundle mainBundle] loadNibNamed:@"challengeCell" owner:self options:nil];
        [cell setNeedsDisplay];
    }
    MyChallenge *challenge =[dataArray objectAtIndex:[indexPath row]];
    cell.challengerName_lbl.text=challenge.challengerName;
    NSString *path1 =[NSString stringWithFormat:@"http://localhost/xampp/demo/Admin/uploads/%@",challenge.Image_Challenger];
    cell.challenge_Img.image=[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path1]]];
    cell.challenge.text=challenge.challenge;
    cell.playerOneName_lbl.text=challenge.playerOneName;
    cell.playerTwoName_lbl.text=challenge.playerTwoName;
    cell.acceptorName_lbl.text=challenge.acceptorName;
    cell.challengerName_lbl.text=challenge.challengerName;
    cell.days_lbl.text=challenge.days;
    cell.hours_lbl.text=challenge.hours;
    cell.minutes_lbl.text=challenge.minutes;
    NSString *path2 =[NSString stringWithFormat:@"http://localhost/xampp/demo/%@",challenge.Image_Playerone];
    cell.Img_player1.image=[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path2]]];
     NSString *path3 =[NSString stringWithFormat:@"http://localhost/xampp/demo/%@",challenge.Image_Playertwo];
    cell.Img_player2.image=[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:path3]]];
    
    if (challenge.state==1)
    cell.state_lbl.text=@"Active";
    else
    cell.state_lbl.text=@"InActive";
    
    cell.Img_player1.layer.cornerRadius = 40;
    cell.Img_player1.layer.masksToBounds = YES;
    cell.Img_player2.layer.cornerRadius = 40;
    cell.Img_player2.layer.masksToBounds = YES;
    cell.challenge_Img.layer.cornerRadius = 25;
    cell.challenge_Img.layer.masksToBounds = YES;
    [cell.challenge_Img.layer setBorderColor: [[UIColor colorWithRed:0.905 green:0.0 blue:0.552 alpha:1.0] CGColor]];
    [cell.challenge_Img.layer setBorderWidth: 5.0];
    
    
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [dataArray count] ;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

-(void)getChallenges{
    
    [appDelegate startAnimatingIndicatorView];
    NSMutableDictionary *dictGetTrips = [[NSMutableDictionary alloc] init];
    NSData *data = [[NSUserDefaults standardUserDefaults] objectForKey:KUSERDATA];
    NSDictionary *Dict = [NSKeyedUnarchiver unarchiveObjectWithData:data];
    NSString *userid=[Dict valueForKey:@"userid"];
    [dictGetTrips setValue:userid forKey:@"userid"];
    CLXURLConnection* temp = [[CLXURLConnection alloc] init];
    temp.delegate = self;
    [temp postParseInfoWithUrlPath:[NSString stringWithFormat:@"%@",@"http://localhost/xampp/demo/GetChallenges.php"] WithSelector:nil callerClass:nil parameterDic:dictGetTrips showloader:NO];
    
}
#pragma mark - CLXURLConnection Delegate
-(void)didReceiveCLXURLResponse:(id)object methodName:(NSString*)methodName;
{
    
    [appDelegate stopAnimatingIndicatorView];
    
    NSLog(@" Show the updates %@",[object valueForKey:@"Status"]);
    
    if ([[object valueForKey:@"Status"] boolValue])
    {
        if (dataArray.count>0) {
            [dataArray removeAllObjects];
        }
        NSArray *arr=[object objectForKey:@"Result"];
        for (NSDictionary *dict in arr) {
            MyChallenge *challenge = [[MyChallenge alloc]initWithDictionary:dict];
            [dataArray addObject:challenge];
            
        }
        [challengeTableView reloadData];
       
    }else
    {
       
    }
}

#pragma mark Set Slider
-(void) setSlider{
    sliderView = [[UIView alloc] initWithFrame:CGRectMake(-WIDTH, 0, WIDTH, HEIGHT)];
    sliderView.hidden=YES;
    sliderView.alpha=0.5;
    sliderView.backgroundColor=[UIColor blackColor];
    [appDelegate.window addSubview:sliderView];
    UITapGestureRecognizer *tapgesture=[[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(menuPressed)];
    tapgesture.numberOfTapsRequired=1;
    [sliderView addGestureRecognizer:tapgesture];
    sliderView.userInteractionEnabled=YES;
}
#pragma mark Left bar buttons set
-(void)setLeftNavigationButtons{
    UIImage* buttonImage = [UIImage imageNamed:@"top_men_list@2x.png"];
    UIButton *leftButton = [UIButton buttonWithType:UIButtonTypeCustom];
    leftButton.frame= CGRectMake(0, 0,34, 33);
    [leftButton setImage:buttonImage forState:UIControlStateNormal];
    [leftButton addTarget:self action:@selector(menuPressed)
         forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *backBtn =[[UIBarButtonItem alloc] initWithCustomView:leftButton];
    [self.navigationItem setLeftBarButtonItems:[NSArray arrayWithObjects:backBtn, nil]];
}
#pragma mark - menu button
-(void)menuPressed{
    [UIView animateWithDuration:1.0 animations:^{
        if (sliderView.hidden)
        {
            sliderView.frame =  CGRectMake(0,0,WIDTH, HEIGHT);
            sliderView.hidden=NO;
            
        }
        else
        {
            sliderView.frame =  CGRectMake(-WIDTH,0,WIDTH, HEIGHT);
            sliderView.hidden=YES;
        }
    }];
    [UIView commitAnimations];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
