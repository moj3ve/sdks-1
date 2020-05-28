//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, PIReframeSubject;

@interface PISubjectCluster : NSObject
{
    BOOL _salientObject;
    float _saliencyScale;
    PIReframeSubject *_body;
    NSUInteger _direction;
    NSMutableSet *_mutablePoints;
    CGPoint _centerPoint;
}

+ (NSUInteger)directionForBody:(id)arg1 face:(id)arg2;
+ (id)subjectForExpansionWithSaliencyScale:(float)arg1 startingSubject:(id)arg2;
@property(readonly, nonatomic, getter=isSalientObject) BOOL salientObject; // @synthesize salientObject=_salientObject;
@property(readonly, nonatomic) float saliencyScale; // @synthesize saliencyScale=_saliencyScale;
@property(readonly, copy, nonatomic) NSMutableSet *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
@property(readonly, nonatomic) CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(readonly, nonatomic) NSUInteger direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) PIReframeSubject *body; // @synthesize body=_body;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect boundingBox;
- (void)addPointsFromCluster:(id)arg1;
- (void)addPoint:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *points;
@property(readonly, nonatomic) PIReframeSubject *expandedSubject;
- (BOOL)shouldAllowPoint:(CGPoint)arg1;
- (id)description;
- (id)initWithBody:(id)arg1 direction:(NSUInteger)arg2 saliencyScale:(float)arg3;
- (id)initSalientClusterWithCenterPoint:(CGPoint)arg1 saliencyScale:(float)arg2;
- (id)initWithBody:(id)arg1 face:(id)arg2 saliencyScale:(float)arg3;

@end
