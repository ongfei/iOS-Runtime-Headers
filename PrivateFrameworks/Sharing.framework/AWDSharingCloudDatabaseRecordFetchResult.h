/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingCloudDatabaseRecordFetchResult : PBCodable <NSCopying> {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int updateCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _updateCount;
}

@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpdateCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int updateCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDomain;
- (BOOL)hasTimestamp;
- (BOOL)hasUpdateCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUpdateCount:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUpdateCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)updateCount;
- (void)writeTo:(id)arg1;

@end
