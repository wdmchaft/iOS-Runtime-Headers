/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSMutableDictionary, CPDistributedMessagingCenter;

@interface MSConnection : NSObject  {
    CPDistributedMessagingCenter *_center;
    CPDistributedMessagingCenter *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    struct dispatch_queue_s { } *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
    NSMutableDictionary *_shareState;
    struct dispatch_queue_s { } *_shareStateQueue;
    int _shareStateNotificationToken;
}

+ (id)sharedConnection;

- (void)resume:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)forgetPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)modifyShare:(id)arg1 forPersonID:(id)arg2;
- (BOOL)personIDHasOutstandingPublications:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (BOOL)isBusy;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)removeShare:(id)arg1 fromPersonID:(id)arg2;
- (void)sendInvitationsForShares:(id)arg1 forPersonID:(id)arg2;
- (id)shareStateForPersonID:(id)arg1;
- (void)handleSubscriptionPush;
- (BOOL)computeHashForAsset:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (id)subscribedStreamsForPersonID:(id)arg1 outError:(id*)arg2;
- (void)resetSubscriptionSyncForPersonID:(id)arg1;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (id)pause;

@end
