//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView, _TVStackBackdropMaskingView, _TVStackBackdropView;

__attribute__((visibility("hidden")))
@interface _TVStackWrappingView : UIView
{
    UIImageView *_backgroundImageView;
    _TVStackBackdropView *_backdropView;
    _TVStackBackdropMaskingView *_maskedBackdropView;
    BOOL _shouldAdjustForTabBarSafeAreaInsets;
    BOOL _usesBackgroundImage;
    BOOL _usesBackdropImage;
    UICollectionView *_stackView;
    NSArray *_headerSupplementaryViews;
    UIImage *_backgroundImage;
    UIImage *_backdropImage;
    long long _backdropBlurEffectStyle;
    double _backdropInitialPeek;
    double _backdropPeekGradient;
    double _backdropMaskFactor;
    NSArray *_supplementaryCellLayoutAttributes;
}

@property(readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property(nonatomic) double backdropMaskFactor; // @synthesize backdropMaskFactor=_backdropMaskFactor;
@property(nonatomic) double backdropPeekGradient; // @synthesize backdropPeekGradient=_backdropPeekGradient;
@property(nonatomic) double backdropInitialPeek; // @synthesize backdropInitialPeek=_backdropInitialPeek;
@property(nonatomic) long long backdropBlurEffectStyle; // @synthesize backdropBlurEffectStyle=_backdropBlurEffectStyle;
@property(nonatomic) BOOL usesBackdropImage; // @synthesize usesBackdropImage=_usesBackdropImage;
@property(retain, nonatomic) UIImage *backdropImage; // @synthesize backdropImage=_backdropImage;
@property(nonatomic) BOOL usesBackgroundImage; // @synthesize usesBackgroundImage=_usesBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) BOOL shouldAdjustForTabBarSafeAreaInsets; // @synthesize shouldAdjustForTabBarSafeAreaInsets=_shouldAdjustForTabBarSafeAreaInsets;
@property(copy, nonatomic) NSArray *headerSupplementaryViews; // @synthesize headerSupplementaryViews=_headerSupplementaryViews;
@property(retain, nonatomic) UICollectionView *stackView; // @synthesize stackView=_stackView;
// - (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(UIEdgeInsets)arg1 sectionIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
