/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery  {
    MFSMTPConnection *_connection;
}


- (void)_openConnection;
- (Class)deliveryClass;
- (id)newMessageWriter;
- (int)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (void)dealloc;

@end
