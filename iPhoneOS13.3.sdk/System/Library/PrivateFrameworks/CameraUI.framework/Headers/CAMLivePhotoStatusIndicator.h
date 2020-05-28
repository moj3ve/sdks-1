//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@class CAMLivePhotoAnimationCache;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator
{
    long long _livePhotoMode;
    CAMLivePhotoAnimationCache *__animationCache;
}

@property(retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache; // @synthesize _animationCache=__animationCache;
@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode=_livePhotoMode;
// - (void).cxx_destruct;
- (BOOL)canAnimate;
- (BOOL)shouldUseOutline;
- (BOOL)shouldUseActiveTintForCurrentState;
- (CGSize)intrinsicContentSize;
- (id)imageAnimationFramesForCurrentState;
- (id)imageNameForCurrentState;
- (void)preloadAnimationFrames;
- (id)initWithFrame:(CGRect)arg1;

@end
