//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeHeaderView.h>

#import <ContactsAutocompleteUI/CNComposeRecipientAtomDelegate-Protocol.h>
#import <ContactsAutocompleteUI/CNRecipientDraggingDelegate-Protocol.h>

@class CNComposeDragSource, CNComposeDropTarget, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSUndoManager, UIButton, UIColor, UIFont, UITextView, UIView, _CNAtomTextAttachment, _CNAtomTextView;

@interface CNComposeRecipientTextView : CNComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, CNComposeRecipientAtomDelegate, CNRecipientDraggingDelegate>
{
    _CNAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    CNComposeDragSource *_dragSource;
    CNComposeDropTarget *_dropTarget;
    CGRect _currentTextRect;
    long long _atomViewAnimationDepth;
    BOOL _parentIsClosing;
    BOOL _textViewExclusionPathsAreValid;
    BOOL _isTextFieldCollapsed;
    BOOL _collapsedStateInitialized;
    BOOL _indicatesUnsafeRecipientsWhenCollapsed;
    BOOL _notifyDelegateOfSizeChange;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    NSUndoManager *_undoManager;
    CGRect _addButtonFrame;
    BOOL _usingActiveAppearance;
    BOOL _separatorHidden;
    BOOL _expanded;
    BOOL _didIgnoreFirstResponderResign;
    BOOL _showsAddButtonWhenExpanded;
    BOOL _expandRecipientsInNamedGroups;
    BOOL _editable;
    BOOL _enabled;
    int _hideLastAtomComma;
    UIFont *_baseFont;
    long long _maxRecipients;
    UIButton *_addButton;
    UIColor *_typingTextColor;
    double _trailingButtonMidlineInsetFromLayoutMargin;
    _CNAtomTextAttachment *_placeholderAttachment;
    UIView *_atomContainerView;
}

+ (id)defaultFont;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIView *atomContainerView; // @synthesize atomContainerView=_atomContainerView;
@property(retain, nonatomic) _CNAtomTextAttachment *placeholderAttachment; // @synthesize placeholderAttachment=_placeholderAttachment;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property(nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;
@property(retain, nonatomic) UIColor *typingTextColor; // @synthesize typingTextColor=_typingTextColor;
@property(nonatomic) BOOL expandRecipientsInNamedGroups; // @synthesize expandRecipientsInNamedGroups=_expandRecipientsInNamedGroups;
@property(nonatomic) BOOL showsAddButtonWhenExpanded; // @synthesize showsAddButtonWhenExpanded=_showsAddButtonWhenExpanded;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(readonly, nonatomic) BOOL didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) BOOL usingActiveAppearance; // @synthesize usingActiveAppearance=_usingActiveAppearance;
@property(nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed; // @synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed;
// - (void).cxx_destruct;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)composeRecipientAtomDisambiguate:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)dropItems:(id)arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(CGPoint)arg1;
- (void)dragEnteredAtPoint:(CGPoint)arg1;
- (id)dragPreviewForDraggedItem:(id)arg1 withContainer:(id)arg2;
- (_NSRange)_placeholderAttachmentRange;
- (id)_placeholderAttachmentWithStaticWidth;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfNewSize:(CGSize)arg1;
- (BOOL)_delegateRespondsToSizeChange;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (NSUInteger)indexOfRecipientForInsertionAtPoint:(CGPoint)arg1;
- (id)selectedAtoms;
- (id)atomViewsInRange:(_NSRange)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(_NSRange)arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(NSUInteger)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (BOOL)_canAddAdditionalAtoms;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isAddButtonVisible;
- (void)_ensureAddButton;
- (void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isTextViewCollapsed;
- (id)_attributedStringWithAtomizedRecipients;
- (void)_updateInactiveTextView;
- (void)_ensureInactiveTextView;
- (id)_toString;
- (BOOL)_textViewContainsAtomizedRecipients;
- (void)_resetSelectionState;
- (BOOL)_shouldAnimateAtomViewChanges;
- (void)_beginAtomViewAnimations;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (id)_atomViewAtCharacterIndex:(NSUInteger)arg1;
- (_NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)_invalidateTextContainerExclusionPaths;
- (void)_recomputeTextContainerExclusionPaths;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (void)reflow;
- (BOOL)_useRightToLeftLayout;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)finishEnteringRecipient;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (void)invalidateAtomPresentationOptions;
- (void)clearText;
- (id)_baseAttributes;
@property(retain, nonatomic) UIColor *inactiveTextColor;
- (void)setLabel:(id)arg1;
- (void)_invalidateAtomPresentationOptionsCache;
- (NSUInteger)_atomPresentationOptionsForRecipient:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(NSUInteger)arg1 numberOfRowsAboveField:(long long)arg2;
- (BOOL)hasContent;
@property(retain, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
@property(readonly, nonatomic) NSUInteger numberOfRowsOfTextInField;
@property(readonly, nonatomic) double offsetForRowWithTextField;
@property(readonly, nonatomic) UITextView *textView;
@property(readonly, nonatomic) NSString *text;
- (id)_userEnteredTextWithRange:(_NSRange )arg1;
- (BOOL)_hasRecipientsWithPresentationOptions:(NSUInteger)arg1;
- (BOOL)_hasDowntimeBlockedRecipients;
- (BOOL)_hasUnsafeRecipients;
- (void)_updateAddButtonVisibility;
- (void)setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsingActiveAppearance:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSArray *uncommentedAddresses;
@property(copy, nonatomic) NSArray *addresses;
- (void)_addButtonTapped:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)_didRemoveRecipient:(id)arg1;
- (id)undoManager;
- (void)addRecipient:(id)arg1 index:(NSUInteger)arg2 animate:(BOOL)arg3;
- (void)addRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *recipients;
- (void)_removeAllRecipients;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)refreshPreferredContentSize;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)layoutSubviews;
- (void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 dragDropDelegate:(id)arg2;
- (void)dealloc;

@end
