//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueFloorInfo-Protocol.h>

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo>
{
    short _ordinal;
    NSUInteger _levelID;
}

+ (BOOL)isIntegerValidOrdinal:(long long)arg1;
+ (id)floorInfosFromLevels:(id)arg1;
@property(readonly, nonatomic) NSUInteger levelID; // @synthesize levelID=_levelID;
@property(readonly, nonatomic) short ordinal; // @synthesize ordinal=_ordinal;
- (id)initWithLevel:(id)arg1;
- (id)initWithOrdinal:(short)arg1 levelID:(NSUInteger)arg2;
- (id)init;

@end
