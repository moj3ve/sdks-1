//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDNanoSyncPersistentUserInfoCopying-Protocol.h>
#import <HealthDaemon/HDSyncAnchorMap-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncStatus : PBCodable <HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    NSMutableArray *_anchors;
    int _statusCode;
    struct {
        unsigned int statusCode:1;
    } _has;
}

+ (Class)anchorsType;
+ (id)statusWithStatusCode:(int)arg1;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *anchors; // @synthesize anchors=_anchors;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)anchorsAtIndex:(NSUInteger)arg1;
- (NSUInteger)anchorsCount;
- (void)addAnchors:(id)arg1;
- (void)clearAnchors;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (id)nanoSyncDescription;
- (NSUInteger)anchorCount;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* CDUnknownBlockType */)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (id)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(id)arg1;

@end
