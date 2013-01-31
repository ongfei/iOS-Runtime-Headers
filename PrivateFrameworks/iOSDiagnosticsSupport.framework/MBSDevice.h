/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
 */

@class NSString, NSMutableDictionary, NSData;

@interface MBSDevice : NSObject  {
    NSMutableDictionary *_deviceInfoDictionary;
    NSData *_logData;
    NSString *_logFileName;
}

@property(retain) NSMutableDictionary * deviceInfoDictionary;
@property(retain) NSData * logData;
@property(retain) NSString * logFileName;


- (id)logData;
- (BOOL)collectLogs;
- (BOOL)collectAllDeviceInformation;
- (void)setLogData:(id)arg1;
- (id)logFileName;
- (void)setLogFileName:(id)arg1;
- (BOOL)copyLogsToTempDirectory;
- (BOOL)createTempDirectory;
- (void)setDeviceInfoDictionary:(id)arg1;
- (id)collectUbiquityData;
- (id)collectAggdData;
- (id)collectGasGaugeData;
- (id)collectBasicDeviceData;
- (void)dealloc;
- (id)deviceInfoDictionary;

@end