//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying>
{
    NSMutableArray *_manifestEntrys;
    NSData *_manifestHash;
    NSString *_passTypeIdentifier;
    unsigned int _sequenceCounter;
    NSString *_serialNumber;
    struct {
        unsigned int sequenceCounter:1;
    } _has;
}

+ (Class)manifestEntryType;
@property(retain, nonatomic) NSMutableArray *manifestEntrys; // @synthesize manifestEntrys=_manifestEntrys;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(nonatomic) unsigned int sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
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
- (id)manifestEntryAtIndex:(NSUInteger)arg1;
- (NSUInteger)manifestEntrysCount;
- (void)addManifestEntry:(id)arg1;
- (void)clearManifestEntrys;
@property(nonatomic) BOOL hasSequenceCounter;

@end
