//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSTMasterLayout;

@interface TSTLayoutTask : NSObject
{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

@property(retain, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=mCellStatesToLayout;
- (void)flushToGlobalCaches;
- (void)dealloc;
- (id)initWithMasterLayout:(id)arg1;

@end
