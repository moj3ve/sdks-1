//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AECameraAssetPackageGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *__generationQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue; // @synthesize _generationQueue=__generationQueue;
// - (void).cxx_destruct;
- (void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end
