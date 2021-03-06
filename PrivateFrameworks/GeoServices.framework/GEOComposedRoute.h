/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedWaypoint, GEOMapRegion, GEORoute, GEORouteDriveMapMatcher, GEORouteWalkMapMatcher, GEOZilchDecoder, NSArray, NSData, NSHashTable, NSMutableArray, NSString;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {
    NSArray *_advisoryNotices;
    GEOMapRegion *_boundingMapRegion;
    unsigned long long _currentDisplayStep;
    struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } *_currentManeuverDisplayEndPoints;
    GEOComposedWaypoint *_destination;
    unsigned int _distance;
    GEORouteDriveMapMatcher *_driveMapMatcher;
    unsigned int _expectedTime;
    unsigned int _firstVisiblePoint;
    GEORoute *_geoRoute;
    NSArray *_legs;
    unsigned int _maneuverDisplayCount;
    NSArray *_maneuverDisplaySteps;
    NSString *_name;
    NSHashTable *_observers;
    GEOComposedWaypoint *_origin;
    NSData *_pointData;
    double *_pointLengths;
    NSData *_routeID;
    NSMutableArray *_sections;
    unsigned long long _selectedLegIndex;
    NSMutableArray *_snappedPaths;
    NSArray *_steps;
    GEORouteWalkMapMatcher *_walkMapMatcher;
    GEOZilchDecoder *_zilchDecoder;
    bool_allowsNetworkTileLoad;
    bool_maneuverDisplayEnabled;
    bool_usesZilch;
}

@property(retain) NSArray * advisoryNotices;
@property bool allowsNetworkTileLoad;
@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) void* controlPoints;
@property unsigned long long currentDisplayStep;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) GEOComposedWaypoint * destination;
@property(readonly) unsigned int distance;
@property unsigned int expectedTime;
@property unsigned int firstVisiblePoint;
@property(readonly) GEORoute * geoRoute;
@property(readonly) bool hasExpectedTime;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray * legs;
@property(readonly) unsigned int maneuverDisplayCount;
@property bool maneuverDisplayEnabled;
@property(retain) NSArray * maneuverDisplaySteps;
@property(readonly) NSString * name;
@property(retain) GEOComposedWaypoint * origin;
@property(readonly) unsigned int pointCount;
@property(readonly) NSData * routeID;
@property(readonly) NSArray * routeNames;
@property(readonly) int routeType;
@property(readonly) NSArray * sections;
@property unsigned long long selectedLegIndex;
@property(readonly) NSArray * steps;
@property(readonly) unsigned long long stepsCount;
@property(readonly) Class superclass;
@property(readonly) unsigned int* trafficColorOffsets;
@property(readonly) unsigned long long trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned long long trafficColorsCount;
@property(readonly) int transportType;

- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rectsCount:(unsigned long long)arg4;
- (void)_buildPointSections;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 aPos:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 aCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 bCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 pointOnSegment:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg5 bounds:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)_initializeManeuverDisplaySteps;
- (struct CGImage { }*)_mapKitImage;
- (id)_mapMatcherForTransportType:(int)arg1;
- (bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (bool)_needsCornerOffsetAt:(unsigned int)arg1;
- (void)_snapPaths:(id)arg1 completionHandler:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)advisoryNotices;
- (bool)allowsNetworkTileLoad;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (id)boundingMapRegion;
- (bool)checkDrivingArrivalForCoordinate:(struct { double x1; double x2; })arg1 coordinateOnRoute:(struct { double x1; double x2; })arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(bool)arg6 checkDistanceAlongRoute:(bool)arg7 isOnRoute:(bool)arg8;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void*)controlPoints;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (unsigned long long)currentDisplayStep;
- (void)dealloc;
- (id)description;
- (id)destination;
- (unsigned int)distance;
- (double)distanceBetweenLocation:(struct { double x1; double x2; })arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2;
- (unsigned int)expectedTime;
- (unsigned int)firstVisiblePoint;
- (void)forEachSnappedPath:(id)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (id)geoRoute;
- (void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned int)arg3;
- (id)getSnappedPathsForLocation:(struct { double x1; double x2; })arg1 observer:(id)arg2;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4;
- (bool)hasExpectedTime;
- (id)initWithRoute:(id)arg1;
- (id)instructionsForStep:(id)arg1;
- (bool)isLocationCoordinate:(struct { double x1; double x2; })arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 withTransportType:(int)arg4;
- (bool)isSnapping;
- (id)legForPointIndex:(unsigned int)arg1;
- (id)legForStepIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForPointIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)arg1;
- (id)legs;
- (struct { double x1; double x2; })locationAtDistance:(double)arg1 from:(id)arg2;
- (unsigned int)maneuverDisplayCount;
- (bool)maneuverDisplayEnabled;
- (struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1;
- (void)maneuverDisplayHasChanged;
- (id)maneuverDisplaySteps;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(bool)arg5 maxDistance:(double)arg6;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(bool)arg5;
- (id)name;
- (void)notifyTrafficUpdated;
- (id)origin;
- (struct { double x1; double x2; })pointAt:(unsigned long long)arg1;
- (struct { double x1; double x2; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (void)removeObserver:(id)arg1;
- (id)routeID;
- (id)routeLegOfType:(long long)arg1 startStepIndex:(unsigned long long)arg2 steps:(id)arg3 startPointIndex:(unsigned long long)arg4 legPointCount:(unsigned long long)arg5;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 trackedLocation:(id)arg3 stopAtEndOfTunnel:(bool)arg4 stopAtEndOfManeuver:(bool)arg5 date:(id)arg6;
- (id)routeNames;
- (int)routeType;
- (id)sections;
- (unsigned long long)selectedLegIndex;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAllowsNetworkTileLoad:(bool)arg1;
- (void)setCurrentDisplayStep:(unsigned long long)arg1;
- (void)setDestination:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setFirstVisiblePoint:(unsigned int)arg1;
- (void)setManeuverDisplayEnabled:(bool)arg1;
- (void)setManeuverDisplaySteps:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setSelectedLegIndex:(unsigned long long)arg1;
- (void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(id)arg3 handler:(id)arg4;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)stepForPointIndex:(unsigned int)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (bool)supportsSnapping;
- (unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (id)zilchDataFromStepIndex:(unsigned long long)arg1;

@end
