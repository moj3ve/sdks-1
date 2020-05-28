//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange, NSURL;

@interface EMMessageTransferAction : EMMessageChangeAction
{
    BOOL _copyMessages;
    NSURL *_destinationMailboxURL;
    long long _specialDestinationMailboxType;
    ECMessageFlagChange *_flagChange;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL copyMessages; // @synthesize copyMessages=_copyMessages;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(readonly, nonatomic) long long specialDestinationMailboxType; // @synthesize specialDestinationMailboxType=_specialDestinationMailboxType;
@property(readonly, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4;
- (id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(BOOL)arg3;

@end
