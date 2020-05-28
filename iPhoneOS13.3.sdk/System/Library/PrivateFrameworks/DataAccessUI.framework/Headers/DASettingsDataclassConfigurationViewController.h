//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController
{
    DAAccount *_daAccount;
    BOOL _haveRegisteredForAccountsChanged;
}

@property(retain, nonatomic) DAAccount *daAccount; // @synthesize daAccount=_daAccount;
// - (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (BOOL)shouldVerifyBeforeAccountSave;
- (Class)accountInfoControllerClass;
- (id)otherSpecifiers;
- (id)specifiers;
- (void)_accountsChanged:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_listenForAccountsChangedNotifications;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (void)dealloc;

@end
