//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMProbe.h>

#import <MetricMeasurement/OSActivityStreamDelegate-Protocol.h>

@class OSActivityStream;

@interface MXMOSLogProbe : MXMProbe <OSActivityStreamDelegate>
{
    OSActivityStream *_activityStream;
}

+ (id)probeHostOSLog;
+ (id)connectedDevices;
+ (id)hostDevice;
// - (void).cxx_destruct;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStop:(id)arg1;
- (void)streamDidStart:(id)arg1;
- (BOOL)activityStream:(id)arg1 results:(id)arg2;
- (void)_stopUpdates;
- (void)_beginUpdates;
- (id)initWithTargetDevice:(id)arg1;

@end
