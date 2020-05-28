//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ISOperation, NSError, SSOperationProgress;

@protocol ISOperationDelegate <NSObject>

@optional
- (void)operationWillStart:(ISOperation *)arg1;
- (void)operationFinished:(ISOperation *)arg1;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
@end
