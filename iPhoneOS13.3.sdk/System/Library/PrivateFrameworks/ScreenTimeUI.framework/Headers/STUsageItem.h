//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSNumber, NSString, UIColor, UIImage;

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_budgetItemIdentifier;
    NSString *_categoryIdentifier;
    NSUInteger _itemType;
    UIColor *_color;
    NSUInteger _timePeriod;
    NSDate *_startDate;
    NSNumber *_totalUsage;
    NSNumber *_maxUsage;
    NSNumber *_minUsage;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *minUsage; // @synthesize minUsage=_minUsage;
@property(copy, nonatomic) NSNumber *maxUsage; // @synthesize maxUsage=_maxUsage;
@property(copy, nonatomic) NSNumber *totalUsage; // @synthesize totalUsage=_totalUsage;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) NSUInteger timePeriod; // @synthesize timePeriod=_timePeriod;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) NSUInteger itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy, nonatomic) NSString *budgetItemIdentifier; // @synthesize budgetItemIdentifier=_budgetItemIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *displayName;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

