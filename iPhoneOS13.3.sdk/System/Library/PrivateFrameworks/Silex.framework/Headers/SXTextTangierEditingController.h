//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPEditingController.h>

@interface SXTextTangierEditingController : TSWPEditingController
{
    BOOL _startingInitialSelectionDrag;
}

@property(nonatomic) BOOL startingInitialSelectionDrag; // @synthesize startingInitialSelectionDrag=_startingInitialSelectionDrag;
- (id)editorKeyboardLanguage;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)editingReps;
- (void)tappedOnKnob:(id)arg1;
- (BOOL)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;
- (BOOL)canAddOrShowComment;
- (BOOL)wantsKeyboard;
- (BOOL)wantsCaret;

@end
