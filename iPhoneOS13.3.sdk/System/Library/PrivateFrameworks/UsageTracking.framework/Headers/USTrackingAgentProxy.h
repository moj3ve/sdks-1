//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface USTrackingAgentProxy : NSObject
{
}

+ (void)synchronousProxyFromConnection:(id)arg1 withRetryCount:(NSUInteger)arg2 proxyHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)proxyFromConnection:(id)arg1 withRetryCount:(NSUInteger)arg2 proxyHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)newInterface;
+ (id)newConnection;

@end
