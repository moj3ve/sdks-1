//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface SBUIPasscodeTextField : UITextField
{
    BOOL _previousResponderRequiresKeyboard;
    BOOL _showsSystemKeyboard;
}

@property(nonatomic) BOOL showsSystemKeyboard; // @synthesize showsSystemKeyboard=_showsSystemKeyboard;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_disableAutomaticAppearance;
- (void)_enableAutomaticAppearance;

@end
