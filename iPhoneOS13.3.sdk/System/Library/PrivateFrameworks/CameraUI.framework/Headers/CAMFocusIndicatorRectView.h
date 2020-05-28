//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView
{
    long long _style;
    UIImageView *__imageView;
}

@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
@property(nonatomic, getter=isPulsing) BOOL pulsing;
@property(nonatomic, getter=isInactive) BOOL inactive;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (id)initWithStyle:(long long)arg1;

@end
