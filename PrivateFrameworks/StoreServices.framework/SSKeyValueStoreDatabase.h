/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

- (void)_dispatchBlockAsync:(id)arg1;
- (id)_initReadOnly:(bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(id)arg1;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (void)readAsyncUsingSessionBlock:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;

@end
