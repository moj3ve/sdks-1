//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EspressoContext : NSObject
{
    shared_ptr_ae8b808b _ctx;
}

@property(readonly) shared_ptr_ae8b808b ctx; // @synthesize ctx=_ctx;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)set_priority:(BOOL)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned int)arg3;
@property(readonly) int platform;
- (id)initWithNetworkContext:(id)arg1;
- (id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2;
- (id)initWithPlatform:(int)arg1;
- (id)initWithContext:(shared_ptr_ae8b808b)arg1;

@end
