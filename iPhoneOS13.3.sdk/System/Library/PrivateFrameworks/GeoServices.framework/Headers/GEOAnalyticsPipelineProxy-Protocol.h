//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOAnalyticsPipelineEvalStatus, GEOUserSessionEntity, NSData, NSObject, NSPredicate, NSString;
@protocol OS_dispatch_queue;

@protocol GEOAnalyticsPipelineProxy <NSObject>
- (GEOAnalyticsPipelineEvalStatus *)getEvalStatus;
- (void)showEvalDataWithPredicate:(NSPredicate *)arg1 visitorBlock:(BOOL (^)(GEOLogMessage *))arg2 summaryBlock:(void (^)(NSUInteger, NSUInteger))arg3;
- (void)initiateUploadOfType:(int)arg1;
- (void)flushEvalData;
- (void)setEvalMode:(BOOL)arg1;
- (void)reportMapKitCountType:(int)arg1 appId:(NSString *)arg2 completion:(void (^)(void))arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(NSData *)arg3 completion:(void (^)(void))arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)setShortSessionValues:(GEOUserSessionEntity *)arg1 withCompletion:(void (^)(void))arg2;
- (void)shortSessionValuesWithCompletion:(void (^)(struct GEOSessionID, NSUInteger, double))arg1;
@end

