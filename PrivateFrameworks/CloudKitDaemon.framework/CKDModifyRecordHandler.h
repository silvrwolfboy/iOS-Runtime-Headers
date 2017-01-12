/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordHandler : NSObject {
    int  _batchRank;
    NSError * _error;
    NSString * _etag;
    BOOL  _isDelete;
    BOOL  _needsRefetch;
    CKDModifyRecordsOperation * _operation;
    NSObject<OS_dispatch_group> * _pcsGroup;
    CKDProgressTracker * _progressTracker;
    CKRecord * _record;
    CKRecordID * _recordID;
    CKDRecordPCSData * _recordPCSData;
    int  _saveAttempts;
    BOOL  _saveCompletionBlockCalled;
    CKRecord * _serverRecord;
    CKDSharePCSData * _sharePCSData;
    unsigned int  _state;
}

@property (nonatomic) int batchRank;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) BOOL isDelete;
@property (nonatomic, readonly) BOOL isShare;
@property (nonatomic) BOOL needsRefetch;
@property (nonatomic) CKDModifyRecordsOperation *operation;
@property (nonatomic, readonly) CKDPCSCache *pcsCache;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *pcsGroup;
@property (nonatomic, readonly) CKDPCSManager *pcsManager;
@property (nonatomic, retain) CKDProgressTracker *progressTracker;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) CKDRecordPCSData *recordPCSData;
@property (nonatomic) int saveAttempts;
@property (nonatomic) BOOL saveCompletionBlockCalled;
@property (nonatomic, retain) CKRecord *serverRecord;
@property (nonatomic, retain) CKDSharePCSData *sharePCSData;
@property (nonatomic) unsigned int state;

+ (id)_stringForState:(unsigned int)arg1;
+ (id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2;

- (void).cxx_destruct;
- (id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2;
- (void)_addShareToPCSData:(id)arg1 withError:(id)arg2;
- (BOOL)_canSetPreviousProtectionEtag;
- (void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2;
- (void)_createAndSavePCS;
- (BOOL)_createPublicSharingKeyWithError:(id*)arg1;
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1;
- (void)_fetchPCSData;
- (void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2;
- (void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handlePCSData:(id)arg1 withError:(id)arg2;
- (id)_initCommonWithOperation:(id)arg1;
- (id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2;
- (id)_initWithRecord:(id)arg1 operation:(id)arg2;
- (void)_loadPCSData;
- (BOOL)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id*)arg4;
- (void)_reallyFetchPCSDataWithOptions:(unsigned int)arg1;
- (void)_unwrapRecordPCSForParent;
- (void)_unwrapRecordPCSForZone;
- (void)_unwrapRecordPCSWithShareID:(id)arg1;
- (id)_wrapAssetKey:(id)arg1 forRecord:(id)arg2 withError:(id*)arg3;
- (BOOL)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (BOOL)_wrapEncryptedDataOnRecord:(id)arg1;
- (int)batchRank;
- (void)clearProtectionDataForRecord;
- (id)description;
- (id)error;
- (id)etag;
- (void)fetchRecordPCSData;
- (void)fetchSharePCSData;
- (BOOL)isDelete;
- (BOOL)isShare;
- (BOOL)needsRefetch;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (id)operation;
- (id)pcsCache;
- (id)pcsGroup;
- (id)pcsManager;
- (id)prepareAssetsForUploadWithError:(id*)arg1;
- (void)prepareForSave;
- (id)progressTracker;
- (id)record;
- (id)recordID;
- (id)recordPCSData;
- (int)saveAttempts;
- (BOOL)saveCompletionBlockCalled;
- (void)savePCSDataToCache;
- (id)serverRecord;
- (void)setBatchRank:(int)arg1;
- (void)setError:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setIsDelete:(BOOL)arg1;
- (void)setNeedsRefetch:(BOOL)arg1;
- (void)setOperation:(id)arg1;
- (void)setPcsGroup:(id)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordPCSData:(id)arg1;
- (void)setSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlockCalled:(BOOL)arg1;
- (void)setServerRecord:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (id)sharePCSData;
- (id)sideEffectRecordIDs;
- (unsigned int)state;

@end