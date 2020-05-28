//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, NSString;
@protocol ACUIIdentityPickerViewControllerDelegate;

@interface ACUIIdentityPickerViewController : PSListController
{
    id <ACUIIdentityPickerViewControllerDelegate> _delegate;
    NSString *_property;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _userInteractiveSwitch;
    BOOL _userInteractiveIdentityList;
    BOOL _allowIdentitySelectionForDisabledSwitch;
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
// - (void).cxx_destruct;
- (void)_updateCell:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_allowIdentitySelection;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct __SecIdentity )_selectedIdentity;
- (BOOL)_isPropertyEnabled;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (void)_setPropertyEnabled:(BOOL)arg1 identity:(struct __SecIdentity )arg2;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (struct __SecIdentity )_identityToAutoselectWithEnabled:(BOOL)arg1;
- (id)_identitySpecifiers;
- (id)_specifiersForIdentities:(id)arg1;
- (void)_finishedFetchingIdentities:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end
