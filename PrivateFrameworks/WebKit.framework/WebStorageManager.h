/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebStorageManager : NSObject  {
}

+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (id)sharedWebStorageManager;
+ (id)_storageDirectoryPath;

- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;
- (void)deleteAllOrigins;
- (void)deleteOrigin:(id)arg1;
- (id)origins;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (id)init;

@end