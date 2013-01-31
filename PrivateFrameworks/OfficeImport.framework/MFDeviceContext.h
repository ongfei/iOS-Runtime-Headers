/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>, MFBrush, MFFont, TSUColor, MFTransform, MFPalette, MFPen, MFPath;

@interface MFDeviceContext : NSObject <NSCopying> {
    NSObject<MFDeviceDriver> *m_driver;
    boolm_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    TSUColor *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    TSUColor *m_bkColour;
    int m_bkMode;
    struct CGPoint { 
        float x; 
        float y; 
    } m_brushOrg;
    struct CGPoint { 
        float x; 
        float y; 
    } m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath *m_path;
}

+ (id)deviceContextWithDriver:(id)arg1;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)getPath;
- (void)setRop2:(int)arg1;
- (int)getRop2;
- (id)getBrush;
- (void)setPen:(id)arg1;
- (id)getPen;
- (void)setSelectedPalette:(id)arg1;
- (void)setCurrentTransform:(id)arg1;
- (id)getCurrentTransform;
- (void)setStretchBltMode:(int)arg1;
- (int)getStretchBltMode;
- (void)setPolyFillMode:(int)arg1;
- (int)getPolyFillMode;
- (void)setArcDirection:(int)arg1;
- (int)getArcDirection;
- (id)getFont;
- (void)setBrushOrg:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })getBrushOrg;
- (void)setBkMode:(int)arg1;
- (int)getBkMode;
- (void)setBkColour:(id)arg1;
- (void)setTextCharExtra:(int)arg1;
- (int)getTextCharExtra;
- (void)setTextJustification:(int)arg1 :(int)arg2;
- (int)getTextBreakCount;
- (int)getTextBreakExtra;
- (void)setTextColour:(id)arg1;
- (void)setTextDirection:(int)arg1;
- (int)getTextDirection;
- (void)setTextVerticalAlign:(int)arg1;
- (int)getTextVerticalAlign;
- (void)setTextHorizontalAlign:(int)arg1;
- (int)getTextHorizontalAlign;
- (double)getMiterLimit;
- (void)setTextUpdateCP:(bool)arg1;
- (bool)getTextUpdateCP;
- (void)setPenPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })getPenPosition;
- (id)initWithDriver:(id)arg1;
- (void)setBrush:(id)arg1;
- (id)getBkColour;
- (id)getTextColour;
- (id)getSelectedPalette;
- (void)setPath:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setMiterLimit:(double)arg1;

@end