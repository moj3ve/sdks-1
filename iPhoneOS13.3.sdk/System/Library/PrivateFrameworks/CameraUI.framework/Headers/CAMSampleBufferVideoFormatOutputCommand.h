//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand
{
    long long __videoFormat;
}

@property(readonly, nonatomic) long long _videoFormat; // @synthesize _videoFormat=__videoFormat;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleBufferVideoFormat:(long long)arg1;

@end
