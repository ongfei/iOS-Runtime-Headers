/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPEventPacket : NSObject  {
    int _numParameters;
    unsigned short _eventCode;
    unsigned long _transactionID;
    unsigned long _parameters[3];
}


- (id)description;
- (void)setParameter3:(unsigned long)arg1;
- (void)setParameter2:(unsigned long)arg1;
- (void)setParameter1:(unsigned long)arg1;
- (void)setEventCode:(unsigned short)arg1;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (id)contentForUSB;
- (id)initWithUSBBuffer:(void*)arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)parameter3;
- (unsigned long)parameter2;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (unsigned long)parameter1;
- (unsigned short)eventCode;
- (id)initWithTCPBuffer:(void*)arg1;
- (unsigned long)transactionID;
- (id)contentForTCP;

@end