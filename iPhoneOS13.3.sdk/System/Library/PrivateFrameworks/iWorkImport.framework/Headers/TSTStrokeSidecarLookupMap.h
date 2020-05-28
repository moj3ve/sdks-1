//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, TSTCellRegion, TSTStrokeLayer, TSTStrokeSidecar;

__attribute__((visibility("hidden")))
@interface TSTStrokeSidecarLookupMap : NSObject
{
    TSTStrokeSidecar *_strokeSidecar;
    TSTCellRegion *_region;
    NSIndexSet *_columnIndexesInRow;
    TSTStrokeLayer *_topStrokeLayer;
    TSTStrokeLayer *_bottomStrokeLayer;
}

@property(retain, nonatomic) TSTStrokeLayer *bottomStrokeLayer; // @synthesize bottomStrokeLayer=_bottomStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *topStrokeLayer; // @synthesize topStrokeLayer=_topStrokeLayer;
@property(retain, nonatomic) NSIndexSet *columnIndexesInRow; // @synthesize columnIndexesInRow=_columnIndexesInRow;
@property(retain, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTStrokeSidecar *strokeSidecar; // @synthesize strokeSidecar=_strokeSidecar;
// - (void).cxx_destruct;
- (BOOL)cellBorderAtColumn:(unsigned short)arg1;
- (BOOL)anyCellBordersInThisRow;
- (void)setIteratorToRow:(unsigned int)arg1;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;

@end
