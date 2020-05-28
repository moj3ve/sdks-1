//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPFootnoteHeightMeasurer-Protocol.h>

@class TPFootnoteContainerLayout, TSDLayoutController, TSULRUCache;
@protocol TPFootnotePageDelegate;

__attribute__((visibility("hidden")))
@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer>
{
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TSDLayoutController *_layoutController;
    TSULRUCache *_footnoteLayoutCache;
    id <TPFootnotePageDelegate> _pageDelegate;
}

// - (void).cxx_destruct;
- (void)p_clearFootnoteLayoutCache;
- (void)setFootnoteSpacing:(long long)arg1;
- (void)setContainerLineWidth:(double)arg1;
- (BOOL)footnoteContainerFitsForTarget:(id)arg1;
- (BOOL)footnoteContainerIsOnSamePageAsTarget:(id)arg1;
- (BOOL)canHaveFootnotesFromPreviousTarget:(id)arg1;
- (double)footnoteBlockHeightForTarget:(id)arg1;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(id)arg1;
- (void)addFootnoteReferenceStorage:(id)arg1;
- (double)footnoteBlockHeight;
- (BOOL)hasFootnotes;
- (void)tearDown;
- (id)initWithFootnoteMarkProvider:(id)arg1 documentRoot:(id)arg2 pageDelegate:(id)arg3 maxFootnoteLineWidth:(double)arg4 maxFootnoteBlockHeight:(double)arg5 vertical:(BOOL)arg6 footnoteSpacing:(double)arg7;

@end
