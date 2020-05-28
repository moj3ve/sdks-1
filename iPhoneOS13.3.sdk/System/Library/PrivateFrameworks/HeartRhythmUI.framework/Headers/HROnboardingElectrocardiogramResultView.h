//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKSeparatorLineView, HRVideoPlayerView, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HROnboardingElectrocardiogramResultView : UIView
{
    BOOL _hideNumberedTitle;
    BOOL _alwaysExpanded;
    BOOL _shouldHideSeparatorLine;
    BOOL _expanded;
    NSString *_title;
    UILabel *_numberedTitleLabel;
    HRVideoPlayerView *_playerView;
    NSString *_localizationKey;
    NSString *_numberedTitle;
    NSString *_visibleBody;
    UILabel *_visibleBodyLabel;
    UIButton *_learnMoreButton;
    UIView *_expandedView;
    HKSeparatorLineView *_separatorLineView;
    NSLayoutConstraint *_playerViewTopConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

+ (id)inconclusiveResultViewWithDelegate:(id)arg1;
+ (id)highOrLowHeartRateResultView;
+ (id)atrialFibrillationResultView;
+ (id)sinusRhythmResultView;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *playerViewTopConstraint; // @synthesize playerViewTopConstraint=_playerViewTopConstraint;
@property(retain, nonatomic) HKSeparatorLineView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIView *expandedView; // @synthesize expandedView=_expandedView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UILabel *visibleBodyLabel; // @synthesize visibleBodyLabel=_visibleBodyLabel;
@property(copy, nonatomic) NSString *visibleBody; // @synthesize visibleBody=_visibleBody;
@property(copy, nonatomic) NSString *numberedTitle; // @synthesize numberedTitle=_numberedTitle;
@property(copy, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
@property(nonatomic) BOOL shouldHideSeparatorLine; // @synthesize shouldHideSeparatorLine=_shouldHideSeparatorLine;
@property(nonatomic, getter=isAlwaysExpanded) BOOL alwaysExpanded; // @synthesize alwaysExpanded=_alwaysExpanded;
@property(nonatomic, getter=isHidingNumberedTitle) BOOL hideNumberedTitle; // @synthesize hideNumberedTitle=_hideNumberedTitle;
@property(retain, nonatomic) HRVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UILabel *numberedTitleLabel; // @synthesize numberedTitleLabel=_numberedTitleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (double)_learnMoreButtonLastBaselineToBottom;
- (double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
- (double)_visibleBodyFirstBaselineDistance;
- (id)_visibleBodyFont;
- (id)_visibleBodyFontTextStyle;
- (double)_numberedTitleLastBaseLineToVideoTop;
- (double)_numberedTitleTopToFirstBaseline;
- (id)_numberedTitleFont;
- (void)_updateExpandedViewState;
- (void)_updateNumberedTitleViewState;
- (void)_setUpPlayerViewTopConstraint;
- (void)_setUpNumberedTitleLabelConstraints;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)learnMoreButtonTapped:(id)arg1;
- (id)initWithLocalizationKey:(id)arg1 video:(id)arg2 expandedView:(id)arg3;

@end
