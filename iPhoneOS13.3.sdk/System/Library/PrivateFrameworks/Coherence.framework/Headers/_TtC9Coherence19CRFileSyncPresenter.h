//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence19CRFileSyncPresenter : NSObject <NSFilePresenter>
{
    MISSING_TYPE *fileURL;
    MISSING_TYPE *queue;
    MISSING_TYPE *manager;
}

// - (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end
