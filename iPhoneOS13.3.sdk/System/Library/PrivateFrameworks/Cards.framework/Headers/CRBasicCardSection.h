//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCardSection-Protocol.h>

@class NSString;
@protocol SFCardSection;

@interface CRBasicCardSection : NSObject <CRCardSection>
{
    NSString *_cardSectionIdentifier;
    id <SFCardSection> _backingCardSection;
}

+ (id)basicCardSectionWithBackingCardSection:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <SFCardSection> backingCardSection; // @synthesize backingCardSection=_backingCardSection;
@property(readonly, nonatomic) NSString *cardSectionIdentifier; // @synthesize cardSectionIdentifier=_cardSectionIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

