//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class SKStorePageRequest, SKStoreProductViewController;

@protocol SKStoreProductViewControllerDelegatePrivate <SKStoreProductViewControllerDelegate>

@optional
- (void)productViewController:(SKStoreProductViewController *)arg1 presentProductWithRequest:(SKStorePageRequest *)arg2 animated:(BOOL)arg3;
- (void)productViewController:(SKStoreProductViewController *)arg1 didFinishWithResult:(long long)arg2;
@end
