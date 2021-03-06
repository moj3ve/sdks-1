//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isVoiceTrigger;
    BOOL _isDucking;
    BOOL _isTwoShot;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    NSUInteger _speechEndHostTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger speechEndHostTime; // @synthesize speechEndHostTime=_speechEndHostTime;
@property(readonly, nonatomic) BOOL isTwoShot; // @synthesize isTwoShot=_isTwoShot;
@property(readonly, nonatomic) BOOL isDucking; // @synthesize isDucking=_isDucking;
@property(readonly, nonatomic) BOOL isVoiceTrigger; // @synthesize isVoiceTrigger=_isVoiceTrigger;
@property(readonly, copy, nonatomic) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(BOOL)arg5 isDucking:(BOOL)arg6 isTwoShot:(BOOL)arg7 speechEndHostTime:(NSUInteger)arg8;
- (id)mutatedCopyWithMutator:(id /* CDUnknownBlockType */)arg1;

@end

