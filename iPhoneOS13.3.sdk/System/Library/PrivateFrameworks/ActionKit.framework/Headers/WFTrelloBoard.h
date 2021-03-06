//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject
{
    BOOL _closed;
    NSString *_itemDescription;
    NSURL *_URL;
}

+ (id)closedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
// - (void).cxx_destruct;

@end

