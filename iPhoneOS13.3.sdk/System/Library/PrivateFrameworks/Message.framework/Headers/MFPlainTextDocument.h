//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface MFPlainTextDocument : NSObject
{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

// - (void).cxx_destruct;
- (void)appendArchivedRepresentation:(id)arg1;
- (id)archivedRepresentation;
- (id)string;
- (void)getString:(id )arg1 quoteLevel:(unsigned int )arg2 ofFragmentAtIndex:(NSUInteger)arg3;
- (NSUInteger)fragmentCount;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (id)quotedString:(unsigned int)arg1;
- (void)getFormatFlowedString:(id )arg1 insertedTrailingSpaces:(BOOL )arg2 encoding:(unsigned int)arg3;

@end
