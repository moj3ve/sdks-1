//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalytics/OSAReport.h>

#import <OSAnalytics/OSAConcreteReport-Protocol.h>

@class NSMutableArray, NSSet, NSString;

@interface OSAJetsamReport : OSAReport <OSAConcreteReport>
{
    NSString *_largestProcess;
    NSString *_largestActiveApp;
    NSMutableArray *_killedActiveApps;
    NSUInteger _wiredBytes;
    unsigned int _killed_or_suspended_count;
    BOOL _isSuspendedOnlyJetsam;
    struct jetsam_snapshot _snapshot;
    NSString *_event_reason;
    NSUInteger _event_code;
    BOOL _aleFlag;
    NSSet *_visibilityEndowmentState;
}

+ (long long)_daysSince1970;
+ (int)instrumentEventsWithAudioAssertionState:(id)arg1 visibliltyEndowmentState:(id)arg2;
+ (struct jetsam_snapshot )fetchSnapshotWithFlags:(unsigned int)arg1 error:(id )arg2;
// - (void).cxx_destruct;
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isActionable;
- (void)_setDumpedSuspendedJetsamLog;
- (BOOL)alreadyDumpedSuspendedJetsamLogToday;
- (void)_getSnapshotWithFlags:(unsigned int)arg1;
- (void)acquireJetsamData;
- (void)acquireJetsamDataWithFlags:(unsigned int)arg1;
- (id)additionalIPSMetadata;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (id)problemType;
- (void)dealloc;
- (id)initWithIncidentID:(id)arg1 visibliltyEndowmentState:(id)arg2;

@end
