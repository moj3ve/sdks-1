//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMDXPCEventStreamHandler, NSDictionary, NSString;

@protocol IMDXPCEventStreamHandlerDelegate <NSObject>
- (void)eventStreamHandler:(IMDXPCEventStreamHandler *)arg1 didReceiveEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end
