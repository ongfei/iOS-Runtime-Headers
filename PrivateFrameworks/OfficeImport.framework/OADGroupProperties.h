/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

+ (id)defaultProperties;

- (void)dealloc;
- (id)shape3D;
- (id)scene3D;
- (BOOL)hasShape3D;
- (BOOL)hasScene3D;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (id)initWithDefaults;
- (void)setEffects:(id)arg1;
- (BOOL)hasEffects;
- (id)effects;
- (BOOL)hasFill;
- (void)setFill:(id)arg1;
- (id)fill;

@end