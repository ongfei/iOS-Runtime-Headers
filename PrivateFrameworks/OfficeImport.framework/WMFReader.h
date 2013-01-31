/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMFPlayer;

@interface WMFReader : NSObject <MFReader> {
    long m_recordsRead;
    WMFPlayer *m_player;
    unsigned long m_length;
    const char *m_pBuffer;
    unsigned long m_cursor;
}


- (void)dealloc;
- (oneway void)release;
- (id)initWithWMFPlayer:(id)arg1;
- (int)play:(id)arg1;
- (int)moveDataCursor:(unsigned long)arg1;
- (int)checkBytesAvailable:(unsigned long)arg1;
- (int)playRecord;
- (int)playHeaders;

@end