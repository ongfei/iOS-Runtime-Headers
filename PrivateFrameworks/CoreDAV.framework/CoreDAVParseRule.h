/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVParseRule : NSObject  {
    int _minimumNumber;
    int _maximumNumber;
    NSString *_nameSpace;
    NSString *_elementName;
    Class _objectClass;
    SEL _setterMethod;
}

@property(readonly) int minimumNumber;
@property(readonly) int maximumNumber;
@property(readonly) NSString * nameSpace;
@property(readonly) NSString * elementName;
@property(readonly) Class objectClass;
@property(readonly) SEL setterMethod;


- (id)description;
- (void)dealloc;
- (int)maximumNumber;
- (int)minimumNumber;
- (SEL)setterMethod;
- (Class)objectClass;
- (id)elementName;
- (id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
- (id)nameSpace;

@end