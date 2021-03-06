/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLSlideshowPluginDelegate>, NSArray, NSObject<PLAlbumProtocol>, PLManagedAsset;

@interface PLSlideshowPlugin : NSObject {
    struct NSObject { Class x1; } *_album;
    NSArray *_albumAssets;
    <PLSlideshowPluginDelegate> *_delegate;
    double _secondsPerSlide;
    bool_shouldRepeat;
    bool_shuffleAlbum;
}

@property(retain) NSObject<PLAlbumProtocol> * album;
@property(retain) NSArray * albumAssets;
@property(readonly) PLManagedAsset * currentPhoto;
@property <PLSlideshowPluginDelegate> * delegate;
@property(readonly) NSArray * displayedPhotos;
@property double secondsPerSlide;
@property bool shouldRepeat;
@property bool shuffleAlbum;

- (struct NSObject { Class x1; }*)album;
- (id)albumAssets;
- (id)currentPhoto;
- (void)dealloc;
- (id)delegate;
- (id)displayedPhotos;
- (id)newSlideshowView;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (double)secondsPerSlide;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbumAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSecondsPerSlide:(double)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setShuffleAlbum:(bool)arg1;
- (bool)shouldRepeat;
- (bool)shuffleAlbum;
- (void)slideshowViewDidAppear;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewWillAppear;
- (void)stopSlideshow;

@end
