/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray;

@interface PUFeedCollectionViewSectionLayoutInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    long long _firstJoinedSection;
    NSArray *_fixedLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    } _footerSize;
    id _groupID;
    } _headerSize;
    long long _lastJoinedSection;
    } _margins;
    long long _nextVisibleSection;
    long long _numberOfTilesOmitted;
    } _origin;
    long long _previousVisibleSection;
    long long _sectionType;
    } _size;
    NSArray *_tileLayoutAttributes;
    bool_hidden;
}

@property long long firstJoinedSection;
@property(retain) NSArray * fixedLayoutAttributes;
@property(retain) NSArray * floatingLayoutAttributes;
@property struct CGSize { double x1; double x2; } footerSize;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(retain) id groupID;
@property struct CGSize { double x1; double x2; } headerSize;
@property(getter=isHidden) bool hidden;
@property long long lastJoinedSection;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property long long nextVisibleSection;
@property long long numberOfTilesOmitted;
@property struct CGPoint { double x1; double x2; } origin;
@property long long previousVisibleSection;
@property long long sectionType;
@property struct CGSize { double x1; double x2; } size;
@property(retain) NSArray * tileLayoutAttributes;

- (void).cxx_destruct;
- (long long)firstJoinedSection;
- (id)fixedLayoutAttributes;
- (id)floatingLayoutAttributes;
- (struct CGSize { double x1; double x2; })footerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)groupID;
- (struct CGSize { double x1; double x2; })headerSize;
- (id)init;
- (bool)isHidden;
- (long long)lastJoinedSection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (long long)nextVisibleSection;
- (long long)numberOfTilesOmitted;
- (struct CGPoint { double x1; double x2; })origin;
- (long long)previousVisibleSection;
- (long long)sectionType;
- (void)setFirstJoinedSection:(long long)arg1;
- (void)setFixedLayoutAttributes:(id)arg1;
- (void)setFloatingLayoutAttributes:(id)arg1;
- (void)setFooterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setLastJoinedSection:(long long)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNextVisibleSection:(long long)arg1;
- (void)setNumberOfTilesOmitted:(long long)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousVisibleSection:(long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTileLayoutAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tileLayoutAttributes;

@end
