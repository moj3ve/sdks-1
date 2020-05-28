//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSTimer, WBSFormMetadata;

@interface WBSMultiRoundAutoFillManager : NSObject
{
    NSUInteger _autoFillAttemptTrigger;
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;
    BOOL _userDidInteractWithForm;
    NSUInteger _numberOfFollowUpAutoFillAttempts;
    NSTimer *_timerForFollowUpAutoFill;
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;
    NSString *_addressSetLabelUsedDuringFirstAutoFillPass;
    NSSet *_addressBookPropertiesThatCanBeFilled;
}

@property(copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled; // @synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled;
@property(copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass; // @synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass;
// - (void).cxx_destruct;
- (BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1;
- (NSUInteger)currentAutoFillAttemptTrigger;
- (BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(NSUInteger)arg2;
- (id)init;
- (void)dealloc;
- (void)didEditFormText;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(id /* CDUnknownBlockType */)arg2;

@end
