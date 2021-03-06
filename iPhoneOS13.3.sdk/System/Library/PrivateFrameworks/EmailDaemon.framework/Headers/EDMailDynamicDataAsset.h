//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDAssetDownloadScheduler, NSSet;

@interface EDMailDynamicDataAsset : NSObject <EFLoggable>
{
    BOOL _shouldIgnoreUserAccountDomains;
    NSSet *_ignoredDomains;
    EDAssetDownloadScheduler *_scheduler;
}

+ (id)_ignoredDomainsFallback;
+ (id)log;
@property(retain, nonatomic) EDAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain) NSSet *ignoredDomains; // @synthesize ignoredDomains=_ignoredDomains;
@property BOOL shouldIgnoreUserAccountDomains; // @synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains;
// - (void).cxx_destruct;
- (void)_updateStateFromAsset:(id)arg1;
- (void)_queryForAssetWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_downloadAssetCatalogWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (BOOL)shouldIgnoreDomain:(id)arg1;
- (id)init;

@end

