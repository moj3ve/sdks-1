//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMList, REMSharee;

@interface REMListShareeContext : NSObject
{
    REMSharee *_sharedOwner;
    REMList *_list;
}

@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
@property(readonly, nonatomic) REMSharee *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
// - (void).cxx_destruct;
- (id)shareesExcludingOwner;
@property(readonly, nonatomic) NSArray *sharees;
- (id)initWithList:(id)arg1;

@end
