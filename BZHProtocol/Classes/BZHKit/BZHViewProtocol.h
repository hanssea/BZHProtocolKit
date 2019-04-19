//
//  BZHViewModelProtocol.h
//  PrimaryportDrives
//
//  Created by JinYang on 2019/4/17.
//  Copyright © 2019 BZH Technology Co.,Ltd. All rights reserved.
//  一套公用接口协议 (主要实现高内聚 低耦合)

//  github:https://github.com/hanssea  持续更新
//  hanssea09@gmail.com


#import <Foundation/Foundation.h>
#import "BZHViewModelProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol BZHViewProtocol <NSObject>


@optional

/**
 * 创建cell方法
 */
+ (instancetype)cellWithTableView:(UITableView *)tableView;


/**
 初始化视图
 */
- (void)bzh_createViewForView;


/**
 为视图绑定 viewModel
 
 @param viewModel 要绑定的ViewModel
 @param params 额外参数
 */
- (void)bzh_bindViewModel:(id <BZHViewModelProtocol>)viewModel withParams:(id)params;


/**
 *  根据model配置UIView，设置UIView内容
 */
- (void)bzh_configureViewWithModel:(id)model;


@end

NS_ASSUME_NONNULL_END
