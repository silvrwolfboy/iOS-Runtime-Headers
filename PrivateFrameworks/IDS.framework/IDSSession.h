/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSSession;

@interface IDSSession : NSObject {
    _IDSSession *_internal;
}

@property int invitationTimeOut;
@property BOOL isAudioEnabled;
@property BOOL isMuted;
@property(readonly) unsigned int sessionEndedReason;
@property(readonly) int socket;

- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(int)arg3 uniqueID:(id)arg4;
- (id)_internal;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(int)arg3;
- (int)invitationTimeOut;
- (BOOL)isAudioEnabled;
- (BOOL)isMuted;
- (BOOL)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (unsigned int)sessionEndedReason;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInvitationTimeOut:(int)arg1;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (void)setIsMuted:(BOOL)arg1;
- (int)socket;
- (unsigned int)state;

@end