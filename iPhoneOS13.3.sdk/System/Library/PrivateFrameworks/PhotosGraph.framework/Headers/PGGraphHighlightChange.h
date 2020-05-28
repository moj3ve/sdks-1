//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphHighlightNode;

@interface PGGraphHighlightChange : PGGraphChange
{
    NSString *_highlightLocalIdentifier;
    PGGraphHighlightNode *_highlightNode;
    NSUInteger _updateTypes;
}

@property(readonly, nonatomic) NSUInteger updateTypes; // @synthesize updateTypes=_updateTypes;
@property(retain, nonatomic) PGGraphHighlightNode *highlightNode; // @synthesize highlightNode=_highlightNode;
@property(readonly, nonatomic) NSString *highlightLocalIdentifier; // @synthesize highlightLocalIdentifier=_highlightLocalIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)mergeChange:(id)arg1;
- (NSUInteger)type;
- (id)initWithHighlightLocalIdentifier:(id)arg1 updateTypes:(NSUInteger)arg2;

@end
