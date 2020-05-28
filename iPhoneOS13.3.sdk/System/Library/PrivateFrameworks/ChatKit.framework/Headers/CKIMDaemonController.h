//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface CKIMDaemonController : IMDaemonController
{
    NSArray *_listeners;
}

+ (void)beginSimulatingDaemon;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *listeners; // @synthesize listeners=_listeners;
// - (void).cxx_destruct;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4;

@end
