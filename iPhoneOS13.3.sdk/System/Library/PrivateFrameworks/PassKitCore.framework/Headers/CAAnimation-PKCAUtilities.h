//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@interface CAAnimation (PKCAUtilities)
+ (id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3;
+ (id)pkui_smallShakeAnimation;
+ (id)pkui_shakeAnimation;
- (void)pkui_setCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)pkui_completionHandler;
- (void)pkui_setDidStartHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)pkui_didStartHandler;
@end
