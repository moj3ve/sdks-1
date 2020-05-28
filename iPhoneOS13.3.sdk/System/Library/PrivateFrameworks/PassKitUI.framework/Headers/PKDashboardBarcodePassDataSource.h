//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardPassDataSource-Protocol.h>
#import <PassKitUI/PKSecureElementObserver-Protocol.h>

@class PKGroup, PKPassGroupView;
@protocol PKDashboardDataSourceDelegate;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource>
{
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id <PKDashboardDataSourceDelegate> _delegate;
}

// - (void).cxx_destruct;
- (id)footerTextForSection:(NSUInteger)arg1;
- (id)titleForSection:(NSUInteger)arg1;
- (NSUInteger)numberOfSections;
- (NSUInteger)numberOfItemsInSection:(NSUInteger)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)setDataSourceDelegate:(id)arg1;
- (void)reloadData;
- (void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2;
- (void)groupViewDidUpdatePassView:(id)arg1;
- (void)sendContentIsLoadedIfNecessary;
- (void)dealloc;
- (id)initWithGroupView:(id)arg1 context:(id)arg2;

@end
