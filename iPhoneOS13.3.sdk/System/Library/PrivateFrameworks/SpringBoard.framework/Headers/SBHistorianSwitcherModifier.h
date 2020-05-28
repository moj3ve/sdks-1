//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding>
{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    id <SBHistorianSwitcherModifierDelegate> _historianDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_rootModifier;
}

+ (BOOL)canLogEvent:(id)arg1;
@property(readonly, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier; // @synthesize rootModifier=_rootModifier;
@property(nonatomic) __weak id <SBHistorianSwitcherModifierDelegate> historianDelegate; // @synthesize historianDelegate=_historianDelegate;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_querySnapshotFromModifier:(id)arg1;
- (void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* CDUnknownBlockType */)arg4 appLayouts:(id)arg5;
- (void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* CDUnknownBlockType */)arg4 appLayouts:(id)arg5;
- (id)_eventSnapshotFromEvent:(id)arg1;
- (id)_actionSnapshotFromAction:(id)arg1;
- (id)_modifierStackSnapshotFromModifier:(id)arg1;
- (id)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithRootModifier:(id)arg1;

@end
