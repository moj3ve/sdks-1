//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSString, TSCHChartSeries, TSUBezierPath, TSURegressionModel;

__attribute__((visibility("hidden")))
@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries *mSeries;
    long long mLineType;
    BOOL mShowTrendLine;
    TSURegressionModel *mRegression;
    double mMaxYValue;
    double mMinYValue;
    double mMaxXValue;
    double mMinXValue;
    int mInputAxisType;
    int mOutputAxisType;
    BOOL mTrendLineInvalid;
    TSUBezierPath *mCachedTrendLinePath;
    CGRect mCachedChartFrame;
    double mOffsetInBody;
    BOOL mCachedChartVertical;
}

+ (long long)getTrendLineTypeForSeries:(id)arg1;
@property(readonly, nonatomic) BOOL showTrendLine; // @synthesize showTrendLine=mShowTrendLine;
// - (void).cxx_destruct;
- (void)p_releaseCache;
- (void)p_updateTrendLineData;
- (void)p_generateRegression;
- (NSUInteger)p_fillArrayX:(double )arg1 andY:(double )arg2 fromPoints:(id)arg3 hasNegativeX:(BOOL )arg4;
- (NSUInteger)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3;
- (void)p_calcMARegression:(NSUInteger)arg1 xData:(id)arg2 yData:(id)arg3;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcRegression:(NSUInteger)arg1 xData:(double )arg2 yData:(double )arg3;
- (void)p_calcBounds;
- (id)p_dataPointValues;
- (long long)p_getTrendLineType;
- (id)trendLinePathForChartRect:(CGRect)arg1 offsetInBody:(double)arg2 vertical:(BOOL)arg3;
- (void)p_addPathToTrendLinePathWithPoints:(CDStruct_c3b9c2ee )arg1 count:(NSUInteger)arg2 curved:(BOOL)arg3 curveFitter:(id)arg4;
- (id)p_linePathFromPoints:(CDStruct_c3b9c2ee )arg1 count:(NSUInteger)arg2;
- (CDStruct_c3b9c2ee)p_unitPoint:(CDStruct_c3b9c2ee)arg1 toScreenFrame:(CGRect)arg2 offset:(double)arg3 vertical:(BOOL)arg4;
- (struct __CFAttributedString )newEquationAttributedString;
- (void)trendLineUnitSpacePoints:(CDStruct_183601bc )arg1 count:(NSUInteger )arg2 drawCurve:(BOOL )arg3 maxPoints:(NSUInteger)arg4;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (void)updateIfNeeded;
- (void)invalidateData;
- (BOOL)showTrendLineForAxisID:(id)arg1;
@property(readonly, nonatomic) float rSquaredTextOpacity;
@property(readonly, nonatomic) float equationTextOpacity;
@property(readonly, nonatomic) NSString *trendLineLegendText;
@property(readonly, nonatomic) NSString *rSquaredText;
@property(readonly, nonatomic) BOOL showRSquared;
@property(readonly, nonatomic) BOOL showEquation;
@property(readonly, nonatomic) BOOL showTrendLineLegendText;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSeries:(id)arg1;

@end
