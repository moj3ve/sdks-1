//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CKAlertUtilitiesProtocol;

@interface CKAlertUtilities : NSObject
{
    id <CKAlertUtilitiesProtocol> _delegate;
}

+ (struct __CFString )_grabCTSIMStatus;
+ (struct __CFDictionary )_copyCTPhoneNumberSetting;
+ (long long)missingAlertTypeToNotify;
@property(nonatomic) __weak id <CKAlertUtilitiesProtocol> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_showNetworkPrefs:(long long)arg1;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_displayMissingInformationAlert:(long long)arg1;
- (void)checkMissingCarrierSetting;

@end
