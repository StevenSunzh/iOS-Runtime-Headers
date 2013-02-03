/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMDateTime : PBCodable {
    BOOL _hasTimeZoneOffsetMin;
    long long _secsSinceEpoch;
    NSInteger _timeZoneOffsetMin;
}

@property(readonly) BOOL hasTimeZoneOffsetMin;
@property long long secsSinceEpoch;
@property NSInteger timeZoneOffsetMin;

+ (id)date;

- (id)calendarDate;
- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimeZoneOffsetMin;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (long long)secsSinceEpoch;
- (void)setSecsSinceEpoch:(long long)arg1;
- (void)setTimeZoneOffsetMin:(NSInteger)arg1;
- (NSInteger)timeZoneOffsetMin;
- (void)writeTo:(id)arg1;

@end