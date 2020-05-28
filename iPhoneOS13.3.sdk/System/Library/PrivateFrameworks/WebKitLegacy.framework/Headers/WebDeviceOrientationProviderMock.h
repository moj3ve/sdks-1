//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebDeviceOrientationProvider-Protocol.h>
#import <WebKitLegacy/WebDeviceOrientationProviderMock-Protocol.h>

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProviderMock, WebDeviceOrientationProvider>
{
    WebDeviceOrientationProviderMockInternal *m_internal;
}

+ (id)shared;
- (void)setController:(struct DeviceOrientationController )arg1;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setOrientation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
