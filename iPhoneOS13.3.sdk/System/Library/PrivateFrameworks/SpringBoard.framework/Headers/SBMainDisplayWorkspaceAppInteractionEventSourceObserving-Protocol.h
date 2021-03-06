//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, NSString, SBLayoutElement, SBMainDisplayLayoutState, SBMainDisplayWorkspaceAppInteractionEventSource;

@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>

@optional
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 keyboardFocusChangedToApplication:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userTouchedApplication:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 applicationsBecameVisible:(NSSet *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 applicationsBecameHidden:(NSSet *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userQuitApplicationInSwitcher:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userDeletedApplications:(NSSet *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userRemovedSuggestions:(NSSet *)arg2;
@end

