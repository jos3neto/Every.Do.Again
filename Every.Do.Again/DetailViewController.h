//
//  DetailViewController.h
//  Every.Do.Again
//
//  Created by Jose on 4/2/18.
//  Copyright © 2018 appcat.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Every_Do_Again+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

