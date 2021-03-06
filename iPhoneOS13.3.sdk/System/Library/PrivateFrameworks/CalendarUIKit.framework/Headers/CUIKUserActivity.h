//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CUIKUserActivity : NSObject
{
    NSUInteger _type;
    NSString *_activityTitle;
    NSString *_activitySubtitle;
    NSSet *_activityKeywords;
    NSUInteger _version;
}

+ (NSUInteger)_typeFromDictionary:(id)arg1;
+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL )arg3;
+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL )arg3;
+ (NSUInteger)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL )arg3;
+ (long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL )arg3;
+ (BOOL)_boolFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL )arg3;
+ (id)activityForActivity:(id)arg1;
+ (id)activityForDictionary:(id)arg1;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(retain, nonatomic) NSSet *activityKeywords; // @synthesize activityKeywords=_activityKeywords;
@property(retain, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)updateActivity:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(NSUInteger)arg1;

@end

