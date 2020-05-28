//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDRequestDelegate-Protocol.h>

@class NSUUID;
@protocol ASDRequestObserver, ASDRequestProxy;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>
{
    id <ASDRequestObserver> _observer;
    NSUUID *_requestID;
    id <ASDRequestProxy> _proxy;
}

+ (id)_sharedBroker;
+ (BOOL)supportsSecureCoding;
+ (void)cancelAllRequestsWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
@property(retain) id <ASDRequestProxy> proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property __weak id <ASDRequestObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)_submitRequestWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_startWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_notifyObserverOfCompletionWithError:(id)arg1;
- (void)_cancelWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_callErrorHandler:(id /* CDUnknownBlockType */)arg1 withError:(id)arg2 orDefaultCode:(NSUInteger)arg3;
- (void)_callErrorHandler:(id /* CDUnknownBlockType */)arg1 withError:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)receiveResponse:(id)arg1;
- (id)init;

@end
