//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding>
{
    SPAdvertisement *_advertisement;
    SPEstimatedLocation *_location;
    long long _observationValue;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long observationValue; // @synthesize observationValue=_observationValue;
@property(copy, nonatomic) SPEstimatedLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) SPAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 location:(id)arg2;

@end
