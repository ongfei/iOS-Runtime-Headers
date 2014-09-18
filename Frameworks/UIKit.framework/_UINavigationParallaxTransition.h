/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIViewControllerContextTransitioning>, NSString, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {
    _UIParallaxDimmingView *_borderDimmingView;
    UIView *_clipUnderView;
    UIView *_containerFromView;
    UIView *_containerToView;
    _UIParallaxDimmingView *_contentDimmingView;
    _UINavigationInteractiveTransitionBase *_interactionController;
    long long _operation;
    <UIViewControllerContextTransitioning> *_transitionContext;
    double _transitionGap;
    long long _transitionStyle;
    bool_clipUnderlapWhileTransitioning;
    bool_interactionAborted;
}

@property(retain) _UIParallaxDimmingView * borderDimmingView;
@property(retain) UIView * clipUnderView;
@property bool clipUnderlapWhileTransitioning;
@property(retain) UIView * containerFromView;
@property(retain) UIView * containerToView;
@property(retain) _UIParallaxDimmingView * contentDimmingView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool interactionAborted;
@property _UINavigationInteractiveTransitionBase * interactionController;
@property long long operation;
@property(readonly) Class superclass;
@property(retain) <UIViewControllerContextTransitioning> * transitionContext;
@property double transitionGap;
@property long long transitionStyle;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)animateKeyboard:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)borderDimmingView;
- (id)clipUnderView;
- (bool)clipUnderlapWhileTransitioning;
- (void)completeKeyboard:(id)arg1;
- (id)containerFromView;
- (id)containerToView;
- (id)contentDimmingView;
- (void)dealloc;
- (double)gapBetweenViews;
- (id)initWithCurrentOperation:(long long)arg1;
- (bool)interactionAborted;
- (id)interactionController;
- (long long)operation;
- (double)parallaxOffset;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (void)setBorderDimmingView:(id)arg1;
- (void)setClipUnderView:(id)arg1;
- (void)setClipUnderlapWhileTransitioning:(bool)arg1;
- (void)setContainerFromView:(id)arg1;
- (void)setContainerToView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionGap:(double)arg1;
- (void)setTransitionStyle:(long long)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (double)transitionGap;
- (long long)transitionStyle;

@end