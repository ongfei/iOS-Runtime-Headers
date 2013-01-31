/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPinAnnotationViewInternal;

@interface MKPinAnnotationView : MKAnnotationView  {
    MKPinAnnotationViewInternal *_pinInternal;
}

@property unsigned int pinColor;
@property BOOL animatesDrop;

+ (id)_reuseIdentifier;
+ (id)_shadowImage;
+ (Class)layerClass;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_shadowDropAnimation;
+ (id)_dropAnimation;
+ (id)_dropBounceAnimation;
+ (id)_bounceAnimation;
+ (struct CGPoint { float x1; float x2; })_calloutOffset;
+ (struct CGPoint { float x1; float x2; })_shadowAnchorPoint;
+ (struct CGPoint { float x1; float x2; })_perceivedAnchorPoint;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_desiredBounds;
+ (id)_pinsWithType:(int)arg1;
+ (struct CGSize { float x1; float x2; })_perceivedSize;

- (void)_removeAllAnimations;
- (void)setAnimatesDrop:(BOOL)arg1;
- (unsigned int)pinColor;
- (BOOL)animatesDrop;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (id)_floatingImage;
- (void)setPinColor:(unsigned int)arg1;
- (void)setDragState:(unsigned int)arg1;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)description;
- (void)dealloc;
- (id)_image;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (int)_state;
- (void)setAnnotation:(id)arg1;
- (void)_reset;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)_internal;
- (id)_highlightedImage;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (id)_bounceAnimation:(BOOL)arg1 withBeginTime:(double)arg2 addToLayer:(BOOL)arg3;
- (id)_pinJumpImages;
- (id)_pinBounceImages;
- (void)_cleanupAfterPinDropAnimation;
- (id)_pins;
- (void)_updatePinType;
- (int)_pinType;
- (void)_setPinType:(int)arg1;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_stopDrop;
- (void)_dropFromPoint:(struct CGPoint { float x1; float x2; })arg1 shadowStartPoint:(struct CGPoint { float x1; float x2; })arg2 distance:(float)arg3 maxDistance:(float)arg4 withDelay:(double)arg5;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (void)_setMapType:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;

@end