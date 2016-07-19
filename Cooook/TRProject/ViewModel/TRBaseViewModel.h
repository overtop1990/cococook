//
//  TRBaseViewModel.h
//  BestGroup
//
//  Created by Zll on 16/6/8.
//  Copyright © 2016年 Zll. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, VMRequestMode) {
    VMRequestModeRefresh,
    VMRequestModeMore,
};

@interface TRBaseViewModel : NSObject{
    NSURLSessionDataTask *_dataTask;
}

- (void)getDataWithRequestMode:(VMRequestMode)requestMode completionHandler:(void(^)(NSError *error))completionHandler;
@property (nonatomic) NSURLSessionDataTask *dataTask;

@end
