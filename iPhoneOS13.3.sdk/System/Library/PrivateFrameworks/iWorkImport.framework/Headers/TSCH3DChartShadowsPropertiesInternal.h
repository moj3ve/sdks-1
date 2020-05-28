//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DCamera, TSCH3DDataBufferResource;
@protocol TSCH3DShadowsRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartShadowsPropertiesInternal : NSObject
{
    BOOL mEnabled;
    TSCH3DCamera *mCamera;
    TSCH3DDataBufferResource *mQuad;
    TSCH3DDataBufferResource *mTexcoords;
    TSCH3DDataBufferResource *mFadecoords;
    NSObject<TSCH3DShadowsRenderer> *mRenderer;
    box_a3bd9649 mShadowPlanePadding;
}

@property(readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer; // @synthesize renderer=mRenderer;
@property(retain, nonatomic) TSCH3DDataBufferResource *fadecoords; // @synthesize fadecoords=mFadecoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *texcoords; // @synthesize texcoords=mTexcoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *quad; // @synthesize quad=mQuad;
@property(retain, nonatomic) TSCH3DCamera *camera; // @synthesize camera=mCamera;
@property(nonatomic) BOOL enabled; // @synthesize enabled=mEnabled;
- (id).cxx_construct;
- (void)invalidate;
@property(readonly, nonatomic) BOOL shadowPlaneValid;
- (void)setupResources;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 renderer:(id)arg2;

@end
