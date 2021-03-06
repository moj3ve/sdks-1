//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;
    id _syncHelperReadyNotificationRef;
}

@property(retain) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
// - (void).cxx_destruct;
- (id)permDBLocation:(unsigned char )arg1;
- (id)tempDBLocation:(unsigned char )arg1;
- (void)pokeSyncHelperToInitDB;
- (void)moveCallsFromTempDatabase;
- (BOOL)validateTempDatabase;
- (BOOL)validatePermDatabase;
- (void)createTemporary;
- (void)createPermanent;
- (void)createHelperConnection;
- (void)handlePermanentCreated;
- (BOOL)willMoveCallsFromTempDatabase;

@end

