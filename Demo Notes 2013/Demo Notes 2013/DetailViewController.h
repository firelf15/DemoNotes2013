//
//  DetailViewController.h
//  Demo Notes 2013
//
//  Created by Monika Spielman on 8/22/13.
//  Copyright (c) 2013 Monika Spielman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
