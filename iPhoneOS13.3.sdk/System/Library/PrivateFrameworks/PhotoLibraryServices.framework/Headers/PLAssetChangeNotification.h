//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification
{
    NSSet *_updatedAssets;
}

+ (id)notificationWithChangedAssets:(id)arg1;
@property(copy, nonatomic) NSSet *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
// - (void).cxx_destruct;
- (id)description;
- (id)userInfo;
- (id)object;
- (id)name;
- (id)_initWithChangedObjects:(id)arg1;
- (id)_init;

@end

