//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier
{
    float _GLfloatValue;
    float _proposedGLfloatValue;
}

@property(nonatomic) float proposedGLfloatValue; // @synthesize proposedGLfloatValue=_proposedGLfloatValue;
@property(readonly, nonatomic) float GLfloatValue; // @synthesize GLfloatValue=_GLfloatValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

