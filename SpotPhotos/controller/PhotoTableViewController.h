//
//  PhotoTableViewController.h
//  SpotPhotos
//
//  Created by User on 11/23/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlickrFetcher.h"
#import "ImageViewController.h"

@interface PhotoTableViewController : UITableViewController

@property (nonatomic) NSArray *photos;

@end
