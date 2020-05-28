//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKModifyStrokesCommand.h>

@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand
{
    NSDictionary *_substrokes;
}

@property(readonly, nonatomic) NSDictionary *substrokes; // @synthesize substrokes=_substrokes;
// - (void).cxx_destruct;
- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 substrokes:(id)arg3 strokesHidden:(id)arg4 hiding:(BOOL)arg5;

@end
