//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPReplaceAction-Protocol.h>

@class NSString, TSWPChangeSession, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction>
{
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}

// - (void).cxx_destruct;
- (_NSRange)insertedRange;
- (long long)delta;
- (NSUInteger)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder )arg3 withFlags:(unsigned int)arg4 replaceBlock:(id /* CDUnknownBlockType */)arg5;
- (id)initWithSelection:(id)arg1 string:(id)arg2 changeSession:(id)arg3;

@end
