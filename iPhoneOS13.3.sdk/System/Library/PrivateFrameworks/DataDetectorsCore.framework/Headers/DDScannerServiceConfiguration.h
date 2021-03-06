//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject
{
    int _scannerType;
    long long _resultsOptions;
    long long _scannerOptions;
    double _timeout;
    BOOL _noObjC;
    BOOL _spotlightSuggestionsEnabled;
    NSString *_recyclingIdentifier;
    long long _jobIdentifierPtr;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) BOOL noObjC; // @synthesize noObjC=_noObjC;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long resultsOptions; // @synthesize resultsOptions=_resultsOptions;
@property(nonatomic) long long scannerOptions; // @synthesize scannerOptions=_scannerOptions;
// - (void).cxx_destruct;
- (int)scannerType;
@property(nonatomic) BOOL spotlightSuggestionsEnabled;
- (id)recyclingIdentifier;
- (id)description;
- (void)updateRecyclingIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)supportsSecureCoding;
- (id)copy;
- (id)initEmpty;
- (id)initWithScannerType:(int)arg1 passiveIntent:(BOOL)arg2;
- (id)init;

@end

