/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray;

@interface ISSoftwareMap : NSObject  {
    NSArray *_applications;
}

@property(readonly) NSArray * applications;

+ (void)invalidateCurrentMap;
+ (void)startObservingNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)loadedMap;
+ (void)_startWatchingInstallationNotifications;
+ (BOOL)haveApplicationsOfType:(struct __CFString { }*)arg1;
+ (id)currentMap;
+ (void)setCurrentMap:(id)arg1;
+ (BOOL)currentMapIsValid;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(struct __CFString { }*)arg2;

- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applications;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)copySoftwareUpdatesPropertyList;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)_loadFromMobileInstallation;
- (void)dealloc;
- (id)init;

@end