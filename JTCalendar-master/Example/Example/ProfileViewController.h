//
//  ProfileViewController.h
//  Example
//
//  Created by admin on 11/8/15.
//  Copyright (c) 2015 Jonathan Tribouharet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) UIView *headerView;

@end