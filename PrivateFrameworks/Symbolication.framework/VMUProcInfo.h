/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    int _cpuType;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    } _startTime;
}

+ (int)processParentId:(int)arg1;
+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)arg1;

- (int)compare:(id)arg1;
- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)compareByUserAppName:(id)arg1;
- (BOOL)signal:(int)arg1;
- (id)initWithPid:(int)arg1;
- (BOOL)isNative;
- (BOOL)isApp;
- (int)compareByName:(id)arg1;
- (int)ppid;
- (BOOL)isCFM;
- (id)requestedAppName;
- (id)envVars;
- (id)userAppName;
- (id)firstArgument;
- (id)realAppName;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (unsigned int)task;
- (BOOL)isMachO;
- (int)cpuType;
- (int)pid;
- (struct timeval { int x1; int x2; })startTime;
- (BOOL)isRunning;
- (void)update;
- (void)finalize;
- (id)arguments;
- (BOOL)terminate;

@end