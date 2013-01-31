/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUSymbolOwner, VMULinkedListEntry;

@interface VMULinkedListEntry : NSObject  {
    VMULinkedListEntry *_prev;
    VMULinkedListEntry *_next;
    unsigned int _size;
    VMUSymbolOwner *_symbolOwner;
}

+ (id)linkedListEntryWithSymbolOwner:(id)arg1;

- (void)setNext:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)prev;
- (void)setPrev:(id)arg1;
- (id)initWithSymbolOwner:(id)arg1;
- (id)symbolOwner;
- (id)next;
- (unsigned int)size;

@end