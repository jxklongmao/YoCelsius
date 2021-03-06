//
//  MapManager.h
//  YXMWeather
//
//  Created by XianMingYou on 15/2/15.
//  Copyright (c) 2015年 XianMingYou. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
@class MapManager;

@protocol MapManagerLocationDelegate <NSObject>
@optional
- (void)mapManager:(MapManager *)manager didUpdateAndGetLastCLLocation:(CLLocation *)location;
- (void)mapManager:(MapManager *)manager didFailed:(NSError *)error;
- (void)mapManagerServerClosed:(MapManager *)manager;

@end

@interface MapManager : NSObject

@property (nonatomic, weak)     id<MapManagerLocationDelegate> delegate;
@property (nonatomic, readonly) CLAuthorizationStatus          authorizationStatus;

- (void)start;

@end
