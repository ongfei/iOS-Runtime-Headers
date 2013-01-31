/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate> {
    struct __CFArray { } *_properties;
    NSArray *_policies;
    void *_addressBook;
    void *_person;
}

@property void* addressBook;
@property void* person;
@property struct __CFArray { }* properties;
@property(retain) NSArray * policies;


- (void)setProperties:(struct __CFArray { }*)arg1;
- (void)dealloc;
- (void*)addressBook;
- (id)policies;
- (void)setPerson:(void*)arg1;
- (void*)person;
- (struct __CFArray { }*)properties;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setAddressBook:(void*)arg1;
- (void)setPolicies:(id)arg1;
- (id)propertyPicker;
- (float)ab_heightToFitForViewInPopoverView;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2;

@end