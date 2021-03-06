//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SUMediaLibraryAdamIDCache : NSObject
{
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isPopulated;
}

+ (id)sharedCache;
- (void)_populateCache;
- (void)_libraryChangedNotification:(id)arg1;
- (void)populateCache;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)getIntersectionWithSet:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)getContainsAdamID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end

