//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>


@protocol NSSecureCoding;

@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding>
{
    BOOL __shadowOperationForRemoteExecution;
    id <NSSecureCoding> _response;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <NSSecureCoding> response; // @synthesize response=_response;
@property(nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) BOOL _shadowOperationForRemoteExecution; // @synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_execute;

@end
