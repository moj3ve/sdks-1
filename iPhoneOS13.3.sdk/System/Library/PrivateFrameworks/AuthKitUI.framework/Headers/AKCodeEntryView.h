//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSArray, NSMutableString, NSString, UILabel, UITapGestureRecognizer;

@interface AKCodeEntryView : UIView <UIKeyInput>
{
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _passcodeFieldDisabled;
    NSArray *_generatorFields;
    NSArray *_activeConstraints;
}

+ (id)generatorFieldFont;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *generatorFields; // @synthesize generatorFields=_generatorFields;
// - (void).cxx_destruct;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
- (void)setPasscodeFieldDisabled:(BOOL)arg1;
- (void)passcodeFieldTapped:(id)arg1;
- (void)deleteBackward;
@property(readonly, nonatomic) BOOL hasText;
- (void)insertText:(id)arg1;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
@property(copy, nonatomic) NSString *stringValue;
- (void)emitCodeEnteredNotification;
@property(readonly, nonatomic) UILabel *firstGeneratorField;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateConstraints;
- (void)_syncStringValueToLabels;
- (void)_updateFonts:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

