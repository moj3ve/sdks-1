//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSClamshellStateMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withClamshellState:(BOOL)arg2;
- (void)_didReceiveClamshellStateChangeNotification:(BOOL)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (BOOL)isClamshellClosed;
- (id)init;

@end
