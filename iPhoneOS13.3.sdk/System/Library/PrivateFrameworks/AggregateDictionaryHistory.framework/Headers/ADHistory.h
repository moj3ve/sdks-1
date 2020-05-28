//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADHistory : NSObject
{
    struct Database _database;
    NSString *_path;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id /* CDUnknownBlockType */)arg4;
- (void)dealloc;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;

@end
