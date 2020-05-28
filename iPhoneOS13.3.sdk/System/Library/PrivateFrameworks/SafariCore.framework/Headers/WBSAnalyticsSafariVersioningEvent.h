//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _variant;
    NSString *_version;
    struct {
        unsigned int timestamp:1;
        unsigned int variant:1;
    } _has;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsVariant:(id)arg1;
- (id)variantAsString:(int)arg1;
@property(nonatomic) BOOL hasVariant;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasTimestamp;

@end
