//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface NUPageStyle : NSObject
{
    BOOL _hideToolbar;
    NSString *_title;
    UIImage *_titleImage;
    NSString *_nextButtonTitle;
}

@property(nonatomic) BOOL hideToolbar; // @synthesize hideToolbar=_hideToolbar;
@property(copy, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end
