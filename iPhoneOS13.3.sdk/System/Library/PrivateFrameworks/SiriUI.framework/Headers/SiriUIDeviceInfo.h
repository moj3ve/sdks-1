//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriUIDeviceInfo : NSObject
{
    BOOL _deviceZoomed;
    BOOL _largeFormatPhone;
    BOOL _deviceShouldUseFrozenBackdropSnapshot;
    BOOL _deviceShouldFreezeAura;
    BOOL _deviceShouldDeferFlamesView;
    BOOL _deviceSupportsProximitySensor;
    BOOL _deviceShouldSkipGuidePreloading;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL deviceShouldSkipGuidePreloading; // @synthesize deviceShouldSkipGuidePreloading=_deviceShouldSkipGuidePreloading;
@property(readonly, nonatomic) BOOL deviceSupportsProximitySensor; // @synthesize deviceSupportsProximitySensor=_deviceSupportsProximitySensor;
@property(readonly, nonatomic) BOOL deviceShouldDeferFlamesView; // @synthesize deviceShouldDeferFlamesView=_deviceShouldDeferFlamesView;
@property(readonly, nonatomic) BOOL deviceShouldFreezeAura; // @synthesize deviceShouldFreezeAura=_deviceShouldFreezeAura;
@property(readonly, nonatomic) BOOL deviceShouldUseFrozenBackdropSnapshot; // @synthesize deviceShouldUseFrozenBackdropSnapshot=_deviceShouldUseFrozenBackdropSnapshot;
@property(readonly, nonatomic, getter=isLargeFormatPhone) BOOL largeFormatPhone; // @synthesize largeFormatPhone=_largeFormatPhone;
@property(readonly, nonatomic, getter=isDeviceZoomed) BOOL deviceZoomed; // @synthesize deviceZoomed=_deviceZoomed;
- (void)_updateProductTypeDerivedProperties;
- (id)initWithLargeFormatPhone:(BOOL)arg1 gestaltModes:(id)arg2 screenSize:(CGSize)arg3;

@end
