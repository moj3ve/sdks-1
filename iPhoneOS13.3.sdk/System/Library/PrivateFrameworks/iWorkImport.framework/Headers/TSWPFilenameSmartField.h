//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPPlaceholderSmartField.h>

__attribute__((visibility("hidden")))
@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField
{
    unsigned int _displayFlags;
}

- (int)smartFieldKind;
- (BOOL)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int displayFlags;

@end

