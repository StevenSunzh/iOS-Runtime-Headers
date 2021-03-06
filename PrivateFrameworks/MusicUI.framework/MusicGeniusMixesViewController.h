/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, UICollectionView, UIPageControl, UIView;

@interface MusicGeniusMixesViewController : MPUDataSourceViewController <MPUMiniPlayerParticipant, UICollectionViewDataSource, UICollectionViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    UICollectionView *_collectionView;
    } _collectionViewContentInsetAdditions;
    UIPageControl *_pageControl;
    UIView *_pageControlSpacingView;
    bool_isVisible;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)MPU_beginPlaybackForVisibleContent;
- (void)_cellPlayButtonAction:(id)arg1;
- (id)_collectionViewLayoutForCurrentSizeClass;
- (void)_configureForBoundsChange;
- (void)_configureForCurrentSizeClassAndReloadCollectionViewLayout:(bool)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForCurrentSizeClass;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_pageControlAction:(id)arg1;
- (void)_reloadPageControl;
- (void)_updateNavigationPrompt;
- (void)_updatePageControlCurrentPage;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)view;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
