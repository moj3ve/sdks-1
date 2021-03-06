//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamics : NSObject
{
    BOOL _shouldRoundCalculations;
    CGSize _tolerance;
    CGPoint _decelerationTarget;
    CGPoint _initialContentOffset;
    CGVector _initialVelocity;
    CGPoint _contentOrigin;
    CGSize _viewSize;
    CGRect _contentFrame;
}

@property(nonatomic) CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) CGPoint decelerationTarget; // @synthesize decelerationTarget=_decelerationTarget;
@property(readonly, nonatomic) CGSize tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) BOOL shouldRoundCalculations; // @synthesize shouldRoundCalculations=_shouldRoundCalculations;
- (void)recalculateForDecelerationTarget:(CGPoint)arg1;
- (void)calculateToReachDecelerationTarget;
- (void)calculateDecelerationTarget;
- (BOOL)isRubberBandingAfterDuration:(double)arg1;
- (CGPoint)positionAfterDuration:(double)arg1;
- (CGVector)velocityAfterDuration:(double)arg1;
- (double)speedAfterDuration:(double)arg1;
@property(readonly, nonatomic) double durationUntilStop;
- (id)initWithInitialContentOffset:(CGPoint)arg1 velocity:(CGVector)arg2 contentFrame:(CGRect)arg3 viewSize:(CGSize)arg4 screenScale:(double)arg5;
- (id)init;

@end

