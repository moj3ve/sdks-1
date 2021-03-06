//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
{
}

- (id)movieInfo;
- (int)wrapType;
- (BOOL)canFlip;
- (BOOL)allowsConnections;
- (CGRect)alignmentFrame;
- (CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (BOOL)shouldDisplayGuides;
- (id)layoutGeometryFromInfo;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)supportsRotation;
- (id)initWithInfo:(id)arg1;

@end

