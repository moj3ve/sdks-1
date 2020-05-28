//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, FCForYouConfig, NSArray, NSDictionary;
@protocol FCContentContext, FCCoreConfiguration, FCFeedPersonalizing, FCForYouBridgedConfigurationParser;

@interface FCForYouConfigHeadlinesOperation : FCOperation
{
    BOOL _shouldFetchEditorialSectionTags;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    id <FCFeedPersonalizing> _personalizer;
    id <FCForYouBridgedConfigurationParser> _bridgedConfigurationParser;
    long long _fields;
    NSArray *_additionalArticleListIDs;
    NSArray *_additionalTagIDs;
    FCCachePolicy *_forYouConfigCachePolicy;
    FCCachePolicy *_articleListCachePolicy;
    FCCachePolicy *_editorialSectionTagCachePolicy;
    id /* CDUnknownBlockType */ _headlinesCompletionHandler;
    id /* CDUnknownBlockType */ _headlinesAndTagsCompletionHandler;
    FCForYouConfig *_resultForYouConfig;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultHeadlinesByArticleListID;
    NSDictionary *_resultHeadlinesByArticleID;
    NSDictionary *_resultTagsByID;
}

@property(retain, nonatomic) NSDictionary *resultTagsByID; // @synthesize resultTagsByID=_resultTagsByID;
@property(retain, nonatomic) NSDictionary *resultHeadlinesByArticleID; // @synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID;
@property(retain, nonatomic) NSDictionary *resultHeadlinesByArticleListID; // @synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID;
@property(retain, nonatomic) NSDictionary *resultArticleListsByID; // @synthesize resultArticleListsByID=_resultArticleListsByID;
@property(retain, nonatomic) FCForYouConfig *resultForYouConfig; // @synthesize resultForYouConfig=_resultForYouConfig;
@property(copy, nonatomic) id /* CDUnknownBlockType */ headlinesAndTagsCompletionHandler; // @synthesize headlinesAndTagsCompletionHandler=_headlinesAndTagsCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ headlinesCompletionHandler; // @synthesize headlinesCompletionHandler=_headlinesCompletionHandler;
@property(retain, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy; // @synthesize editorialSectionTagCachePolicy=_editorialSectionTagCachePolicy;
@property(retain, nonatomic) FCCachePolicy *articleListCachePolicy; // @synthesize articleListCachePolicy=_articleListCachePolicy;
@property(retain, nonatomic) FCCachePolicy *forYouConfigCachePolicy; // @synthesize forYouConfigCachePolicy=_forYouConfigCachePolicy;
@property(nonatomic) BOOL shouldFetchEditorialSectionTags; // @synthesize shouldFetchEditorialSectionTags=_shouldFetchEditorialSectionTags;
@property(copy, nonatomic) NSArray *additionalTagIDs; // @synthesize additionalTagIDs=_additionalTagIDs;
@property(copy, nonatomic) NSArray *additionalArticleListIDs; // @synthesize additionalArticleListIDs=_additionalArticleListIDs;
@property(nonatomic) long long fields; // @synthesize fields=_fields;
@property(retain, nonatomic) id <FCForYouBridgedConfigurationParser> bridgedConfigurationParser; // @synthesize bridgedConfigurationParser=_bridgedConfigurationParser;
@property(retain, nonatomic) id <FCFeedPersonalizing> personalizer; // @synthesize personalizer=_personalizer;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (id)_edgeCacheHint;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end
