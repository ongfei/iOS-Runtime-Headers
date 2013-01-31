/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICGColor : UIColor  {
    struct CGColor { } *cachedColor;
}


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;
- (BOOL)isPatternColor;
- (float)alphaComponent;
- (void)setStroke;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)setFill;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (void)set;
- (struct CGColor { }*)CGColor;

@end