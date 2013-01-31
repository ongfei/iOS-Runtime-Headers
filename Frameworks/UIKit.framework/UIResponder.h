/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIView, NSString, UIResponder<UITextInput>, NSUndoManager, UIView<UITextInputPrivate>;

@interface UIResponder : NSObject <UITextInput_Internal> {
}

@property(readonly) UIView * inputView;
@property(readonly) UIView * inputAccessoryView;
@property(readonly) UIResponder * _editingDelegate;
@property(readonly) UIResponder * _responderForEditing;
@property(getter=_proxyTextInput,readonly) UIResponder<UITextInput> * __content;
@property(readonly) UIView<UITextInputPrivate> * _textSelectingContainer;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property(getter=_caretRect,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } caretRect;
@property(copy) NSString * restorationIdentifier;
@property(readonly) NSUndoManager * undoManager;

+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_stopTrackingObjectsWithIdentifiers;
+ (void)_finishStateRestoration;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)_cleanupAllStateRestorationTables;
+ (void)_startTrackingObjectsWithIdentifiers;

- (void)_trackObjectWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_caretRect;
- (id)_asTextSelection;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectionAsNSRange;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_keyInput;
- (int)_indexForTextPosition:(id)arg1;
- (id)_selectableText;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_textColorForCaretSelection;
- (id)_fontForCaretSelection;
- (int)_selectionAffinity;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (BOOL)_selectionAtDocumentEnd;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned long)_characterAfterCaretSelection;
- (BOOL)_selectionAtDocumentStart;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (BOOL)_isEmptySelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)_wordContainingCaretSelection;
- (BOOL)_selectionAtWordStart;
- (unsigned long)_characterBeforeCaretSelection;
- (void)_setGestureRecognizers;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_fullText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_extendCurrentSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_unmarkText;
- (BOOL)_isPinningInputViews;
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned int)arg4;
- (id)_deepestDefaultFirstResponderMatching:(id)arg1;
- (id)nextFirstResponder;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)reloadInputViewsWithoutReset;
- (id)_responderForEditing;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (void)mouseMoved:(struct __GSEvent { }*)arg1;
- (void)mouseExited:(struct __GSEvent { }*)arg1;
- (void)mouseEntered:(struct __GSEvent { }*)arg1;
- (void)_finishResignFirstResponder;
- (id)_editingDelegate;
- (BOOL)_isViewController;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (id)_deepestDefaultFirstResponder;
- (id)_nextViewControllerInResponderChain;
- (id)_textSelectingContainer;
- (id)inputView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (void)_becomeFirstResponderAndMakeVisible;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)_keyboardResponder;
- (id)textInputView;
- (int)selectionAffinity;
- (id)_proxyTextInput;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (BOOL)canResignFirstResponder;
- (id)inputAccessoryView;
- (void)_resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)reloadInputViews;
- (void)_becomeFirstResponder;
- (id)interactionAssistant;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (BOOL)isEditing;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (BOOL)_isRootForKeyResponderCycle;
- (id)_nextFirstResponderIfAllowed;
- (BOOL)_canBecomeFirstResponderWhenPossible;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (BOOL)_containsResponder:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)restorationIdentifier;
- (void)setRestorationIdentifier:(id)arg1;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_firstResponder;
- (BOOL)_containedInAbsoluteResponderChain;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (BOOL)_promoteDeepestDefaultFirstResponder;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_window;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)isEditable;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_restorationIdentifierPath;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (id)defaultFirstResponder;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)firstResponder;
- (id)nextResponder;
- (id)firstViewControllerInResponderChain;
- (void)purchaseAsset:(id)arg1 completionHandler:(id)arg2;
- (void)toggleVisibilityOfItemsInCompletionOffering:(id)arg1;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;

@end