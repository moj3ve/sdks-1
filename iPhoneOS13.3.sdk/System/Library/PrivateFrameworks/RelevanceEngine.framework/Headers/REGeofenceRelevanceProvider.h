//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider : RERelevanceProvider
{
    CLCircularRegion *_region;
    NSString *_bundleIdentifier;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)_hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithRegion:(id)arg1;
- (id)init;

@end
