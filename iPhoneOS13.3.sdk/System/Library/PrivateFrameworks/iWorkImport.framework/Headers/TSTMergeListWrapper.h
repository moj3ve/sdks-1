//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTMergeListWrapper : NSObject
{
    vector_e87daf7b _mergeList;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)regionForList;
- (void)enumerateRangesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addRange:(struct TSUCellRect)arg1;
@property(readonly) BOOL isEmpty;
@property(readonly) NSUInteger count;
- (id)initWithMergeList:(const vector_e87daf7b )arg1;

@end
