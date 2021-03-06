//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAvatarView, NSAttributedString, NSString, UIColor, UIImage, UIImageView, UILabel;

@interface PKPaymentTransactionView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_rewardsAmountLabel;
    UILabel *_transactionValueLabel;
    UIImageView *_primaryImageView;
    UIImageView *_disclosureView;
    BOOL _isTemplateLayout;
    BOOL _hideRewardsBackground;
    BOOL _showsAvatarView;
    BOOL _showsDisclosureView;
    BOOL _strokeImage;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    UIImage *_primaryImage;
    CNAvatarView *_avatarView;
}

+ (id)defaultTertiaryLabelFont;
@property(readonly, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) BOOL strokeImage; // @synthesize strokeImage=_strokeImage;
@property(retain, nonatomic) UIImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(nonatomic) BOOL showsDisclosureView; // @synthesize showsDisclosureView=_showsDisclosureView;
@property(nonatomic) BOOL showsAvatarView; // @synthesize showsAvatarView=_showsAvatarView;
@property(nonatomic) BOOL hideRewardsBackground; // @synthesize hideRewardsBackground=_hideRewardsBackground;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
// - (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (double)_defaultLayoutHeight;
- (CGSize)_layoutWithBounds:(CGRect)arg1;
- (id)_disclosureView;
- (BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2;
- (void)_updateAvatarView;
- (void)_updateImageViewDynamicColors;
- (void)setPrimaryImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSAttributedString *transactionValueAttributedText; // @dynamic transactionValueAttributedText;
@property(retain, nonatomic) NSString *rewardsValueString;
- (id)defaultSecondaryColor;
- (id)defaultPrimaryColor;
- (BOOL)_shouldUseStackedLayout;
- (void)resetFonts;
- (void)createSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

