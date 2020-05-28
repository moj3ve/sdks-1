//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CKDOperationMetrics;

__attribute__((visibility("hidden")))
@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>
{
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(retain, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
// - (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2;

@end
