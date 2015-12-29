//
//  DetailViewController.h
//  Mapper
//
//  Created by Keith Roehl on 12/29/15.
//  Copyright © 2015 Keith Roehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

