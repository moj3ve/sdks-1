//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSPasswordPatternMatch : NSObject
{
    NSUInteger _type;
    NSString *_matchedSubstring;
    double _guessesRequired;
    NSDictionary *_userInfo;
    _NSRange _range;
}

@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, nonatomic) _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSString *matchedSubstring; // @synthesize matchedSubstring=_matchedSubstring;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)compactDescriptionWithMatchedStringColumnWidth:(NSUInteger)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUInteger endIndex;
- (id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(_NSRange)arg2;
- (id)initWithType:(NSUInteger)arg1 matchedSubstring:(id)arg2 range:(_NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5;

@end

