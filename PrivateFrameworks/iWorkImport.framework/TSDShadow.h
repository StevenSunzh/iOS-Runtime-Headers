/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSUColor;

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {
    boolmEnabled;
    double mAngle;
    struct CGColor { } *mColor;
    double mOffset;
    double mOpacity;
    double mRadius;
}

@property(readonly) TSUColor * TSUColor;
@property(readonly) double angle;
@property(readonly) struct CGColor { }* color;
@property(getter=isEnabled,readonly) bool enabled;
@property(readonly) double offset;
@property(readonly) struct CGPoint { double x1; double x2; } offsetDelta;
@property(readonly) double opacity;
@property(readonly) NSString * presetKind;
@property(readonly) double radius;

+ (bool)automaticallyNotifiesObserversOfTSUColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (bool)canMixWithNilObjects;
+ (id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(struct CGColor { }*)arg6 enabled:(bool)arg7;
+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor { }*)arg6 enabled:(bool)arg7;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(bool)arg1;
+ (id)presetKinds;
+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor { }*)arg5 enabled:(bool)arg6;
+ (id)shadowWithNSShadow:(id)arg1;

- (id)NSShadow;
- (id)TSUColor;
- (double)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 flipped:(bool)arg3 extraOffset:(struct CGSize { double x1; double x2; })arg4;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 flipped:(bool)arg3;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (double)clampOffset:(double)arg1;
- (double)clampOpacity:(double)arg1;
- (double)clampRadius:(double)arg1;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)differenceRequiresRebuilding:(id)arg1;
- (unsigned long long)hash;
- (id)i_initWithOpacity:(double)arg1 color:(struct CGColor { }*)arg2 enabled:(bool)arg3;
- (struct CGImage { }*)i_newEmptyImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 unarchiver:(id)arg2;
- (bool)isContactShadow;
- (bool)isCurvedShadow;
- (bool)isDropShadow;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isThemeEquivalent:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4;
- (double)offset;
- (struct CGPoint { double x1; double x2; })offsetDelta;
- (double)opacity;
- (id)presetKind;
- (double)radius;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 archiver:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalAngle:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (unsigned long long)shadowType;
- (bool)showForEditingText;
- (id)typeDescription;

@end
