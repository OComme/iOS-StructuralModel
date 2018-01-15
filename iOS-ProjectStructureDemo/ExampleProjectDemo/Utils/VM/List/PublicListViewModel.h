//
//  PublicListViewModel.h
//  ExampleProjectDemo
//
//  Created by BlanBok on 2018/1/15.
//  Copyright © 2018年 juyuanGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PublicListViewModelDelegate.h"

static NSString * _Nonnull const PublicList_ReuseIdentifier = @"_PTList_reuseId";

@interface PublicListViewModel : NSObject<UICollectionViewDelegateFlowLayout,UICollectionViewDataSource,UITableViewDelegate,UITableViewDataSource>


//==================================data===========================================
/**
 数据源
 */
@property (nonnull,nonatomic,strong) NSMutableArray *dataSource;

/**
 当前页码
 */
@property (nonatomic,assign) NSUInteger page_current;


//==================================view===========================================
/**
 无数据显示
 */
@property (nonnull,nonatomic,strong) UIView *emptyView;
/**
 列表视图
 */
@property (nonnull,nonatomic,strong) UIScrollView *listView;

#pragma mark-refreshSelector
/**
 刷新
 */
- (void)refresh_header;

/**
 加载更多 是否能加载
 */
- (void)refresh_footer;

/**
 数据加载
 */
- (void)refresh_load;

@end
