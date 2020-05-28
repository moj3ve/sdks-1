//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMCameraSource, HMCameraView, HUCameraBadgeView, HUCameraErrorContent, HUCameraErrorView, HURemoteContextHostingView, NADecayingTimer, NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UIImageView;

@interface HUCameraView : UIView
{
    BOOL _showActivityIndicator;
    NSUInteger _maskedCameraCorners;
    NSLayoutYAxisAnchor *_badgeBottomAnchor;
    HUCameraErrorContent *_errorContent;
    UIImageView *_demoSnapshotImageView;
    HURemoteContextHostingView *_cameraContainerView;
    HUCameraBadgeView *_badgeView;
    UIView *_cameraOverlayView;
    UIView *_cameraDimmingView;
    UIView *_backgroundView;
    HUCameraErrorView *_errorView;
    UIActivityIndicatorView *_activityIndicatorView;
    NADecayingTimer *_snapshotAgeUpdateTimer;
    NSArray *_staticConstraints;
    NSLayoutConstraint *_cameraAspectRatioConstraint;
    NSLayoutConstraint *_badgeBottomConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
    UIOffset _badgeOffset;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint; // @synthesize badgeTrailingConstraint=_badgeTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint; // @synthesize badgeBottomConstraint=_badgeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint; // @synthesize cameraAspectRatioConstraint=_cameraAspectRatioConstraint;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer; // @synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) HUCameraErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *cameraDimmingView; // @synthesize cameraDimmingView=_cameraDimmingView;
@property(readonly, nonatomic) UIView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(readonly, nonatomic) HUCameraBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) HURemoteContextHostingView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) UIImageView *demoSnapshotImageView; // @synthesize demoSnapshotImageView=_demoSnapshotImageView;
@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) HUCameraErrorContent *errorContent; // @synthesize errorContent=_errorContent;
@property(retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor; // @synthesize badgeBottomAnchor=_badgeBottomAnchor;
@property(nonatomic) UIOffset badgeOffset; // @synthesize badgeOffset=_badgeOffset;
@property(nonatomic) NSUInteger maskedCameraCorners; // @synthesize maskedCameraCorners=_maskedCameraCorners;
// - (void).cxx_destruct;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(BOOL)arg1;
- (void)_updateBadgeView;
- (void)_updateErrorAndActivityIndicatorVisibilityAnimated:(BOOL)arg1;
- (void)_updateMaskedCameraCorners;
@property(readonly, nonatomic) UIView *cameraOverlaySnapshot;
- (id)cameraContentSnapshot;
@property(readonly, nonatomic) CGRect derivedCameraContentFrame;
@property(readonly, nonatomic) CGRect cameraContentFrame;
@property(nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
- (void)setShowActivityIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setErrorContent:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) HMCameraSource *cameraSource;
- (void)setCameraSource:(id)arg1 animated:(BOOL)arg2;
- (void)setCameraSource:(id)arg1 withDemoSnapshotURL:(id)arg2 animated:(BOOL)arg3;
- (void)setCameraContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(readonly, nonatomic) HMCameraView *cameraView;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setContentMode:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)dealloc;
- (id)initWithBadgeView:(id)arg1;
- (id)init;

@end
