//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIView;

@interface NTKCFaceContainerView : UIControl
{
    BOOL _active;
    long long _style;
    UIView *_faceView;
    UIView *_backgroundView;
    CAShapeLayer *_outline;
    UIView *_faceContainer;
    UIView *_highlightView;
    CGSize _faceSize;
}

+ (double)_insetPaddingForStyle:(long long)arg1;
+ (CGSize)faceSizeForSize:(CGSize)arg1 style:(long long)arg2;
+ (CGSize)sizeForFaceSize:(CGSize)arg1 style:(long long)arg2;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *faceContainer; // @synthesize faceContainer=_faceContainer;
@property(retain, nonatomic) CAShapeLayer *outline; // @synthesize outline=_outline;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) CGSize faceSize; // @synthesize faceSize=_faceSize;
// - (void).cxx_destruct;
- (void)_updateOutlineColor;
- (double)_outlineLineWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (CGAffineTransform)_transformForFaceView;
- (id)initWithFaceSize:(CGSize)arg1 style:(long long)arg2;

@end
