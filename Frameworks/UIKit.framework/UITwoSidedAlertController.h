/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject  {
    UIAlertView *_front;
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
}


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)backAlertClickedButtonAtIndex:(int)arg1;
- (void)frontAlertClickedButtonAtIndex:(int)arg1;
- (void)flip;
- (id)backAlert;
- (id)frontAlert;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)didPresentAlertView:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)dismiss;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)show;

@end