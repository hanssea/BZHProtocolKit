//
//  BZHViewController.m
//  BZHProtocol
//
//  Created by hanssea on 04/19/2019.
//  Copyright (c) 2019 hanssea. All rights reserved.
//

#import "BZHViewController.h"
#import <BZHKit.h>
@interface BZHViewController ()<BZHViewProtocol>

@end

@implementation BZHViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
//    [self.view bzh_viewModelWithFeeds:nil success:^(id  _Nonnull responseObject) {
//        
//    } failure:^(NSError * _Nonnull error) {
//        
//    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
