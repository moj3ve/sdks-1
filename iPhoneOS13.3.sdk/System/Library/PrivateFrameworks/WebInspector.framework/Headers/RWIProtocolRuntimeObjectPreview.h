//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject
{
}

@property(nonatomic) int size;
@property(copy, nonatomic) NSArray *entries;
@property(copy, nonatomic) NSArray *properties;
@property(nonatomic) BOOL overflow;
@property(nonatomic) BOOL lossless;
@property(copy, nonatomic) NSString *stringRepresentation;
@property(nonatomic) long long subtype;
@property(nonatomic) long long type;
- (id)initWithType:(long long)arg1 lossless:(BOOL)arg2;

@end
