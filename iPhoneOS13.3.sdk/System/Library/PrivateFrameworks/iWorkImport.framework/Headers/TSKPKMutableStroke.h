//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKPKStroke.h>

@class PKMutableStroke, PKStroke;

__attribute__((visibility("hidden")))
@interface TSKPKMutableStroke : TSKPKStroke
{
    PKMutableStroke *_yukonMutableStroke;
    PKStroke *_peaceMutableStroke;
}

@property(retain, nonatomic) PKStroke *peaceMutableStroke; // @synthesize peaceMutableStroke=_peaceMutableStroke;
@property(retain, nonatomic) PKMutableStroke *yukonMutableStroke; // @synthesize yukonMutableStroke=_yukonMutableStroke;
// - (void).cxx_destruct;
- (id)internalPencilKitStroke;
- (CGPoint)locationAtIndex:(NSUInteger)arg1;
- (void)setLocation:(CGPoint)arg1 atIndex:(NSUInteger)arg2;
- (void)transformWithTransform:(CGAffineTransform)arg1;
- (id)initWithPKStroke:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;

@end
