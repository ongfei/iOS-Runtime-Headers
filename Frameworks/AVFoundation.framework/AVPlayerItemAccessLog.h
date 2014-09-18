/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property(readonly) NSArray * events;
@property(readonly) unsigned long long extendedLogDataStringEncoding;

- (id)_accessLogArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (void)finalize;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end