//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *_changesArray;
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=_changesArray;
// - (void).cxx_destruct;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithChangesArray:(id)arg1;

@end
