//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, NSURL;
@protocol BCSActionDelegate;

@protocol BCSAction <NSObject>
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened;
@property(nonatomic) __weak id <BCSActionDelegate> delegate;
- (void)showActionPicker;
- (void)performAction;
- (void)performDefaultAction;

@optional
- (void)performDefaultActionWithCompletionHandler:(void (^)(NSError *))arg1;
@end
