//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface RCContentSizeLayoutConstraint : NSLayoutConstraint
{
    id _autoitem;
    id _preferredContentSizeDidChangeObserver;
    BOOL _isConstantUpdatingConstraint;
    double _textStyleDefaultBodyLeading;
    BOOL _autoUpdatingConstantShrinks;
    double _defaultConstant;
    double _additionalConstant;
    NSString *_textStyle;
    id /* CDUnknownBlockType */ _constantLoadingBlock;
}

+ (double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8;
+ (id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7;
+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(BOOL)arg10;
@property(copy, nonatomic) id /* CDUnknownBlockType */ constantLoadingBlock; // @synthesize constantLoadingBlock=_constantLoadingBlock;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double additionalConstant; // @synthesize additionalConstant=_additionalConstant;
@property(nonatomic) double defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(nonatomic) BOOL autoUpdatingConstantShrinks; // @synthesize autoUpdatingConstantShrinks=_autoUpdatingConstantShrinks;
// - (void).cxx_destruct;
- (void)_reloadPreferredContentSize:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)_forceUpdatePreferredContentSize;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)arg1;
- (void)dealloc;

@end

