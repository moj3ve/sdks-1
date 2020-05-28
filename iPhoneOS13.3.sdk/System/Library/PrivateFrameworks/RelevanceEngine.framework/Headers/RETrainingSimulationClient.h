//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETrainingSimulationClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, RETrainingSimulationClientDelegate;

@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSString *_targetProcessName;
    id <RETrainingSimulationClientDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <RETrainingSimulationClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *targetProcessName; // @synthesize targetProcessName=_targetProcessName;
// - (void).cxx_destruct;
- (void)availableRelevanceEnginesDidChange;
- (id)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2;
- (id)diagnosticLogFileForRelevanceEngine:(id)arg1;
- (id)fetchAllElementsInRelevanceEngine:(id)arg1;
- (id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1;
- (BOOL)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2;
- (id)availableRelevanceEngines;
- (BOOL)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)initWithTargetProcessName:(id)arg1 delegate:(id)arg2;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;

@end
