//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUndoTextOperation.h>

@class _NSAttributeRun;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationSetAttributes : _UIUndoTextOperation
{
    _NSAttributeRun *_attributes;
}

// - (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(_NSRange)arg1 inputController:(id)arg2;

@end
