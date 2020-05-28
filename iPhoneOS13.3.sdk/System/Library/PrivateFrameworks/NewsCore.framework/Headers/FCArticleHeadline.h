//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

#import <NewsCore/FCArticleAccessCheckable-Protocol.h>
#import <NewsCore/FCHeadlineStocksFields-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCCoverArt, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCInterestToken, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL, NTPBArticleRecord;
@protocol FCChannelProviding;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable>
{
    BOOL _hasThumbnail;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _isDraft;
    BOOL _isLocalDraft;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _webEmbedsEnabled;
    BOOL _issueOnly;
    BOOL _paid;
    BOOL _bundlePaid;
    BOOL _canBePurchased;
    BOOL _showBundleSoftPaywall;
    BOOL _useTransparentNavigationBar;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    NSUInteger _contentType;
    NSString *_title;
    NSString *_titleCompact;
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    FCIssue *_masterIssue;
    NSUInteger _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSString *_language;
    NSUInteger _role;
    NSUInteger _halfLife;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    long long _bodyTextLength;
    NTPBArticleRecord *_articleRecord;
    FCInterestToken *_articleInterestToken;
    long long _behaviorFlags;
    CGRect _thumbnailFocalFrame;
}

+ (BOOL)_fakeArticlesTimestamp;
+ (BOOL)_simulateTopStoriesBadges;
+ (BOOL)_forceArticlesToBeShownAsSponsored;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(retain, nonatomic) FCInterestToken *articleInterestToken; // @synthesize articleInterestToken=_articleInterestToken;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
- (long long)bodyTextLength;
- (id)linkedIssueIDs;
- (id)linkedArticleIDs;
- (void)setHalfLife:(NSUInteger)arg1;
- (NSUInteger)halfLife;
- (BOOL)useTransparentNavigationBar;
- (BOOL)showBundleSoftPaywall;
- (void)setRole:(NSUInteger)arg1;
- (NSUInteger)role;
- (id)language;
- (BOOL)canBePurchased;
- (id)videoCallToActionURL;
- (id)videoCallToActionTitle;
- (id)coverArt;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid; // @synthesize bundlePaid=_bundlePaid;
@property(readonly, nonatomic, getter=isPaid) BOOL paid; // @synthesize paid=_paid;
- (BOOL)isIssueOnly;
- (BOOL)webEmbedsEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
- (BOOL)isHiddenFromAutoFavorites;
- (BOOL)isPressRelease;
- (BOOL)isHiddenFromFeeds;
- (BOOL)isBoundToContext;
- (BOOL)showMinimalChrome;
- (BOOL)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(NSUInteger)arg1;
- (NSUInteger)storyType;
- (id)masterIssue;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (BOOL)isFeatureCandidate;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, nonatomic) BOOL isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, nonatomic) BOOL isDraft; // @synthesize isDraft=_isDraft;
- (void)setDeleted:(BOOL)arg1;
- (BOOL)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (void)setSponsored:(BOOL)arg1;
- (BOOL)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)publisherCohorts;
- (id)globalCohorts;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)topics;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (void)setAccessoryText:(id)arg1;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetLQ;
- (void)setThumbnailUltraHQ:(id)arg1;
- (id)thumbnailUltraHQ;
- (void)setThumbnailHQ:(id)arg1;
- (id)thumbnailHQ;
- (void)setThumbnailMedium:(id)arg1;
- (id)thumbnailMedium;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setThumbnailLQ:(id)arg1;
- (id)thumbnailLQ;
- (void)setHasThumbnail:(BOOL)arg1;
- (BOOL)hasThumbnail;
- (void)setThumbnailFocalFrame:(CGRect)arg1;
- (CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (long long)backendArticleVersion;
- (long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (id)experimentalTitleMetadata;
- (void)setTitleCompact:(id)arg1;
- (id)titleCompact;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setContentType:(NSUInteger)arg1;
- (NSUInteger)contentType;
- (void)setClusterID:(id)arg1;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)versionIdentifier;
// - (void).cxx_destruct;
- (id)publisherID;
@property(readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property(readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property(readonly, copy, nonatomic) NSString *stocksClusterID;
- (id)stocksFields;
- (id)publisherSpecifiedArticleIDs;
- (id)articleRecirculationConfigJSON;
- (id)backingArticleRecordData;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4;
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9;
- (id)init;

@end
