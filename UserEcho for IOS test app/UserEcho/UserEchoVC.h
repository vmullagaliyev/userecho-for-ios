//
//  UserEchoVC.h
//  UserEcho for IOS test app
//
//  Created by Sergey Stukov on 7/9/13.
//  Copyright (c) 2013 UserEcho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserEchoVC : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
IBOutlet UITableView* topicsTable;
    
IBOutlet UIBarButtonItem* btnBack;
IBOutlet UIBarButtonItem* btnSignIn;
IBOutlet UIBarButtonItem* btnNewTopic;
IBOutlet UIBarButtonItem* btnUser;
IBOutlet UIBarButtonItem* btnSearch;
    

IBOutlet UISearchBar* sbSearch;
IBOutlet NSLayoutConstraint* sbSearchHeight;
    
    
IBOutlet UILabel* topicHeader;

    
//IBOutlet UINavigationController* ueNavController;
}

@property (nonatomic, retain) IBOutlet UILabel *topicHeader;

-(IBAction)backToMainApp;
-(IBAction)signIn;
-(IBAction)userClicked;
//-(void)signInToUserEchoService;

- (void)logOut;

@end
