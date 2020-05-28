//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature
{
    NSString *_name;
    NSUInteger _hash;
    REFeatureSet *_features;
    REFeatureTransformer *_transformer;
}

@property(readonly, nonatomic) REFeatureTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) REFeatureSet *features; // @synthesize features=_features;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_computeHash;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_dependentFeatures;
- (id)_rootFeatures;
- (long long)_bitCount;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)featureType;
- (id)name;
- (id)initWithTransformer:(id)arg1 features:(id)arg2;

@end
