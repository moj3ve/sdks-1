//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTSnapshotScheduler : NSObject
{
    NSString *_bundleID;
}

+ (double)_quiescingWindow;
// - (void).cxx_destruct;
- (void)scheduleSnapshot;
- (void)_performScheduleSnapshot;
- (id)initWithBundleID:(id)arg1;

@end
