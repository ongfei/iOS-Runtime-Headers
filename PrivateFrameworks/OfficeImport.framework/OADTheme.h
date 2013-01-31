/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADBaseStyles;

@interface OADTheme : NSObject  {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
}


- (void)dealloc;
- (id)init;
- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (void)addDefaults;
- (id)textDefaults;
- (id)lineDefaults;
- (id)shapeDefaults;
- (id)baseStyles;

@end