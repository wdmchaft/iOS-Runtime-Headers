/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUBufferedInputStream>;

@interface SFUZipRecordInputStream : NSObject  {
    <SFUBufferedInputStream> *mInput;
    char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}


- (void)dealloc;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3;
- (id)initWithDataRepresentation:(id)arg1;

@end
