/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {
    NSDate *_date;
    NSString *_deviceName;
    unsigned long long _quotaReserved;
    unsigned long long _snapshotID;
    int _state;
    NSString *_systemVersion;
    bool_isCompatible;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * deviceName;
@property(readonly) bool isCompatible;
@property(readonly) unsigned long long quotaReserved;
@property(readonly) unsigned long long snapshotID;
@property(readonly) int state;
@property(readonly) NSString * systemVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(bool)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7;
- (bool)isCompatible;
- (unsigned long long)quotaReserved;
- (unsigned long long)snapshotID;
- (int)state;
- (id)systemVersion;

@end
