//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _device;
    long long _renderer;
}

+ (void)setCurrentCapabilitiesOverride:(id)arg1;
+ (id)currentCapabilitiesOverride;
+ (id)currentCapabilities;
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
- (CGSize)maximumHardcodedTextureSize;
@property(readonly, nonatomic) CGSize maximumTextureSize;
@property(readonly, nonatomic) BOOL hasLightningPort;
@property(readonly, nonatomic) BOOL isRendererH5OrBelow;
@property(readonly, nonatomic) BOOL isRendererH4OrBelow;
@property(readonly, nonatomic) BOOL isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end
