//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INInteraction, NSArray, NSSet, NSString;
@protocol SFCardSection;

@protocol CRCardSection <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *cardSectionIdentifier;

@optional
@property(readonly, nonatomic) BOOL hasNextCard;
@property(readonly, nonatomic) NSArray *actionCommands;
@property(readonly, nonatomic) id <SFCardSection> backingCardSection;
- (NSSet *)parametersForInteraction:(INInteraction *)arg1;
@end

