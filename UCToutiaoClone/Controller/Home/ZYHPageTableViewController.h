//
//  ZYHomePageTableViewController.h
//  UCToutiaoClone
//
//  Created by lzy on 16/9/12.
//  Copyright © 2016年 lzy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZYHPageTableViewController : UIViewController
@property (copy, nonatomic) NSString *channelId;
- (void)freshData;
@end
