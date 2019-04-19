//
//  BZHViewModelProtocol.h
//  PrimaryportDrives
//
//  Created by JinYang on 2019/4/17.
//  Copyright © 2019 BZH Technology Co.,Ltd. All rights reserved.
//  一套公用接口协议 (主要实现高内聚 低耦合)

//  github:https://github.com/hanssea  持续更新
//  hanssea09@gmail.com


/*

 *********************************************************
 此套协议基于 MVVM 开发模式
 对于网络数据个人建议采用下面方式

 @property (nonatomic,strong) RACCommand *fetchBannerCommand;
 
 
 - (RACCommand *)fetchBannerCommand{
 if (!_fetchBannerCommand) {
 _fetchBannerCommand=[[RACCommand alloc] initWithSignalBlock:^RACSignal *(id input) {
 return [RACSignal createSignal:^RACDisposable *(id<RACSubscriber> subscriber) {
 IWLog(@"开始请求...");
 IWLog(@"...");
 IWLog(@"完成...");
 [subscriber sendNext:@"3333333"];
 [subscriber sendCompleted];
 return nil;
 }];
 }];
 }return _fetchBannerCommand;
 }
 
 
 // 订阅fetchBannerCommand请求
 [[[self.ItemViewModel.fetchBannerCommand executionSignals] switchToLatest] subscribeNext:^(id x) {
 IWLog(@"x------");
 }];
 
 
 *********************************************************
 
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  请求成功block
 */
typedef void (^successBlock)(id responseObject);
/**
 *  请求失败block
 */
typedef void (^failureBlock) (NSError *error);
/**
 *  请求响应block
 */
typedef void (^responseBlock)(id dataObj, NSError *error);

/**
 *  将自己的信息返回给ViewManger的block
 */
typedef void (^viewMangerInfosBlock)( void);
/**
 *  将自己的信息返回给ViewModel的block
 */
typedef void (^viewModelInfosBlock)( void);



@protocol BZHViewModelProtocol <NSObject>


@optional
/**
 * viewModel 初始化属性
 */
- (void)bzh_initializeForViewModel;

/**
 * 配置tableView
 
 */
- (void)bzh_configTableView:(UITableView *)tableView;

/**
 * 加载数据 逻辑放在viewModel 赋值放在 view  bzh_configureViewWithModel 控制器不关注细节
 */

- (void)bzh_viewModelWithFeeds:(NSDictionary *)feeds  success:(successBlock)success  failure:(failureBlock)failure;


@end

NS_ASSUME_NONNULL_END
