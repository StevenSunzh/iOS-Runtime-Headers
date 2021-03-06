/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet;

@interface PLMomentListCluster : NSObject {
    NSMutableSet *__moments;
    unsigned long long _month;
    unsigned long long _numberOfAssets;
    unsigned long long _numberOfMoments;
    unsigned long long _year;
}

@property(readonly) NSMutableSet * _moments;
@property(readonly) unsigned long long month;
@property(readonly) unsigned long long numberOfAssets;
@property(readonly) unsigned long long numberOfMoments;
@property(readonly) unsigned long long year;

- (id)_moments;
- (void)addMoment:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMonth:(unsigned long long)arg1 year:(unsigned long long)arg2;
- (unsigned long long)month;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfMoments;
- (unsigned long long)peak;
- (void)removeMoment:(id)arg1;
- (unsigned long long)year;

@end
