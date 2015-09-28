//
//  DetailViewController.h
//  BlogReader
//
//  Created by Renu Srijith on 13/09/2015.
//  Copyright (c) 2015 newcastle university. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

