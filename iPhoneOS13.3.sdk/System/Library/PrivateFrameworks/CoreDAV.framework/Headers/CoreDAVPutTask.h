//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask
{
    NSString *_nextETag;
}

@property(retain, nonatomic) NSString *nextETag; // @synthesize nextETag=_nextETag;
// - (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)description;

@end
