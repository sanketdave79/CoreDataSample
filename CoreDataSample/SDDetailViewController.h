//
//  SDDetailViewController.h
//  CoreDataSample
//
//  Created by sanket on 18/01/2014.
//  Copyright (c) 2014 Techmentation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
