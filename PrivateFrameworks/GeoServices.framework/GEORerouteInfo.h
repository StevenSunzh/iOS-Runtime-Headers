/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDate;

@interface GEORerouteInfo : NSObject {
    double _distanceFromDestination;
    double _distancePenalty;
    double _penalty;
    double _throttledReroutesPenalty;
    NSDate *_time;
}

@property double distanceFromDestination;
@property(readonly) double penalty;
@property(retain) NSDate * time;

- (double)distanceFromDestination;
- (double)penalty;
- (void)setDistanceFromDestination:(double)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(bool)arg3 destinationCoordinate:(struct { double x1; double x2; })arg4 numThrottledReroutes:(unsigned long long)arg5;

@end
