/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlighter : NSObject {
    struct CGColor { } * _borderColor;
    float  _enlargeFactor;
    NSMutableArray * _highLightLayers;
    struct CGColor { } * _highlightColor;
    struct CGPDFPage { } * _page;
    float  _pdfToViewScale;
    struct CGColor { } * _whiteColor;
    float  inset;
}

@property (nonatomic) float inset;

- (void)addAnimation:(id)arg1;
- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3;
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned int)arg2 to:(id)arg3 animated:(BOOL)arg4;
- (void)addRectPath:(struct CGPath { }*)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg4 upright:(BOOL)arg5;
- (void)clear;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (float)inset;
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg3 upright:(BOOL)arg4;
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg3 upright:(BOOL)arg4;
- (void)setInset:(float)arg1;
- (void)setNeedsDisplay;
- (void)unhide;

@end
