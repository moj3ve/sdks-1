//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class UIView;

@interface PXUIWidgetBarViewTile : NSObject <PXUIViewBasicTile>
{
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;

@end
