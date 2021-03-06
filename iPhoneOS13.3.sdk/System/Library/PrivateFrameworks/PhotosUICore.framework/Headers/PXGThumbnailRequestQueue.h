//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGThumbnailRequestQueue : NSObject
{
    long long _capacity;
    long long _count;
    struct PXGThumbnailRequest _requests;
}

@property(readonly, nonatomic) struct PXGThumbnailRequest requests; // @synthesize requests=_requests;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)removeAllRequests;
- (void)sortRequests;
- (void)enqueueRequestsWithItemRange:(_NSRange)arg1 textureRequestIDs:(_NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(CGSize)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end

