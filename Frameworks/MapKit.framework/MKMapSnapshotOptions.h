/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    struct CGSize { 
        double width; 
        double height; 
    MKMapCamera *_camera;
    } _mapRect;
    unsigned long long _mapType;
    int _mode;
    } _region;
    double _scale;
    } _size;
    bool_rendersInBackground;
    bool_showsBuildings;
    bool_showsPointsOfInterest;
    bool_usingRect;
}

@property(copy) MKMapCamera * camera;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property unsigned long long mapType;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(getter=_rendersInBackground,setter=_setRendersInBackground:) bool rendersInBackground;
@property double scale;
@property bool showsBuildings;
@property bool showsPointsOfInterest;
@property struct CGSize { double x1; double x2; } size;
@property(readonly) bool usingRect;

- (void).cxx_destruct;
- (bool)_rendersInBackground;
- (void)_setRendersInBackground:(bool)arg1;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (unsigned long long)mapType;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (double)scale;
- (void)setCamera:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (struct CGSize { double x1; double x2; })size;
- (bool)usingRect;

@end
