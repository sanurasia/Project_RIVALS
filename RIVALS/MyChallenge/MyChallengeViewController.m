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
    [cell setElement:challenge];
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
    
    UIView *buttonContainer = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 200, 44)];
    buttonContainer.backgroundColor = [UIColor clearColor];
    UIButton *button0 = [UIButton buttonWithType:UIButtonTypeCustom];
    [button0 setFrame:CGRectMake(0, 0, 200, 44)];
    [button0 addTarget:self action:@selector(dropDownPressed) forControlEvents:UIControlEventTouchUpInside];
    [button0 setTitle:@"My Challenges" forState:UIControlStateNormal];
    [button0 setTitleColor:[UIColor colorWithRed:227.0/255.0 green:50.0/255.0 blue:122.0/255.0 alpha:1.0] forState:UIControlStateNormal];
    button0.titleLabel.font=[UIFont boldSystemFontOfSize:18];
    //[button0 setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [buttonContainer addSubview:button0];
    
    //add your spacer images and button1 and button2...
    
    self.navigationItem.titleView = buttonContainer;
    
    
    
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
-(void)dropDownPressed{
    
}


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
