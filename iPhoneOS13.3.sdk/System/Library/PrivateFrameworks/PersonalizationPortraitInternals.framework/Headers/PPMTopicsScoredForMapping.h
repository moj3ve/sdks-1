//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMTopicsScoredForMapping : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
- (void)trackEventWithScalar:(NSUInteger)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(NSUInteger)arg4 timeLimited:(struct PPMTypeSafeBool_)arg5 exclusionSpec:(struct PPMTypeSafeBool_)arg6 error:(struct PPMTypeSafeBool_)arg7;
- (id)init;

@end
