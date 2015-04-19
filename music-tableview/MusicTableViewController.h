//
//  MusicTableViewController.h
//  music-tableview
//
//  Created by Darlene Wong on 4/18/15.
//  Copyright (c) 2015 Darlene Wong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MusicTableViewController : UITableViewController

// array of string, datasource for the table view
@property (nonatomic,strong) NSArray *songs;

@end