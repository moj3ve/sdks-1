//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DATransaction : NSObject
{
    NSString *_label;
    NSString *_transactionId;
}

@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

