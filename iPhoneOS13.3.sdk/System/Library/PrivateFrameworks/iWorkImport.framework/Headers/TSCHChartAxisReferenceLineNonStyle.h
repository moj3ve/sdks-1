//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisReferenceLineNonStyle : NSObject
{
    TSCHChartAxisID *mAxisIdentifier;
    NSArray *mReferenceLineNonStyleItems;
}

@property(copy, nonatomic) NSArray *referenceLineNonStyleItems; // @synthesize referenceLineNonStyleItems=mReferenceLineNonStyleItems;
@property(copy, nonatomic) TSCHChartAxisID *axisIdentifier; // @synthesize axisIdentifier=mAxisIdentifier;
// - (void).cxx_destruct;
- (void)didInitFromSOS;

@end

