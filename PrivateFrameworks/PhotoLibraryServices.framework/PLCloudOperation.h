/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudOperationResource, PLCloudPhotoLibraryManager, PLCloudScenario;

@interface PLCloudOperation : NSObject {
    PLCloudPhotoLibraryManager *_connection;
    unsigned long long _cost;
    long long _createdAt;
    PLCloudOperationResource *_operationResource;
    PLCloudScenario *_scenario;
    bool_running;
}

@property(readonly) PLCloudPhotoLibraryManager * connection;
@property(readonly) unsigned long long cost;
@property(readonly) long long createdAt;
@property(retain) PLCloudOperationResource * operationResource;
@property bool running;
@property(readonly) PLCloudScenario * scenario;

- (id)connection;
- (unsigned long long)cost;
- (long long)createdAt;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithScenario:(id)arg1 cloudConnection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)operationResource;
- (void)requestCancel;
- (id)resource;
- (void)runOperationWithCompletionHandler:(id)arg1;
- (bool)running;
- (id)scenario;
- (void)setOperationResource:(id)arg1;
- (void)setRunning:(bool)arg1;

@end
