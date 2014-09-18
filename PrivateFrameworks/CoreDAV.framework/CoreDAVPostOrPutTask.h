/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
    int _absoluteOrder;
    NSString *_previousETag;
    NSURL *_priorOrderedURL;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    bool_forceToServer;
    bool_sendOrder;
}

@property int absoluteOrder;
@property bool forceToServer;
@property(retain) NSString * previousETag;
@property(retain) NSURL * priorOrderedURL;
@property(retain) NSString * requestDataContentType;
@property(retain) NSData * requestDataPayload;

- (int)absoluteOrder;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (bool)forceToServer;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)previousETag;
- (id)priorOrderedURL;
- (id)requestBody;
- (id)requestDataContentType;
- (id)requestDataPayload;
- (void)setAbsoluteOrder:(int)arg1;
- (void)setForceToServer:(bool)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setPriorOrderedURL:(id)arg1;
- (void)setRequestDataContentType:(id)arg1;
- (void)setRequestDataPayload:(id)arg1;

@end