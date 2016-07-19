//
//  YXSearchSomeThingViewController.h
//  TRProject
//
//  Created by Zll on 16/7/7.
//  Copyright © 2016年 Zll. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YXSearchSomeThingViewController : UIViewController
- (instancetype)initWithKey:(NSString *)key;
@property (nonatomic, readonly) NSString *key;
@end
