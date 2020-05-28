//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTMediaPlaylist-Protocol.h>

@class NSArray, NSMutableArray;

@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist>
{
    NSUInteger _startPosition;
    NSMutableArray *_rollItems;
    NSArray *_mainFeatureMetricsData;
}

@property(retain, nonatomic) NSArray *mainFeatureMetricsData; // @synthesize mainFeatureMetricsData=_mainFeatureMetricsData;
@property(retain, nonatomic) NSMutableArray *rollItems; // @synthesize rollItems=_rollItems;
@property(nonatomic) NSUInteger startPosition; // @synthesize startPosition=_startPosition;
// - (void).cxx_destruct;
- (long long)indexOfLastRollItemWithStartBeforePosition:(NSUInteger)arg1;
- (id)mainFeatureItemWithStartOverallPosition:(NSUInteger)arg1;
- (void)addRollItem:(id)arg1;
- (id)itemsBetweenStartOverallPosition:(NSUInteger)arg1 endOverallPosition:(NSUInteger)arg2;
- (id)itemAtOverallPosition:(NSUInteger)arg1 rangeOptions:(long long)arg2;
- (void)addRollItemWithStartOverallPosition:(NSUInteger)arg1 duration:(NSUInteger)arg2 metricsData:(id)arg3;
- (void)addRollInfoItem:(id)arg1;
- (void)addRollInfoItems:(id)arg1;
- (id)initWithMainFeatureMetricsData:(id)arg1;
- (id)initWithStartPosition:(NSUInteger)arg1 mainFeatureMetricsData:(id)arg2;

@end
