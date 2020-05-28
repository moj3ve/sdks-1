//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDRecordPCSData, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation
{
    BOOL _serverRecordHasNoProtectionData;
    NSString *_serverRecordType;
}

@property(retain, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;
@property(nonatomic) BOOL serverRecordHasNoProtectionData; // @synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData;
// - (void).cxx_destruct;
- (BOOL)_savePCSDataToCache;
- (BOOL)_decryptPCS;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_createAdditionalPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (BOOL)hasAllPCSData;
- (BOOL)needsChainPCSCreation;
- (id)itemTypeName;
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property(readonly, nonatomic) CKRecordID *recordID;

@end
