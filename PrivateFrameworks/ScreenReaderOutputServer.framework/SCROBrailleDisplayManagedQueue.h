/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class SCRCIndexMap;



@interface SCROBrailleDisplayManagedQueue : NSObject 
{
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary { } *_queueStateDict;
    struct __CFDictionary { } *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    NSUInteger _maxActiveQueueSize;
}


- (id)init;
- (void)dealloc;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (id)disconnectedDisplays;
- (id)loadingDisplays;
- (id)primaryDisplay;
- (id)displayForToken:(long)arg1;
- (void)addDisplay:(id)arg1 withState:(NSInteger)arg2;
- (NSUInteger)displayCountIncludingDisconnectedDisplays:(BOOL)arg1;
- (id)_queueForState:(NSInteger)arg1 createQueue:(BOOL)arg2;
- (void)_fillActiveBrailleDisplayQueue;
- (void)setState:(NSInteger)arg1 forDisplay:(id)arg2;
- (NSInteger)stateForDisplay:(id)arg1;
- (void)setPrimaryDisplay:(id)arg1;
- (NSUInteger)activeQueueMaximumSize;
- (void)setActiveQueueMaximumSize:(NSUInteger)arg1;
- (id)sleepingDisplays;
- (void)removeDisplay:(id)arg1;

@end