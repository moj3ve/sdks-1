//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest
{
    NSString *_purchaseIdentifier;
}

@property(copy, nonatomic) NSString *purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPurchaseIdentifier:(id)arg1;

@end

