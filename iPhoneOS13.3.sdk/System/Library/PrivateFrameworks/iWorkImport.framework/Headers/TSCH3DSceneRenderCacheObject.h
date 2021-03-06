//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DSceneRenderCacheObject : NSObject
{
    BOOL mCachingEnabled;
    NSMutableArray *mDynamicResources;
    NSMutableArray *mChildCacheObjects;
}

+ (id)cacheObject;
- (id)childCacheObjectAtIndex:(NSUInteger)arg1;
- (id)resourceAtIndex:(NSUInteger)arg1 created:(BOOL )arg2 ifAbsent:(id /* CDUnknownBlockType */)arg3;
- (id)resourceAtIndex:(NSUInteger)arg1;
- (NSUInteger)resourceCount;
@property(nonatomic) BOOL cachingEnabled;
- (void)p_updateResourceUpdateFlags:(int)arg1;
- (int)p_resourceUpdateFlag;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)flushCache;
- (void)dealloc;
- (id)init;

@end

