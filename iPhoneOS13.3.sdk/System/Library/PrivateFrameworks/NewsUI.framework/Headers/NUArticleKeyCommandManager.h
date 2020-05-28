//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleKeyCommandManager-Protocol.h>

@class UIScrollView;

@interface NUArticleKeyCommandManager : NSObject <NUArticleKeyCommandManager>
{
    BOOL _hasBeenTraversed;
    UIScrollView *_scrollView;
}

@property(nonatomic) BOOL hasBeenTraversed; // @synthesize hasBeenTraversed=_hasBeenTraversed;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (void)registerScrollView:(id)arg1;
- (void)handleKey:(id)arg1 flags:(long long)arg2;
- (void)handleKeyCommand:(id)arg1;
- (id)keyCommandsWithSelector:(SEL)arg1;

@end
