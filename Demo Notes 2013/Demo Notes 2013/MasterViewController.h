//
//  MasterViewController.h
//  Demo Notes 2013
//
//  Created by Monika Spielman on 8/22/13.
//  Copyright (c) 2013 Monika Spielman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
