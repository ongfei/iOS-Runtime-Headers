/* Generated by RuntimeBrowser.
 */

@protocol CNContactGroupPickerDelegate <NSObject>

@required

- (NSArray *)alreadyPickedGroups;
- (void)contactGroupPickerDidCancel:(CNContactGroupPickerViewController *)arg1;
- (void)contactGroupPickerDidFinish:(CNContactGroupPickerViewController *)arg1 withGroup:(NSString *)arg2;

@end
