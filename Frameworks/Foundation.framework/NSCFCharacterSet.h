/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFCharacterSet : NSMutableCharacterSet  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)addCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)finalize;
- (id)invertedSet;
- (void)invert;
- (void)addCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (Class)classForArchiver;

@end