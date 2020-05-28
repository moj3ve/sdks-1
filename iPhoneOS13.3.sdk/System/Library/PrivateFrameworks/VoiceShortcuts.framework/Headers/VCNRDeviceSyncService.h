//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCShortcutSyncService-Protocol.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService>
{
    NSString *_syncServiceIdentifier;
    NSURL *_directoryURL;
    long long _protocolVersion;
    VCCompanionSyncService *_service;
}

@property(readonly, nonatomic) __weak VCCompanionSyncService *service; // @synthesize service=_service;
@property(readonly, nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(readonly, copy, nonatomic) NSString *syncServiceIdentifier; // @synthesize syncServiceIdentifier=_syncServiceIdentifier;
// - (void).cxx_destruct;
- (void)requestFullResync;
- (void)requestSync;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCompanionSyncService:(id)arg1 device:(id)arg2;

@end
